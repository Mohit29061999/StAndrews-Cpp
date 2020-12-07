
#include <bits/stdc++.h>
using namespace std;


void allIndex(int arr[],int n,int i,int x){
    if(i==n){
            cout << -1 << endl;
        return;
    }
    if(arr[i]==x){
        cout << i << " ";
        return;
    }
    allIndex(arr,n,i+1,x);
}


int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    int x;
    cin>>x;

  allIndex(arr,n,0,x);
}


