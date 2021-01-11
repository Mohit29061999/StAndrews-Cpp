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

  void insertAtEnd(node* &head,node* &tail,int d){
        //if first node then head==NULL;
          node* n=new node();
          //we can access object data through pointer using ->
          n->val = d;
          n->next=NULL;

        if(head==NULL){
          //make both head and tail equal to current node
          head = tail = n;
          return;
        }
        //make tail->next = n ie.add the new node linked list
        tail->next=n;
        //make tail to be newly added node
        tail = n;

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

    void insertAtStart(node* &head,node* &tail,int d){
    //int d;
    //cin>>d;
          node* n=new node();
          //we can access object data through pointer using ->
          n->val = d;
          n->next=NULL;

           if(head==NULL){
          //make both head and tail equal to current node
          head = tail = n;
          return;
        }

        //make next of new node to be head
        n->next =head;

        //make head to be new node
        head= n;


    }

    void insertAtAnyPos(node* &head,node* &tail,int pos,int d){
        //if pos==0,then insert at start
        if(pos==0){
            insertAtStart(head,tail,d);
            return;
        }
        if(pos>printLength(head)){
            insertAtEnd(head,tail,d);
            return;
        }
        //make new node to be added
        node* n = new node();
        n->val = d;
        n->next =NULL;

        //get to the previous node to where we will be adding
        int c=1;
        node* curr=head;
        while(c!=pos-1){
                c++;
        curr=curr->next;
        }

       // cout << curr->val << endl;

        n->next = curr->next;
        curr->next=n;

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

    //iterative

     node* searchIterative(node* head,int x){
        //base case

        node* curr=head;
        while(curr!=NULL){
                if(curr->val==x)
                return  curr;
                curr=curr->next;
              }
              return NULL;
    }

    void reverseLL(node* &head,node* &tail){
        if(head==NULL)
            return;


        node* prev=NULL;
        node* curr=head;
        while(curr!=NULL){
            //store next first
            node* nxt=curr->next;
            curr->next=prev;

            prev=curr;
            curr=nxt;
        }

        //swap head and tail
         node* t1=tail;
         tail = head;
        head=t1;

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


int main(){
   // node a(5);
   // node b(10);

   // a.next = &b;
    //print b using a
   // cout << (*(a.next)).val << endl;
    //other way of accessing object through pointer
  //  cout << (a.next)->val << endl;

    //storing address of first node
    node* head =NULL;
   // cout << head->next << endl;
    node *tail = NULL;

   insertAtEnd(head,tail,10);
   insertAtEnd(head,tail,-20);
    insertAtEnd(head,tail,30);
    insertAtEnd(head,tail,-40);
     insertAtEnd(head,tail,50);



    //printLL(head);
   // int d;
    //cin>>d;
   // insertAtAnyPos(head,tail,5,d);
    //printLL(head);

   // cout << "////////////////////////////////////////////" << endl;
   // cout << "Insert At start Linked list" << endl;
   // node* res=searchIterative(head,3);
   // if(res==NULL){
     //   cout << "Not Found" << endl;
   // }
   // else
      //  cout << "Found " << res->val << endl;

   //reverseLL(head,tail);
node* mid = midOfLL(head);
cout << mid->val << endl;
  // printLL(head);

}
