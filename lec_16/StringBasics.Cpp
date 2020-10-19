#include <iostream>
using namespace std;

int main(){
    string s;   //declaration
    s="abc";     //assingment step

      string s1="abc";   //initialisation

     /* cout << s << endl;  //entire string
      cout << s[0] << endl;  //'a'
      cin>>s1;
      cout << s1 << endl; */

      //length
      int n=s.length();
      cout << n << endl;   //3

      //a+b  //char array me nhi hota
      string s2=s+s1;
      cout << s2 << endl;  //abc+abc = abcabc

      //a==b  //character array me nhi hota
      if(s1==s){
        cout << "Yes s1 and s"<< endl;
      }
      if(s2==s){   //s2=abcabc s=abc
         cout << "Yes s2 and s"<< endl;
      }







    return 0;
}
