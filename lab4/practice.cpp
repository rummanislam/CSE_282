#include<bits/stdc++.h>

using namespace std;


int main()  {

int sum=0,a;

stack<int>s;

cout<<"Enter 5 numbers: "<<endl;

for(int i=0;i<5;i++)
{
    cin>>a;
    s.push(a);
}

cout<<" The sum= "<<endl;

while(!s.empty())
{
    sum=sum+s.pop();
    cout<<sum;
}
}

