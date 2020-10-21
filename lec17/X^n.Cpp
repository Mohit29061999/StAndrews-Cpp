#include <iostream>
using namespace std;

int power(int x,int n){
    if(n==0){  //base case 1:0th power
        return 1;
    }
    if(n==1){  //base case 2: x^1
        return x;
    }

    int y=power(x,n-1); //chote ka answer
    return x*y;

}


int main(){
 cout << power(4,2);
}

