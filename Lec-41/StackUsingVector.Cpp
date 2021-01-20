
#include <bits/stdc++.h>
using namespace std;

class Stack{
private:
    //we want to show only stack property and not vector property
    vector<int>v;
public:
    void push(int x){
        v.push_back(x);
    }

    bool empty(){
        if(v.size()==0)
            return true;
        return false;
    }

    void pop(){
           if(empty()==false)
           v.pop_back();
    }

    int  top(){
           if(empty()==false){
            return v[v.size()-1];
           }
    }

};

int main(){
    Stack s;
    s.push(1);
    s.push(2);
      s.push(3);
    s.push(4);


    while(s.empty()==false){
        cout << s.top() << endl;
        s.pop();
    }
}

