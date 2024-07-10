#include<iostream>
#include<stack>

using namespace std;

int main()
{
    std::stack<int>s;
    std::cout<<"Enter 5 integers: ";

    for(int i=0;i<5;i++)
    {
        int value;
        std::cin>>value;
        s.push(value);
    }


    int sum=0;
    while(!s.empty())
    {

        sum = sum+ s.top();
        s.pop();

    }

    std::cout<<sum;
}
