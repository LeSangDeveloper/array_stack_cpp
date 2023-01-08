#include "array_stack.h"
#include<string>
#include<iostream>

using namespace std;

int main() {
    ArrayStack<int> A;
    A.push(7);
    A.push(13);
    cout << A.top() << endl;
    A.pop();
    cout << A.top() << endl;

    ArrayStack<string> B;
    B.push("<");
    B.push("a");
    B.push("/>");
    cout << B.top() << endl;
    B.pop();
    cout << B.top() << endl;
}