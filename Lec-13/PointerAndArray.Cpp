#include <iostream>
using namespace std;
void update(int *x,int n){   //int *x = &arr[0];
    for(int i=0;i<n;i++){
    *(x+i) = *(x+i) +1;         //value of ith element = ith element+1
}
}
int main(){
int arr[]={1,2,3,4,5};
int n=5;
/* int *x=&(arr[0]);   //address store kiya h
for(int i=0;i<n;i++){
    cout << *(x+i)<< " ";}
//saare elements ko +1 kronga
for(int i=0;i<n;i++){
    *(x+i) = *(x+i) +1;         //value of ith element = ith element+1
}  */
//update(&(arr[0]),5);      //pointer stores address;
//cout << arr << endl;
update(arr,n);    //array ka name 0th element ka address ka hota h
int *x=arr;
for(int i=0;i<n;i++){
     cout << *(x+i)<< " ";
}

return 0;
}
