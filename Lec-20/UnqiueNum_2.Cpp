#include <bits/stdc++.h>
using namespace std;

int main(){
    int arr[]={2,2,3,4,5,3};
    int n=6;
   /* int x_r = 0;
    for(int i=0;i<n;i++){
        x_r = (x_r^arr[i]);
    }
      //find any set bit of xor of all numbers
     int index =-1;
     for(int i=0;i<32;i++){
        int x=(1<<i);
        if(x&x_r>0){
            //this bit is set
            index =x;
            break;
        }
     }
int num1 =0;
int num2 =0;
     for(int i=0;i<n;i++){
        if(arr[i]&index>0){
            num1 = num1 ^arr[i];
        }
        else{
             num2 = num2 ^arr[i];
        }
     } */
     int num1 =-1;
     int num2=-1;
     sort(arr,arr+n);
     int c=1;
     for(int i=1;i<n;i++){
        if(arr[i]!=arr[i-1]){
            if(c==1){
                if(num1==-1){
                    num1 =arr[i-1];
                }
                else{
                    num2 =arr[i-1];
                }
            }
            c=1;
        }
        else
            c++;
     }  //1 1 2 3 4 4
     if(c==1){
        num2 =arr[n-1];
     cout << num1 << " "<< num2 << endl;
     }
     else{
        cout << num1 << " "<< num2 << endl;
     }

}


