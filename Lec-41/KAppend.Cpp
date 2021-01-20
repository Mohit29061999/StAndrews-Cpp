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


node* kappend(node* head,int k){
    if(head==NULL || head->next==NULL)
    return head;

    node* f=head;
    node* s=head;

    int l=printLength(head);
    if(k>=l)
    k=k%l;

      if(k==0)
    return head;


    //take fast k steps forward
    for(int i=0;i<k && f!=NULL;i++)
        f=f->next;

    while(f->next!=NULL){
        f=f->next;
        s=s->next;
    }

    f->next=head;
    node* n=s->next;
    s->next=NULL;
    return n;


}








int main(){

    node* head =NULL;

    //int user;
  //  cin>>user;
  int n;
  cin>>n;
    while(n>0){
        int x;
        cin>>x;
        insertAtEnd(head,x);
        n--;
    }

 /*insertAtEnd(head,1);
 insertAtEnd(head,2);
 insertAtEnd(head,2);
  insertAtEnd(head,1);
 insertAtEnd(head,8);
 insertAtEnd(head,5);
  insertAtEnd(head,6); */


int k;
cin>>k;


head=kappend(head,k);


  printLL(head);

}
