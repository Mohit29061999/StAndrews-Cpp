#include <iostream>
using namespace std;


int main(){
int n;
cout << "Enter the value of whose square root to be found" << endl;
cin>>n;

int d;
cout << "Till what decimal place" << endl;
cin>>d;

float inc =1;    //to increament by this value
float ans =0;   //store square root
int curr=1;    //to keep count of digits printed.

while(curr<=d){      //keep count of digit (since we have to print d digit only)

    while(ans*ans <= n){    //till we have square smaller , go in loop
        ans +=inc;            //change ans for next value
    }
    ans = ans - inc;     //we stop at one more
    inc = inc/10;        //inc changes by 10 each time ie.1 to 0.1 to 0.01
    curr++;     //we have found one digit
}
cout << ans ;


return 0;
}

