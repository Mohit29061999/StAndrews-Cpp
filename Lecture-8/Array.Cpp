#include <iostream>
using namespace std;

int main(){
     int arr[5];      //define array ko;
     ///cout << arr[0];   //garbage value
     for(int i=0;i<5;i++){
        cin>>arr[i];   //user se value le rha hu and array me store kar rha hu
     }

      for(int i=0;i<5;i++){
        cout<<arr[i] << ' ';   //print kar rahe h
     }

     cout << arr[0] + arr[1] << endl;  //arr[0] and arr[1] is a varible of int type
return 0;
}




