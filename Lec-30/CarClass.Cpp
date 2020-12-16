#include <bits/stdc++.h>
using namespace std;

class Car{
    protected:
    string type;

    public:

    int model;
    void setype(string s){
    type=s;
    cout << type << endl;
    }
    char color;


};

int main(){

Car a;
a.setype("man");

a.color='W';


//cout << a.model << endl;
cout << a.color << endl;






}


