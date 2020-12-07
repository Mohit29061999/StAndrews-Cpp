
#include <bits/stdc++.h>
using namespace std;

void selectionsort(int arr[],int n,int i){
    if(i==n-1)
        return;
    int min_val=INT_MAX;
    int min_index=-1;
    for(int j=i;j<n;j++){
        if(arr[j]<min_val){
            min_val = arr[j];
            min_index=j;
        }
    }
    swap(arr[i],arr[min_index]);
    selectionsort(arr,n,i+1);
}



int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];
    selectionsort(arr,n,0);

    for(int i=0;i<n;i++)
        cout << arr[i] << " ";
}
