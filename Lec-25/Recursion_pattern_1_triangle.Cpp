

#include <bits/stdc++.h>
using namespace std;

void triangle(int i,int n){
   if(i>n)
    return;

    //current row work
    for(int j=1;j<=i;j++){
        cout << "*" << " ";

    }
    cout << endl;
    //next row ka work
    triangle(i+1,n);


}



int main(){

    int n;
    cin>>n;

    triangle(1,n);



}



