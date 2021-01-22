#include <bits/stdc++.h>
using namespace std;

bool check(string s){
    //stack for storing opening brackets
    stack<char>s1;
    int n=s.length();
    for(int i=0;i<n;i++){
        ///if opening then push it to stack
        if(s[i]=='(' || s[i]=='{' || s[i]=='['){
            s1.push(s[i]);
            continue;
           }
           else if(s[i]==')'){
            if(s1.empty())
                return false;
             else if(s1.top()!='(')
                return false;
           else
                        s1.pop();
           }

            else if(s[i]=='}'){
            if(s1.empty())
                return false;
             else if(s1.top()!='{')
                return false;
           else
                s1.pop();
           }
           else if(s[i]==']'){
              if(s1.empty())
                return false;
             else if(s1.top()!='[')
                return false;
           else
                s1.pop();
           }
           //it will be a/b or +,-
           else{
            continue;
           }



           }

           if(s.empty())
           return true;

           return false;

}



int main(){
   string s;
   cin>>s;

   if(check(s))
    cout << "YES" << endl;
   else
    cout << "NO" << endl;
}


