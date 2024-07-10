#include<iostream>
#include<stack>

using namespace std;

int fact(int n)
{
    if(n==0 || n==1)
    {
        return 1;
    }

    else
    {
        return n*fact(n-1);
    }
}

int main()
{

    stack<int>s1;
    stack<int>s2;

    for(int i=0;i<6;i++)
    {
       // int value;
        //cin>>value;
        s1.push(i);

    }

    for(;!s1.empty();)
    {
        int rep;

        rep=s1.top();
        s1.pop();
        s2.push(fact(rep));
    }


    for(int i=0;i<6;i++)
    {
       cout<<"Factorial : "<<i<<" = "<<s2.top()<<endl;
        s2.pop();
    }




}
