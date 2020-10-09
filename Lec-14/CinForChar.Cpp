#include <iostream>
using namespace std;

int main(){
    char ch[100];
    //cin>>ch;
   // cout << ch;
   cin.getline(ch,100,'&');
   /*char c;
   c=cin.get();
   int i=0;
   while(c!='\n'){
    ch[i]=c;
    i++;
    c=cin.get();
   }
   ch[i]='\0'; */

   cout << ch << endl;

}
