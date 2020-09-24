#include <iostream>
using namespace std;


int main(){
    int n;
    cout << "Enter the value of N" << endl; //better programming pratice
    cin>>n;  //user se input
    int i=1;   //initialisation
    while(i<=n){  //condition step
            if(i%2==0){
        cout << i << " ";
        }  //to add space between number
        i=i+1;  //updation
    }


return 0;
}

