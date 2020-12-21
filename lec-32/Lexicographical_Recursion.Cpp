#include <bits/stdc++.h>
using namespace std;


void printNumber(int x,int n){
    //base case
    if(x>n)
        return;
    //x is less than n
    cout << x << " ";

    //try all digit as next digit
    for(int i=0;i<=9;i++){
        int y=x*10+i;  //1*10+0=10
        //print all number with current digit as i
        printNumber(y,n);

    }
}

int main(){

int n;
cin>>n;

cout << 0 << " ";
//first digit as 1 to 9
for(int i=1;i<=9;i++){
    printNumber(i,n);
}


}

