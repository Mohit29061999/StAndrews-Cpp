
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


node* kreverse(node* head,int k){
    //base case
    if(head==NULL || head->next==NULL)
        return head;

    //find the node that is not in current reverse
    node* curr=head;
    for(int i=0;i<k;i++)
        curr=curr->next;

    //reverse rest of linked list
    node* resth=kreverse(curr,k);

    //first k ko reverse
    int c=0;
    node* prev=NULL;
   curr=head;
    while(c!=k){
        node* n=curr->next;
        curr->next=prev;

        //update prev and curr;
        prev=curr;
        curr=n;
        c++;

    }

    head->next=resth;
    return prev;

}







int main(){

    node* head =NULL;

    int user;
    cin>>user;
    while(user!=-1){
        insertAtEnd(head,user);
        cin>>user;
    }
  int k;
  cin>>k;



head=kreverse(head,k);




  printLL(head);

}



