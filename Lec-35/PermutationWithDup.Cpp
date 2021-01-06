#include <bits/stdc++.h>
using namespace std;

bool canswap(string s,int i,int j){
    for(int k=i;i<j;i++){
        if(s[k]==s[j])
            return false;
    }

    return true;
}

void permutate(string &s,int i){
    int n=s.length();
    if(i==n){
         cout << s << endl;
        return;
    }

    //try all characters as ith character
    for(int j=i;j<n;j++){
        if(canswap(s,i,j)){
        swap(s[i],s[j]);
        permutate(s,i+1);
        //backtracking step
        swap(s[i],s[j]);
        }
    }
}


int main(){
   string s;
   cin>>s;


   permutate(s,0);







}

