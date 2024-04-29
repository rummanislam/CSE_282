#include<iostream>
#include<string.h>
using namespace std;
struct Student{
    string name;
    int roll;
    float chem,math,phy;
}student[6];
int main(){
    for(int i=0;i<5;i++){

cout<<"Enter the name:" ;
cin.ignore();
getline(cin,student[i].name);
cout<<"Enter the Roll:" ;
cin>>student[i].roll ;
cout<<"marks in chemistry:" ;
cin>>student[i].chem ;
cout<<"marks in mathematics:" ;
cin>>student[i].math ;
cout<<"marks in physics:" ;
cin>>student[i].phy ;

}
for(int i=0;i<5;i++){
cout<<"Name: "<<student[i].name<<endl ;
cout<<"Roll: "<<student[i].roll<<endl ;
float p=(student[i].chem +student[i].math +student[i].phy)/3;
cout<<"percentage of marks: " <<p<<endl;

}


return 0;
}
