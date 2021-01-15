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

    node* mergeLL(node* a,node* b){

        //if a is null return b;
        if(a==NULL)
            return b;
        if(b==NULL)
            return a;


        node* head=NULL;
        if(a->val<b->val){
            //head will be a;
            head=a;
            node* head1=mergeLL(a->next,b);
            head->next=head1;
        }
        else{
             //head will be a;
            head=b;
            node* head1=mergeLL(a,b->next);
            head->next=head1;
        }

        return head;
    }

    node* mergeSort(node* head){
        //base case
        if(head==NULL || head->next==NULL)
            return head;
        //to get mid of Linked list
        node* mid = midOfLL(head);
        node* head1=mid->next;
        mid->next=NULL;

        //two linked list : head to mid , head1 to end
        //sort the half
        node* h1=mergeSort(head);
        node* h2=mergeSort(head1);

        node* h3=mergeLL(h1,h2);
        return h3;


    }


int main(){

    node* head =NULL;

   insertAtEnd(head,10);
   insertAtEnd(head,-20);
    insertAtEnd(head,1000);
    insertAtEnd(head,-40);
     insertAtEnd(head,-50);


   //reverseLL(head,tail);
//node* mid = midOfLL(head);
//cout << mid->val << endl;
 head = mergeSort(head);
  printLL(head);

}
