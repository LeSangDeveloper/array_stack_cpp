#include"array_stack.h"
#include<string>

using namespace std;

template<typename E> 
ArrayStack<E>::ArrayStack(int cap) 
: S(new E[cap]), capacity(cap), t(-1) {}

template<typename E>
int ArrayStack<E>::size() const {
    return t+1;
}

template<typename E>
bool ArrayStack<E>::empty() const {
    return t < 0;
}

template<typename E>
const E& ArrayStack<E>::top() const throw (RuntimeException) {
    if (empty()) throw RuntimeException("Top of empty stack");
    return S[t];
}

template<typename E>
void ArrayStack<E>::push(const E& e) throw (RuntimeException) {
    if (size() == capacity) throw RuntimeException("push to full stack");
    S[++t] = e;
}

template<typename E>
void ArrayStack<E>::pop() throw (RuntimeException) {
     if (empty()) throw RuntimeException("pop of empty stack");
    --t;
}

template class ArrayStack<float>;
template class ArrayStack<int>;
template class ArrayStack<string>;