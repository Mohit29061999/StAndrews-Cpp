#include <iostream>
#include <climits>   //library for INT_MAX and INT_MIN
using namespace std;


int main(){

    int n;
    cout << "Enter the value of n" << endl;
    cin>>n; //total numbers

    int max_v=INT_MIN;  //store largest of n numbers.
    int i=1;  //to keep count of value given.
    while(i<=n){
        cout << "Tell the next value" << endl;
       int val;    //next value from user.
       cin>>val;  //take input from user.
       if(max_v<val){   //new value gretear than already max value
        max_v = val;
       }
       i++;
    }
    cout << max_v << endl;



return 0;
}



