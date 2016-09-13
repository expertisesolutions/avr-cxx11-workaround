//          Copyright Felipe Magno de Almeida 2016.
// Distributed under the Boost Software License, Version 1.0.
//    (See accompanying file LICENSE_1_0.txt or copy at
//          http://www.boost.org/LICENSE_1_0.txt)

#ifndef AVR_CPP11_WORKAROUND_FORWARD_HPP
#define AVR_CPP11_WORKAROUND_FORWARD_HPP

#include <avr-c++11-workaround/type_traits.hpp>

namespace std {

template <typename T>
T&& forward(typename std::remove_reference<T>::type& v)
{
  return static_cast<T&&>(v);
}
template <typename T>
T&& forward(typename std::remove_reference<T>::type&& v)
{
  return static_cast<T&&>(v);
}
  
}

#endif
