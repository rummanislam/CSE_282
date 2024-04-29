#include<iostream>
#include<string.h>
using namespace std;
struct Student{
    string name;
    int age;
    int roll;
    float marks;
}student1;
int main(){
cout<<"Enter the name: "<<endl;
getline(cin,student1.name);
student1.age=23;
student1.roll=2108019;
student1.marks=286.5;
cout<<"Name: "<<student1.name<<endl;
cout<<"Age: "<<student1.age<<endl;
cout<<"Roll: "<<student1.roll<<endl;
cout<<"Marks: "<<student1.marks<<endl;
return 0;





}
