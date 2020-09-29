#include <iostream>
using namespace std;



int main(){
int a=10;

//int a=5;  //redefine
//same block me redefine
int i=0;   //main me define
for(i<10;i++){
        cout << i;
    int a=5;   //redefination of a
    cout << a << endl;   ///khud ke block({})
}   //for ends

cout << i << endl;
}


