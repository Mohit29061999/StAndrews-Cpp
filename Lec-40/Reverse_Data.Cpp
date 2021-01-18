
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


void reverse_data(node* head){
    int l=printLength(head);

    for(int i=l-1;i>0;i--){
        //in every iteration , i swaps between curr and its next
        node* cur=head;
        for(int j=1;j<=i;j++){
            node* n=cur->next;
            swap(n->val,cur->val);
            cur=cur->next;
        }
    }

}







int main(){

    node* head =NULL;

    int user;
    cin>>user;
    while(user!=-1){
        insertAtEnd(head,user);
        cin>>user;
    }

 /*insertAtEnd(head,1);
 insertAtEnd(head,2);
 insertAtEnd(head,2);
  insertAtEnd(head,1);
 insertAtEnd(head,8);
 insertAtEnd(head,5);
  insertAtEnd(head,6); */

reverse_data(head);




  printLL(head);

}


