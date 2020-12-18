#include <bits/stdc++.h>
using namespace std;

class Car{
public:
    int price;
    char model;
    string name="BMW";

    Car(int p,char m,string s){
        price=p;
        model = m;
        //name from Bmw to audi
        name =s;
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
    char m;
    cin>>m;
    string s;
    cin>>s;
    m='m';
    s="AUDI";
    //use of constructor to initialise objects
    //Car a(100,m);
    Car b(10000,m,s);


//     Car b;
  cout <<  b.name  << endl;
   // b.model='A';
   // b.price =1000000;

  //  Car c;

   // cout << a.price << " " << b.price << endl;
   //a.printName();
    // b.printName();


}
