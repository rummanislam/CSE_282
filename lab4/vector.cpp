#include<iostream>
#include<bits/stdc++.h>
#include<vector>

using namespace std;

int main()
{
    vector<int>vec1;

    vec1.push_back(10);
    vec1.push_back(20);

    int a;

    for(int i=0;i<5;i++)
    {
        cin>>a;
        vec1.push_back(a);
    }

    vec1.pop_back( );
    for(int i=0;i<vec1.size();i++)
    {
        cout<<vec1[i]<<" ";
    }
}
