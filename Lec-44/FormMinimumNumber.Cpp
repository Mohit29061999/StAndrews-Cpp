#include <bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t){
        t--;
    string s1;
    cin>>s1;
    int n=s1.length();
    stack<int>s;

    //to print n+1 digit
    for(int i=0;i<=n;i++){
        s.push(i+1);
        if(i==n || s1[i]=='I'){
                //if it is I or last digit ,then print the content of stack and make it empty
            while(!s.empty()){
                cout << s.top();
                s.pop();
            }
        }
    }
    cout << endl;
    }


}
