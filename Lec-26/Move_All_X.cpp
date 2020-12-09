#include <bits/stdc++.h>
using namespace std;

void move_all(string s,int i,int &c){  //i- current index of the string //c- count of x
    int n=s.length();
    if(i==n){
        for(int j=0;j<c;j++)  //try using recursion on your own.
            cout << 'x';
        return;
    }
    if(s[i]!='x'){
        cout << s[i];
    }
    else
        c++;  //if equal to x then count++;
    move_all(s,i+1,c);

}

int main(){
    string s;
    cin>>s;
    int c=0;
    move_all(s,0,c);


}

