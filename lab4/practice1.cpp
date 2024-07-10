#include <iostream>
#include <stack>

int main() {
    std::stack<int> myStack;

    std::cout << "Enter 5 integer values:\n";

    for (int i = 0; i < 5; ++i) {
        int value;
        std::cin >> value;
        myStack.push(value);
    }

    int sum = 0;
    while (!myStack.empty()) {
        sum += myStack.top();
        myStack.pop();
    }

    std::cout << "Sum of the stack elements: " << sum << std::endl;

    return 0;
}

