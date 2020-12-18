#include <bits/stdc++.h>
using namespace std;

class Car{
public:
    int price;
    char model;
    string name="BMW";
    //copy constructor : initialise object from another object of same class
    Car(Car &a){  //for car a:it will give error
        cout << "In copy constructor" << endl;
        //lhs me one getting initialised
      price = 0;
      model = a.model;
      name = a.name;
    }

    Car(){
         cout << "In Default constructor" << endl;
    }

    void printPrice(){
        cout << price << endl;
    }

     void printModel(){
        cout << model << endl;
    }

     void printName(){
        cout << name << endl;
    }

};

int main(){

Car a;
a.name ="BMW";
a.price =1000;
a.model='A';

Car b=a;
cout << b.price << endl;
cout << a.price << endl;




}

