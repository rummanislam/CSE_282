#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main()
{
stack<int>mystack;

mystack.push(1);
mystack.push(2);

while(!mystack.empty())
{
    cout<<mystack.top()<<" ";
    mystack.pop();
}
}
