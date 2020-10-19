#include <iostream>
using namespace std;
//recursive Function
void printArr(int arr[],int n,int i){
   //i->last element to be printed
   if(i==0){  //simplest problem or base case
    cout << arr[0] << " ";
    return;
   }


   printArr(arr,n,i-1);  //small problem
   cout << arr[i] << " ";
  // printArr(arr,n,i-1);  //? //should be before cout
}

int main(){
     int arr[5]={1,2,3,4,5};
     printArr(arr,5,4);
    return 0;
}



