#include<iostream>
#include<string.h>
using namespace std;
struct Student{
    string name;
    int age;
    int roll;
}student[6];
int main(){
    for(int i=0;i<5;i++){

cout<<"Enter the name:" ;
cin.ignore();
getline(cin,student[i].name);
cout<<"Enter the Age:" ;
cin>>student[i].age ;
cout<<"Enter the Roll:" ;
cin>>student[i].roll ;
}
cout<<"Details of student no.2:\n" <<endl;
cout<<"Name: "<<student[1].name<<endl;
cout<<"Age: "<<student[1].age<<endl;
cout<<"Roll: "<<student[1].roll<<endl;
return 0;
}
