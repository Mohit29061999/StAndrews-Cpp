#include <bits/stdc++.h>
using namespace std;



int main(){
    int t;
    cin>>t;
    while(t){
        t--;

        string s;
        cin>>s;

        stack<char>s1;
        int n=s.length();

        bool extra =false;
        for(int i=0;i<n;i++){
            //if it is not closing bracket then push it to stack
            if(s[i]!=')')
                s1.push(s[i]);
            else{
                //else it is closing bracket
                bool op=false;
                while(!s1.empty() && s1.top()!='('){
                    char t=s1.top();
                    if(t=='+' || t=='-' || t=='/' || t=='*')
                        op=true;
                        s1.pop();
                }

               //to remove opening bracket
                s1.pop();
                if(op==false){
                    extra=true;
                }
            }
        }

        if(extra)
        cout << "Duplicate Found" << endl;
        else
            cout << "No Duplicates Found" << endl;

    }


}

