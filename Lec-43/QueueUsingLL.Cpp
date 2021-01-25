#include <bits/stdc++.h>
using namespace std;


class node{
public:
    int val;
    node* next;

    node(int d){
    val=d;
    next=NULL;}
};


class Queue{
    private:
    node* head;
    node* end;
    public:
     Queue(){
      head=NULL;
     end=NULL;}

     void push(int d){
         node* n =new node(d);
         if(head==NULL){
            head =end =n;
         }
         else{
            end->next=n;
            end =n;

         }
     }

     void pop(){
         if(head==NULL)
            return;
            if(head->next==NULL){
                node* t=head;
                head=end=NULL;
                delete t;
            }

            else{
                node* t=head;
                head=head->next;
                delete t;
            }

     }

     int front(){
         return head->val;
     }

     bool empty(){
        if(head==NULL)
            return true;
        return false;
     }


};

int main(){
    Queue q;
    q.push(1);
    q.push(2);
     q.push(3);
    q.push(4);

    while(!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }
}
