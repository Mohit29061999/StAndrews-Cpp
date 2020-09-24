#include <iostream>
using namespace std;


int main(){

    int n;
    cout << "Enter the value of n" << endl;
    cin>>n; //total numbers to be printed.

    int no=2;  //even value currently
    int sum=0;  //for storing sum

    while(no<=n){
          sum=sum+no;  //add current even number
          no=no+2;
          }

          cout << sum ;



return 0;
}


