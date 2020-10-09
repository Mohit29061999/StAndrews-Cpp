#include <iostream>
using namespace std;

int add(int a=0,int b=0,int c=10){  //a,b,c are default argument

    //cout << a+b+c << endl;
    return a+b+c;
}

int main(){
  cout << add(1) << endl;  //a=1,b=0,c=0
  cout << add() << endl;   //a=0,b=0,c=0
  cout << add(1,10,15) << endl;  //a=1,b=10,c=15
  cout << add(15,20) << endl;    //a=15,b=20,c=0

}


