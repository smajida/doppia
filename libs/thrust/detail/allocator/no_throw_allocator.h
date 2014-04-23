/*
 *  Copyright 2008-2012 NVIDIA Corporation
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing, software
 *  distributed under the License is distributed on an "AS IS" BASIS,
 *  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *  See the License for the specific language governing permissions and
 *  limitations under the License.
 */

#pragma once

#include <thrust/detail/config.h>

namespace thrust
{
namespace detail
{

template<typename BaseAllocator>
  struct no_throw_allocator : BaseAllocator
{
  private:
    typedef BaseAllocator super_t;
  
  public:
    template<typename U>
      struct rebind
    {
      typedef no_throw_allocator<typename super_t::template rebind<U>::other> other;
    }; // end rebind

    void deallocate(typename super_t::pointer p, typename super_t::size_type n)
    {
      try
      {
        super_t::deallocate(p, n);
      } // end try
      catch(...)
      {
        // catch anything
      } // end catch
    } // end deallocate()

    inline bool operator==(no_throw_allocator const &other) { return super_t::operator==(other); }
    inline bool operator!=(no_throw_allocator const &other) { return super_t::operator!=(other); }
}; // end no_throw_allocator

} // end detail
} // end thrust

