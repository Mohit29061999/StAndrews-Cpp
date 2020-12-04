#include <bits/stdc++.h>
using namespace std;
//current function call me: i to n
bool Issorted(int arr[],int n,int i){
    //base case: n-1 to n-1 ka array
    if(i==n-1)
        return true;
    if(arr[i]>arr[i+1])
        return false;

    //to check for i+1 to n
    return Issorted(arr,n,i+1);
}


int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];

    if(Issorted(arr,n,0)){
        cout << "Yes" << endl;
    }
    else
        cout << "No" << endl;





}

