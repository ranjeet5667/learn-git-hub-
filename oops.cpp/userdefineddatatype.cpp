#include<iostream>
using namespace std;
class Student{
    public:
    string name;
    int roll_no;
    float gpa;
};

int main(){
    Student s1;
    s1.name = "ranjeet kumar";
 s1.roll_no = 50;
 s1.gpa = 3.4;
 cout<<s1.name<<endl;
 cout<<s1.roll_no<<endl;
 cout<<s1.gpa<<endl;
}