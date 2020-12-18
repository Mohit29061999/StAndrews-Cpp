#include <bits/stdc++.h>
using namespace std;

class Car{
public:
    int price;
    char model;
    string name;
    //operator overloading
    //d is the object that is used to assign
    void operator=(Car &d){
                   cout << "assignment operator" << endl;
        price = d.price;  //lhs me b ke h and rhs = a;
        model = d.model;
        name = d.name;
    }

    //+ operator overloading
    int operator+(Car &d){
        //price =2000(b) , d.price =10000(a)
        cout << "calling price "<< price << " other one "  << d.price << endl;
        return price+d.price;
    }


    Car(){
         cout << "In Default constructor" << endl;
    }

    Car(Car &a){  //for car a:it will give error
        cout << "In copy constructor" << endl;
        //lhs me one getting initialised
      price = 0;
      model = a.model;
      name = a.name;
    }
    //default destructor as added by cpp
    ~Car(){
        //my destructor
       cout << "in destructor"  << name << endl;
    }


};


int main(){

Car a;
a.name ="BMW";
a.price =1000;
a.model='A';

Car b;
b=a;  //assignment as b was already defined

//cout << b.name << endl;
//cout << b.price << endl;
//cout << b.model << endl;

b.name ="AUDI";

//b is calling + operator , a is passed as argument
//int x=b+a;
//cout << x << endl;

//Car d=a;  //copy constructor;


//cout << d.name << endl;
//cout << d.price << endl;
//cout << d.model << endl;

return 0;




}

