#include <iostream>
#include <climits>   //library for INT_MAX and INT_MIN
using namespace std;


int main(){

    int n;
    cout << "Enter the value to be checked n" << endl;
    cin>>n; //total numbers
     if(n==1){
        cout << "Not Prime";
        return 0;
     }
    int i=2;   //number we are currently checking from 2 to n-1.
    while(i<=n-1){
            //inside the loop
        if(n%i==0){
            cout << "Not Prime";
            return 0;  //exit kar dega
        }
        i++;
    }

    //for 5 : we will reach here
    cout << "Prime";


//for 5:this return 0 will get exceute
return 0;
}

///return 0 yaha aayega


