#include <iostream>
using namespace std;

void printEnglish(int n,string arr[]){
    if(n==0){
        return;
    }
    int x=n%10;  //last digit extract
   // cout <<x << endl;
    //cout << arr[x] << " ";  //reverse print karega
    printEnglish(n/10,arr);
    cout << arr[x] << " ";
}


int main(){
string arr[]={"zero","one","two","three","four","five","six","seven","eight","nine"};
//cout << arr[8] << endl;
printEnglish(48,arr);
}


