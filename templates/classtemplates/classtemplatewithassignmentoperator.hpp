
#ifndef STACK_HPP
#define STACK_HPP

#include <deque>
#include <stdexcept>

#include "classtemplatewithassignmentoperatordecl.hpp"
#include "classtemplatewithassignmentoperatordef.hpp"

template <typename T>
void Stack<T>::push (T const& elem)
{
    elems.push_back(elem);    // append copy of passed elem
}

template<typename T>
void Stack<T>::pop ()
{
    if (elems.empty()) {
        throw std::out_of_range("Stack<>::pop(): empty stack");
    }
    elems.pop_back();         // remove last element
}

template <typename T>
T Stack<T>::top () const
{
    if (elems.empty()) {
        throw std::out_of_range("Stack<>::top(): empty stack");
    }
    return elems.back();      // return copy of last element
}

#endif // STACK_HPP
