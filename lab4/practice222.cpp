#include<iostream>
#include<stack>

using namespace std;

int fact(int n)
{
    if(n==0 || n==1)
    {
        return 1;
    }

    else{
        int fact0=n*fact(n-1);
        return fact0;
    }
}

int main()
{
    int i;
    stack<int>stack_1;
    stack<int>stack_2;

    for(i=0;i<6;i++)
    {
        stack_1.push(i);

    }


    for(;!stack_1.empty();)
    {
        int temp= stack_1.top();
        stack_2.push(fact(temp));
        stack_1.pop();
    }

    for(i=0;i<6;i++)
    {
        cout<<"Factorial : "<<i<<" = "<< stack_2.top()<<endl;
        stack_2.pop();
    }

}
