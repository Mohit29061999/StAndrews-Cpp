#include <iostream>
using namespace std;

int main(){
  int arr[]={1,2,3,4};
  int *x= arr;
  int *y = arr+3;
  cout << y-x << endl;  //pointer difference - number of elements in between

return 0;
}


