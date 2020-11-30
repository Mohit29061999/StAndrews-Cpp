#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int n=s.length();

    int a[26];
    for(int i=0;i<26;i++)
        a[i]=0;

    for(int i=0;i<n;i++){
        int x=s[i]-'a';
        a[x]++;
    }

    //max value in the array
    int max_v=0;
    char ch='&';
    for(int i=0;i<26;i++){
        if(a[i]>max_v){
            max_v=a[i];
            ch=i+'a';
        }
    }

    cout << ch << endl;


}




