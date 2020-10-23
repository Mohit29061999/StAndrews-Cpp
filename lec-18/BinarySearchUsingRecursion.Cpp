#include <iostream>
using namespace std;
int bs(int arr[],int n,int start,int end,int x){
    if(start>end){  //ye case tab aayega jab saari values search ho
        return -1;   //gyi hogi
    }
      // [1,2,3,4,5,6,7,8,9,10]
    int mid = (start+end)/2;  //mid ka index nikala h
    if(arr[mid]==x){
        return mid;
    }
    else if(arr[mid]>x){  //[1,2,3,4,5]
        return bs(arr,n,start,mid-1,x);  //ignore the right half
    }
    else{                    //[1,2,3,4,5]
         return bs(arr,n,mid+1,end,x);   ////ignore the right half
    }
}
int main(){
   int arr[]={1,2,3,4,5};
   int n=5;    //[1,2,3,4,5]
   cout <<  bs(arr,5,0,4,0);

return 0;
}

