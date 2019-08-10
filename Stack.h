#include <iostream>
#include <deque>
#include <cstdlib>
#include <vector>
#include <stdexcept>

template <typename T, typename CONT = std::vector<T> >
class Stack {
  private:
    CONT elems;               // elements

  public:
    void push(T const&);      // push element
    void pop();               // pop element
    T top() const;            // return top element
    bool empty() const {      // return whether the stack is empty
        return elems.empty();
    }
};
