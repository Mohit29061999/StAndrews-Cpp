#include <bits/stdc++.h>
using namespace std;

void bubblesort(int arr[],int n,int x){
    if(x==0)
        return;
        //maximum value apni position pe aa jayegi from 0 to x
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    bubblesort(arr,n,x-1);
}


int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];

    bubblesort(arr,n,n-1);
    for(int i=0;i<n;i++)
        cout << arr[i] << " ";








}



