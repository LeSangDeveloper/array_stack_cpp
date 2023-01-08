#ifndef ARRAY_STACK_H
#define ARRAY_STACK_H

#include<string>

class RuntimeException {
    private:
        std::string errorMsg;
    public:
        RuntimeException(const std::string& err) {errorMsg = err;}
        std::string getMessage() const {return errorMsg;}
};

template<typename E>
class ArrayStack {
    enum {DEF_CAPACITY = 100};
    private:
        E* S;
        int capacity;
        int t;
    public:
        ArrayStack(int capacity=DEF_CAPACITY);
        int size() const;
        bool empty() const;
        const E& top() const throw (RuntimeException);
        void push(const E& e) throw (RuntimeException);
        void pop() throw (RuntimeException);
};

#endif