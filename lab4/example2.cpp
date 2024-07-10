#include<bits/stdc++.h>
using namespace std;

int main()

{
    stack<int>mystack;

    mystack.push(30);
    mystack.push(20);
    mystack.push(21);
    mystack.push(10);



    while(!mystack.empty())
    {
        cout<<mystack.top()<<" ";
        mystack.pop();
    }
}
