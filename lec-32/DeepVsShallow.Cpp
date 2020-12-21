#include <bits/stdc++.h>
using namespace std;


class Name{
public:
    char *name;
    Name(){
        name =new char[100];
    }
    Name(Name &a){
        //shallow
       // name =a.name;

       //deep copying
       //make a new memory first
       name = new char[100];
        strcpy(name,a.name);


    }

};

int main(){
    Name n;
    char temp[]="Mohit";
    strcpy(n.name,temp);
    //copy constructor
    Name b=n;
    b.name[0]='W';
    cout << b.name << " " << n.name << endl;


}
