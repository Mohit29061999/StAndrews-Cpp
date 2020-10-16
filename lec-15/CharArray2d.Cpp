#include <iostream>
using namespace std;

int main(){
  // char arr[3][3]={{'a','b','\0'},{'d','e','\0'},{'g','h','\0'}};
  char arr[3][3]={"ab","de","gh"};   //null is added by default
  // cout << arr[0] << endl;
  // cout << arr;
  //char a1[]={'a','b','\0'};
 // cout << a1 << endl;
 //for(int i=0;i<3;i++){
  //  cin>>arr[i];  //null adds by default
 //}

 //for(int i=0;i<3;i++){
 //   cout << arr[i];
 //}
 arr[0][0] ='z';
 cout << arr[0][0] << endl;
}




