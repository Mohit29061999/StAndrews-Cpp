#include <iostream>
using namespace std;

bool isPrime(int n){
//function ka kaam
 for(int i=2;i<=n-1;i++){
    if(n%i==0){     //6 2 se divide hota h toh directly bol do prime nhi h 6
        return false;    //return is end of function
    }
 }
 return true;
}

//jo main se input lega and output user ko dega
void printPrimes(int n){
for(int i=2;i<=n;i++){  //2 to n tak saari values try kar rha h
                        //jo prime hoga print karo else do nothing.
if(isPrime(i)==true){
  cout << i << " ";     //user ko directly bta rahe ho
}
}
}
int main(){
int n;
cin>>n;  //(1)
printPrimes(n);   //(2)
return 0;
}
