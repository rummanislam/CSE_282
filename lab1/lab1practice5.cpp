#include<iostream>
#include<string.h>
using namespace std;
struct complex{
   float real;
   float img;
}c1,c2,c3;
int main(){

   cout<<"enter the first complex number:" <<endl;
   cin>>c1.real;
   cin>>c1.img;

   cout<<"enter the 2nd complex number:" <<endl;
   cin>>c2.real;
   cin>>c2.img;
   c3.real=c1.real-c2.real;
   c3.img=c1.img-c2.img;
   if(c3.img>0){
        cout<<"sustract= "<<c3.real<<"-"<<c3.img<<"i";
    }
   else
    cout<<"sustract= "<<c3.real<<" "<<c3.img<<"i";
   return 0;


}
