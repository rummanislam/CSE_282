#include <iostream>
#include <stack>

using namespace std;

// Recursive function to calculate factorial
unsigned long long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    stack<int> inputStack;
    stack<unsigned long long> outputStack;

    // Push values 0 to 5 onto the input stack
    for (int i = 0; i <= 5; i++) {
        inputStack.push(i);
    }

    // Calculate factorials and push onto output stack
    while (!inputStack.empty()) {
        int element = inputStack.top();
        inputStack.pop();
        unsigned long long factorialValue = factorial(element);
        outputStack.push(factorialValue);
    }

    // Print the output stack
    cout << "Output stack: ";
    while (!outputStack.empty()) {
        cout << outputStack.top() << " ";
        outputStack.pop();
    }
    cout << endl;

    return 0;
}

