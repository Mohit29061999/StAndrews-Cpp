#include <iostream>
using namespace std;

int checkFor7(int arr[],int n,int i){
    if(i==n){  //reached end of array while searching
        return -1;
    }
    if(arr[i]==7){
        return i;
    }
    return checkFor7(arr,n,i+1);
}

void All7(int arr[],int n,int i){
    if(i==n){  //reached end of array while searching
        return;
    }
    if(arr[i]==7){
       cout << i << " ";
    }
    All7(arr,n,i+1);
}


int main(){
 int arr[]={1,3,4,7,7,8};
 //cout << checkFor7(arr,4,0);
 All7(arr,6,0);

}



