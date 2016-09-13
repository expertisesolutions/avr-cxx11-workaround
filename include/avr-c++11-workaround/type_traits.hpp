//          Copyright Felipe Magno de Almeida 2016.
// Distributed under the Boost Software License, Version 1.0.
//    (See accompanying file LICENSE_1_0.txt or copy at
//          http://www.boost.org/LICENSE_1_0.txt)

#ifndef AVR_CPP11_WORKAROUND_TYPE_TRAITS_HPP
#define AVR_CPP11_WORKAROUND_TYPE_TRAITS_HPP

namespace std {

template <typename T>
struct remove_reference { typedef T type; };

template <typename T>
struct remove_reference<T&> { typedef T type; };

template <typename T>
struct remove_reference<T&&> { typedef T type; };
  
}

#endif
