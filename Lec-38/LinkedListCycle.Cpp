#include <bits/stdc++.h>
using namespace std;

class node{
public:
    //to store data of linked list
    int val;
    //to store address of next node
    node* next;

    node(int v){
       val =v;
        next = NULL;
    }

     node(){
       // val =v;
        //next = NULL;
    }

};

  void insertAtEnd(node* &head,int d){
        //if first node then head==NULL;
          node* n=new node();
          //we can access object data through pointer using ->
          n->val = d;
          n->next=NULL;

        if(head==NULL){
          //make both head and tail equal to current node
          head = n;
          return;
        }
       //go to end ie.code to find tail;
       node* c=head;
       while(c->next!=NULL){
        c=c->next;
       }

       c->next = n;



    }

    //print linked list
    void printLL(node* head){
        //condition for stopping
        while(head!=NULL){
               //cout << (*head).val << " ";
            cout << head->val << " ";
            //move head pointer to point to next node
            head = head->next;
        }
cout << endl;
    }

      //print size of linked list
    int printLength(node* head){
        int c=0;
        //condition for stopping
        while(head!=NULL){
                c++;
               //cout << (*head).val << " ";
           // cout << head->val << " ";
            //move head pointer to point to next node
            head = head->next;
        }
        return c;

    }

  void createCycle(node* head){

      node* curr=head;
      while(curr->next!=NULL){
        curr=curr->next;
      }

      //curr will point to last node;
      curr->next = head->next->next;

  }

  bool checkCycle(node* head){
      node* f=head;
      node* s=head;

    // if there is cycle , then there is no NULL
      while(f!=NULL && f->next!=NULL){
        s=s->next;
        f=f->next;
        f=f->next;
          //if both meet then cycle else not
         if(s==f)
            return true;
      }
      return false;
  }

  void cycleRemoval(node* head){
      if(checkCycle(head)==false)
         return;

      node* f=head;
      node* s=head;

      //before meeting
      while(f!=NULL && f->next!=NULL){
        s=s->next;
        f=f->next;
        f=f->next;
        if(f==s)
            break;
      }

      //move slow from head and fast ko meeting point and at same speed
      //then they will meet at the starting of the loop
      node* prev=NULL;
      s = head;
      while(s!=f){
        s=s->next;
        prev=f;
        f=f->next;
      }
      //prev point to last node of the lopp
      prev->next =NULL;

  }





int main(){

    node* head =NULL;


   insertAtEnd(head,10);
   insertAtEnd(head,-20);
    insertAtEnd(head,30);
    insertAtEnd(head,-40);
     insertAtEnd(head,50);

     createCycle(head);

      cycleRemoval(head);

       printLL(head);












}


