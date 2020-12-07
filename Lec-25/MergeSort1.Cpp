#include <bits/stdc++.h>
using namespace std;

void mergeArr(int arr[],int s,int e,int mid){
int a[200000];
int b[200000];
int n=mid-s+1;
int m=e-mid;
//store elements in a from arr[s] to arr[mid]
for(int i=0;i<n;i++){
    a[i]=arr[s+i];
}

//store elements in b from arr[mid+1] to arr[end]
for(int i=0;i<m;i++){
    b[i]=arr[mid+1+i];
}

int i=0;
int j=0;
int k=s;
while(i<n && j<m){
    if(a[i]<b[j]){
        arr[k] = a[i];
        i++;
        k++;
    }
    else{
        arr[k]=b[j];
        j++;
        k++;
    }
}
//if b end but a doesn't
while(i<n){
    arr[k] = a[i];
        i++;
        k++;
}
//if a end but b doesn't
while(j<m){
     arr[k]=b[j];
        j++;
        k++;
}





}

void mergeSort(int arr[],int s,int e){
    if(s==e)
        return;
    int mid =(s+e)/2;
    //divide and sort individual part
    mergeSort(arr,s,mid);
    mergeSort(arr,mid+1,e);
    //merge the two array
    mergeArr(arr,s,e,mid);
}

int main(){
    int arr[4]={4,1,2,3};
    mergeSort(arr,0,3);

    for(int i=0;i<4;i++)
        cout << arr[i] << " ";
}
