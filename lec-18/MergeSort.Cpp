#include <iostream>
using namespace std;

void merge(int arr[],int start,int mid,int end){
    int a[100];  //a stores element from start to mid;
    int b[100];  //b stores element from mid+1 to end;
    int n=mid+1-start; //2,5  //2,3,4,5
    int m=end - mid;
    for(int i=0;i<n;i++){
        a[i]=arr[start+i];
    }
     for(int i=0;i<m;i++){
        b[i]=arr[mid+1+i];
    }
    int i=0;
    int j=0;
    int k=start;
    while(i<n && j<m){
        if(a[i]<=b[j]){
            arr[k]=a[i];
            i++;
            k++;
        }
        else{
             arr[k]=b[j];
            j++;
            k++;
        }
    }
    while(i<n){
        arr[k]=a[i];
        i++;
        k++;
    }
    while(j<m){
         arr[k]=b[j];
        j++;
        k++;
    }
}

void mergesort(int arr[],int start,int end){
    if(start>=end){
        return;
    }
    int mid = (start+end)/2;
    mergesort(arr,start,mid);  //sort from start to mid;
      mergesort(arr,mid+1,end);  //sort from mid+1 to end;
      //finally merge the sorted half
      merge(arr,start,mid,end);

}

int main(){
   int arr[]={4,3,2,1};
   mergesort(arr,0,3);
   for(int i=0;i<4;i++)
    cout << arr[i] << " ";
return 0;
}



