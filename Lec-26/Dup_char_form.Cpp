#include <bits/stdc++.h>
using namespace std;

void charFormat(string s,int i){
    int n=s.length();
    //for last character
    if(i==n-1){
        cout << s[i] << endl;
        return;
    }
    //character is always printing
    cout << s[i];
    // * is getting printed if current and next are equal
    if(s[i]==s[i+1]){
        cout << "*" ;
    }
    charFormat(s,i+1);
}

int main(){
    string s;
    cin>>s;

    charFormat(s,0); //??

}
