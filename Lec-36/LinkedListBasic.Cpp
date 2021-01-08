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
    node *tail = NULL;

   insertAtEnd(head,tail,1);
    insertAtEnd(head,tail,2);
   insertAtEnd(head,tail,3);
    insertAtEnd(head,tail,4);
    insertAtEnd(head,tail,5);
    insertAtEnd(head,tail,6);

    printLL(head);

    cout << "////////////////////////////////////////////" << endl;
    cout << "Insert At start Linked list" << endl;

    node *h1=NULL;
    node *t1=NULL;

    insertAtStart(h1,t1,6);
    insertAtStart(h1,t1,5);
    insertAtStart(h1,t1,4);
    insertAtStart(h1,t1,3);
    insertAtStart(h1,t1,2);
    insertAtStart(h1,t1,1);



    printLL(h1);

    cout << endl;

    cout << printLength(h1) << endl;
    cout << printLength(head) << endl;




}
