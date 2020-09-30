
#include <deque>
#include <string>
#include <stdexcept>
#include "simplestackwithvector.hpp"

// this template is a specialization of the Stack class template for std::string
// for the other ones like int and float types the normal template will come in to action
// this is called explicit or full specialization

template<>  // this template syntax indicates template specialization
class Stack<std::string> {
  private:
    std::deque<std::string> elems;  // elements

  public:
    void push(std::string const&);  // push element
    void pop();                     // pop element
    std::string top() const;        // return top element
    bool empty() const {            // return whether the stack is empty
        return elems.empty();
    }
};


// for every definition of the member function we have to use definition like this one below
void Stack<std::string>::push (std::string const& elem) 
{
    elems.push_back(elem);    // append copy of passed elem
}

void Stack<std::string>::pop ()
{
    if (elems.empty()) {
        throw std::out_of_range
                ("Stack<std::string>::pop(): empty stack");
    }
    elems.pop_back();         // remove last element
}

std::string Stack<std::string>::top () const
{
    if (elems.empty()) {
        throw std::out_of_range
                ("Stack<std::string>::top(): empty stack");
    }
    return elems.back();      // return copy of last element
}
