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

    void deleteFromStart(node* &head){
        if(head==NULL)
            return;
        if(head->next==NULL){
            delete head;
            head=NULL;
            return;
        }

        //store head ka address
        node* temp=head;
        head=head->next;

        //we have made node from dma
        //so we have to delete it
        delete temp;
    }


    void deleteFromAny(node* &head,int pos){
        if(head==NULL)
            return;

        //if pos==1, then it is same as delete from start
        if(pos==1){
        deleteFromStart(head);
        return;
        }

        //go to prev of node to be deleted as its next will change
        int c=1;
        node* curr=head;
        while(c!=pos-1){
            c++;
            curr=curr->next;
        }

        //temp will store address of node to be deleted
        //curr will store previous of node to be deleted
        node* temp=curr->next;
        curr->next=temp->next;

        //we have to delete as we have made via dma
        delete temp;

    }







int main(){

    node* head =NULL;


   insertAtEnd(head,10);
   insertAtEnd(head,-20);
    insertAtEnd(head,30);
    insertAtEnd(head,-40);
     insertAtEnd(head,50);

     printLL(head);

    // deleteFromStart(head);

    // printLL(head);

    deleteFromAny(head,3);
    printLL(head);






}

