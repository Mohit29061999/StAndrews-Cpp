
#include <iostream>
using namespace std;

//function main se pahle define krna hota h agar prototype nhi kiya ho

bool isPrime(int n){
//function ka kaam
 for(int i=2;i<=n-1;i++){
    if(n%i==0){
        return false;    //return is end of function
    }
 }

// int x=5;
 //int x=5;  //same function ke block me redefine kar rahe ho

 return true;
}




int main(){
int n;
cin>>n;

//function ne main ko bta diya ab main user ko btaya
if(isPrime(n)==true){
    cout << "Prime" << endl;  //user ko bta rha hu
}
else{
    cout << "Not Prime" << endl;  //user ko bta rha hu
}

return 0;

}
