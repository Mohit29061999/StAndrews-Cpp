#include <iostream>
using namespace std;


int main(){
int n;
cout << "Enter the value of n" << endl;
cin>>n;

int i=2;  //1 already know that it is not prime
while(i<=n){
        //currently we are checking i for prime
    bool flag = true;     //flag == true number is prime else not.
    int curr = 2;          //try all number from 2 to n-1 for current number
    while(curr<=(i-1)){
        if(i%curr ==0){
            flag=false;  //if divisible then not prime
        }
        curr++;
    }
    if(flag==true){
        cout << i << " ";     //if prime then print it.
    }
    i++;
}
return 0;
}
