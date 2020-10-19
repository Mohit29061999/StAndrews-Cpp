#include <iostream>
using namespace std;
//recursive Function
int fib(int n){
   /* if(n==1){  //base case 1
        cout << 0 << endl;
       // return 0;
    }
    if(n==2){  //base case 2
        cout << 1 << endl;
        //return 1;
    }*/


    int y=fib(n-1)+fib(n-2);  //breaking into small problems
    return y;

}

int main(){
cout << fib(10) << endl;





    return 0;
}


