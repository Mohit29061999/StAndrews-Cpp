#include <bits/stdc++.h>
//or
#include <stack>
using namespace std;








int main(){
    //s is name of stack and int is data to be stored in stack
    stack<int> s;
    int d;
    cin>>d;
    s.push(d);
    s.push(2);
     s.push(3);
    s.push(4);

    while(!s.empty()){
        cout << s.top() << endl;
        s.pop();
    }
}

