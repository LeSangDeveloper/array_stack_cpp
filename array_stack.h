#ifndef ARRAY_STACK_H
#define ARRAY_STACK_H

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
        const E& top() const;
        void push(const E& e);
        void pop();
}

#endif