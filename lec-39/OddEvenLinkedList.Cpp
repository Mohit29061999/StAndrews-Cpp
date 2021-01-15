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
          head =  n;
          return;
        }

         node* curr=head;
         while(curr->next!=NULL){
            curr=curr->next;
         }

         curr->next =n;


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




    //recursive
    node* searchRecursive(node* head,int x){
        //base case
        if(head==NULL){
            return NULL;
        }
        if(head->val==x)
            return head;
        return searchRecursive(head->next,x);
    }




    node* midOfLL(node* head){
        if(head==NULL || head->next==NULL)
            return head;
        node* slow = head;
        node* fast =head->next;


        while(fast!=NULL && fast->next!=NULL){
            //move slow by 1
            slow = slow->next;

            fast=fast->next;
            fast=fast->next;
        }

        return slow;
    }

    node* oddEven(node* head){
        if(head==NULL ||head->next==NULL)
            return head;
        int c=3;
        node* e_h=head->next;
        node* o_h=head;
        node* o_t=o_h;
        node* e_t=e_h;

        node* curr=head->next->next;
        while(curr){
            //check if it is to be added to odd/even linked list
            if(c%2==1){
                    //if to be added in odd
                o_t->next=curr;
                o_t=curr;
            }
            else{
                //if to be added in even
                e_t->next=curr;
            e_t=curr;

            }
            c++;
            curr=curr->next;
        }

        //odd and even separately
        e_t->next=NULL;
        //join odd and even linked list
        o_t->next=e_h;
        return o_h;
    }



int main(){

    node* head =NULL;

    int user;
    cin>>user;
    while(user!=-1){
        insertAtEnd(head,user);
        cin>>user;
    }

  //printLL(head);

  node* res=oddEven(head);
  printLL(res);

}


