#ifndef STACK_H_
#define STACK_H_

//DIRECTIVES
#include <vector>
namespace m {
  template<typename item_type>
    class stack {
  public:
    stack();
    void push(const item_type& item);
    item_type& top();
    const item_type& top() const;
    void pop();
    bool empty() const;
    size_t size() const;
  private:
    std::vector<item_type> container;
  };
  #include "stack.cpp"
}
#endif
