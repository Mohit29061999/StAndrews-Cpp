#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int n=s.length();
    int c=1;
    for(int i=1;i<n;i++){
        if(s[i]==s[i-1]){
            c++;
        }
        else{
            cout << s[i-1];
            cout << c;
            c=1;
        }
    }
    cout << s[n-1];
    cout << c << endl;

}



