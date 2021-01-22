#include <bits/stdc++.h>
using namespace std;

//node for ll
template<typename T>
class node{
public:
    T val;
    node* next;

    node(T d){
        val=d;
        next=NULL;
    }
    node(){

    }
};

//we write template for genric programming
template<typename T1>
class Stack{
    private: //as we will give stack prop only
    node<T1>  *head;
    public:
        Stack(){
        head=NULL;}

        void push(T1 d){
            node<T1>* n=new node<T1>();
            n->next=NULL;
            n->val=d;
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
                node<T1>* n =head;
                head=head->next;
                delete n;
            }
        }

        T1 top(){
            return head->val;
        }

        bool empty(){
            if(head==NULL)
                return true;
            return false;
        }
};

int main(){
   // Stack<int>s;   //T1 will be replaced by int
   Stack<char>s;   //T1=char
    s.push('a');
    s.push('b');
     s.push('c');
    s.push('d');

    while(!s.empty()){
        cout << s.top() << endl;
        s.pop();
    }
}

