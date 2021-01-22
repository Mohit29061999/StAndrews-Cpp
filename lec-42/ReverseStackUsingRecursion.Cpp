#include <bits/stdc++.h>
using namespace std;


void insertAtBottom(stack<int> &s,int val){
    //base case
    if(s.empty()){
        s.push(val);
        return;
    }

    int topEle=s.top();
    s.pop();
    insertAtBottom(s,val);
    s.push(topEle);

}

void reverse(stack<int> &s){
    //base case
    if(s.empty())
        return;

    //we will reverse one element only
    int topEle=s.top();
    s.pop();
    reverse(s);

    //top element should be insert at the bottom
    insertAtBottom(s,topEle);


}


int main(){
stack<int>s;
s.push(1);
s.push(2);
s.push(3);
s.push(4);

reverse(s);

while(!s.empty()){
    cout << s.top() << " ";
    s.pop();
}
}



