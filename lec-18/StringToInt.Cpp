#include <iostream>
#include <string>

using namespace std;
/*int toint(string s,int i){ //i - point to last character
    if(i==0){
        return s[i]-'0';  //convert single character to int
    }
    int x=toint(s,i-1);  //except last character sabko int me convert kar do
    return x*10+s[i]-'0';
} */

void toint(string s,int i,int &ans){
    int n=s.length();
    //cout << n << endl;
    if(i==n){
        return;
    }
    ans=ans*10+(s[i]-'0');
    toint(s,i+1,ans);
}
int main(){
   string s="4123";
   int ans =0;
  toint(s,0,ans);
  cout << ans << endl;

return 0;
}


