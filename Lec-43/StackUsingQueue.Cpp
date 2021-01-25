
#include <bits/stdc++.h>
//or
#include <queue>
using namespace std;

class Stack{
    private:
        queue<int>q1;
        queue<int>q2;

    public:
        void push(int d){
            if(q1.empty() && q2.empty() )
                q1.push(d);
            else if(!q1.empty())
                q1.push(d);
            else
                q2.push(d);
        }

        void pop(){
               if(q1.empty() && q2.empty() )
                    return;
                if(!q1.empty()){
                    while(q1.size()>1){
                        int x=q1.front();
                        q1.pop();
                        q2.push(x);
                    }
                    q1.pop();
                }
                else{
                    while(q2.size()>1){
                        int x=q2.front();
                        q2.pop();
                        q1.push(x);
                    }
                    q2.pop();
                }
        }

        int top(){
             if(q1.empty() && q2.empty() )
                    return -1;

                            if(!q1.empty()){
                    while(q1.size()>1){
                        int x=q1.front();
                        q1.pop();
                        q2.push(x);
                    }
                   int x= q1.front();
                   q1.pop();
                   q2.push(x);
                   return x;
                }
                else{
                    while(q2.size()>1){
                        int x=q2.front();
                        q2.pop();
                        q1.push(x);
                    }
                   int x= q2.front();
                   q2.pop();
                   q1.push(x);
                   return x;
                }
        }

        bool empty(){
            if(q1.empty() && q2.empty())
                return true;
            return false;
        }
};

int main(){
  Stack s;
  s.push(1);
  s.push(2);
  s.push(3);
  s.push(4);

  while(!s.empty()){
    cout << s.top() << " ";
    s.pop();
  }
}

