#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int n=s.length();  //gives length of string
    for(int i=0;i<n;i++){
        if(s[i]>='a' && s[i]<='z'){
            int x=s[i]-'a';
            s[i]='A'+x;
        }
        else{
              int x=s[i]-'A';
            s[i]='a'+x;
        }
    }
    cout << s << endl;
}

