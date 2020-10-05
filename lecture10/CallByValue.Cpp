
#include <iostream>
using namespace std;

void update(int &x){
    x=x+1;   //n=11;
    cout << "in Function" << x << endl;
}

int main(){
int n=10;

//variable refrence type ka
int &x=n;    //ek hi variable h bas do name ho gaye x,n
x++;  //n=12;
update(n);
cout << n << endl;  //output?





return 0;

}

