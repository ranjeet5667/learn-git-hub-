#include<iostream>
using namespace std;
class car{
    public:
    string name;
    int price;
    int seats;
    string type ;
    car(int s,string n, string t,int p){
    seats = s;
    name = n;
    price = p;
    type = t ;
    }
};
void print (car c) {
    cout<<c.name<<" "<<c.price<<" "<<c.seats<<" "<<c.type<<" "<<endl;
}
void change (car& c) {
    c.name = "mercedes ";
}
int main (){
    car c1(5,"Bmw","suv",300000);
    //c1.name = "bmw";
    ///c1.price = 300000;
    //c1.seats = 4;
    //c1.type = "suv";
    print (c1);
    change (c1);//
    print (c1);







//car c2;
//c2.name = "audi";
//c2.price = 200000;
//c2.seats = 8;
//c2.type = "sedan";
    
//print(c2);
//print(c1);
}