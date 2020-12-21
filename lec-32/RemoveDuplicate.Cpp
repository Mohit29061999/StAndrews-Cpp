#include <bits/stdc++.h>
using namespace std;


void printchar(string s,int i){
               //base case
               int n=s.length();
               if(i==n)
                return;
               if(i==0)
                cout << s[i];
                //else print only if current and previous are different
                else if(s[i]!=s[i-1])
                    cout << s[i];
                //recursion will take decision for rest
                printchar(s,i+1);


               }

int main(){

string s;
cin>>s;

printchar(s,0);


}


