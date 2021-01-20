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


void bubblesort(node* head){
    int n=printLength(head);
    for(int i=0;i<n-1;i++){
        //cur will give a[j]
        node* cur=head;
        for(int j=0;j<n-1-i;j++){
            //to get a[j+1],we keep next
            node* nxt=cur->next;
            if(cur->val>nxt->val){
                swap(cur->val,nxt->val);
            }
            //curr++;
            cur=cur->next;

        }
    }
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





bubblesort(head);

  printLL(head);

}

