#include<bits/stdc++.h>
using namespace std;

int main()
{
    queue<int>q;

    q.push(20);
    q.push(30);
    q.push(40);
    q.push(40);


    while(!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop();
    }
}
