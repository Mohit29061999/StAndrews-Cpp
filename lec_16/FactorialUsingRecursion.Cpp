#include <iostream>
using namespace std;
//recursive Function
int fact(int n){
    if(n==1 || n==0){  //base case(value for which
                      //answer can be calculated easily
        return 1;
    }
    //break into smaller problem(here,n-1)
    return n*fact(n-1);

}

int main(){

cout << fact(5) << endl;




    return 0;
}

