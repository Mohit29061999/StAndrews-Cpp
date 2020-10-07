#include <iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
  //  cout << a  << endl;   //printing value of a;
//cout << &a << endl;   //printing address of a;
  int *ptr = &a;
 // cout << &ptr << endl ;

 //cout << *(&a) << endl;     //(&a) -> a ka address le liya
  int x= *(ptr);            //valid?
  //cout << x << endl;
 // cout << &a << endl;
  //cout << &(*ptr) << endl;
 // cout << *ptr+1 << endl;
 cout << &a << endl;
 cout << *(&ptr) << endl;


    return 0;



}



