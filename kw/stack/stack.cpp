#ifndef STACK_CPP_
#define STACK_CPP_

template<typename item_type>
   stack<item_type>::stack(){}

template<typename item_type>
void stack<item_type>::push(const item_type& item){
  container.push_back(item);

  // and continue ...
}
