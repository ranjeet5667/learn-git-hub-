#include <iostream>
# include <string>
using namespace std;
class teacher {
   private: double salary;
    public:
    string name;
    string dept;
    string subject;

    void changeDept(string newDept) {
    dept = newDept;
}
void setsalary(double s) {
    salary = s;
}
double getsalary() {
    return salary;
}
};
int main(){
teacher t1;
t1.name = "sharadha";
t1.subject = "c++";
t1.dept = "computer science";
t1.setsalary(25000);
cout<< t1.name << end|;
cout << t1.getsalary() << end |;
return 0;
}