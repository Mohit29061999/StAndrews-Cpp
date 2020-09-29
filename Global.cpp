#include <iostream>
using namespace std;

//float pi =3.14;   //Global Variable
                   //defined in global block
//float pi = 1.4;  ///same block me redefine

void fun(){
    float pi = 11;
  cout <<"in fun" << pi << endl;
}

int main(){
    //float pi = 10;     //defined in main block
cout << "in main" <<pi << endl;   //use of global variable;

fun();
}



