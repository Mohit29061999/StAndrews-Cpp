#include <iostream>
using namespace std;

bool isarraysorted(int arr[],int i,int n){
    if(i==n-1){  //base case:jab ek hi element bacha ho
        return true;
    }
    bool chotasorted = isarraysorted(arr,i+1,n);  //sub-problem
    if(chotasorted==false){
        return false;
    }
    else{  //chotasorted==true
        if(arr[i]<=arr[i+1]){
            return true;
        }
        else{
            return false;
        }
    }
}


int main(){
 int arr[]={1,2,5,4};
 if(isarraysorted(arr,0,4)==true){
    cout << "YES";

 }
 else{
    cout << "NO";
 }
}
