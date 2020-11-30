#include <bits/stdc++.h>
using namespace std;

int main(){
   string s;
    cin>>s;
    int n=s.length();  //gives length of string
    int d=n-1;
    for(int i=0;i<d;i++){
        cout <<s[i];
        cout << s[i+1] - s[i];
    }
    cout << s[d];

}


