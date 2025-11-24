#include<iostream>
using namespace std;
class Student{
    public:
    string name;
    int roll_no;
    float gpa;

    Student(string s, int r, float g){
        name = s;
        roll_no =r;
        gpa = g;
    }
};

int main(){
    Student s1("Ranjeet kumar",50 , 3.4);
   // s1.name = "ranjeet kumar";
 //s1.roll_no = 50;
 //s1.gpa = 3.4;
 cout<<s1.name<<endl;
 cout<<s1.roll_no<<endl;
 cout<<s1.gpa<<endl;
}