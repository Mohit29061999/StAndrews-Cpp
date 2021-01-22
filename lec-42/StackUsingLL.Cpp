#include <bits/stdc++.h>
using namespace std;

//node for ll
class node{
public:
    int val;
    node* next;

    node(int d){
        val=d;
        next=NULL;
    }
};


class Stack{
    private: //as we will give stack prop only
    node* head;
    public:
        Stack(){
        head=NULL;}

        void push(int d){
            node* n=new node(d);
            if(head==NULL){
                head=n;
                return;
            }
            else{
                n->next=head;
                head=n;
            }
        }

        void pop(){
            if(head!=NULL){
                node* n =head;
                head=head->next;
                delete n;
            }
        }

        int top(){
            return head->val;
        }

        bool empty(){
            if(head==NULL)
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
        cout << s.top() << endl;
        s.pop();
    }
}
