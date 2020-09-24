#include <iostream>
using namespace std;


int main(){
    int n;
    cout << "Enter the value of n" << endl;
    cin>>n; //total numbers to be printed.
    cout <<"enter the value of a and d" << endl;
    int a;
    cin>>a;  //user input for a
    int d;
    cin>>d; //user input for d
    int count=1;
    while(count<=n){
        cout << a + count*d << " ";
        count=count+1;
    }



return 0;
}

