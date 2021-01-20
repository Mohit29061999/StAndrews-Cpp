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

node* sort_0_1_2(node* head){
    if(head==NULL || head->next==NULL)
        return head;
    //linked list of zero
    node* z_h=NULL;
    node* z_t=NULL;

    //linked list of one
     node* o_h=NULL;
    node* o_t=NULL;

      //linked list of two
     node* t_h=NULL;
    node* t_t=NULL;

    node* cur=head;
    while(cur!=NULL){
         //if it is 1 then add it to 1 linked list
        if(cur->val==1){
            if(o_h==NULL){
              o_h=o_t=cur;
            }
            else{
                o_t->next=cur;
                o_t=cur;
            }
        }
        else if(cur->val==0){
            if(z_h==NULL){
              z_h=z_t=cur;
            }
            else{
                z_t->next=cur;
                z_t=cur;
            }
        }

        //it is 2
        else{
            if(t_h==NULL){
              t_h=t_t=cur;
            }
            else{
                t_t->next=cur;
                t_t=cur;
            }
        }

        //go to next node
        cur=cur->next;
    }

    //if it has 0 only
    if(z_h!=NULL && o_h==NULL && t_h==NULL){
            z_t->next=NULL;
        return z_h;
    }

      //if it has 1 only
    if(o_h!=NULL && z_h==NULL && t_h==NULL){
            o_t->next=NULL;
        return o_h;
    }

     //if it has 2 only
    if(t_h!=NULL && z_h==NULL && o_h==NULL){
            t_t->next=NULL;
        return t_h;
    }

    //if it has 0 and 1
    if(o_h!=NULL && z_h!=NULL && t_h==NULL){
        z_t->next=o_h;
        o_t->next=NULL;
        return z_h;
    }


    //if it has 0 and 2
    if(o_h==NULL && z_h!=NULL && t_h!=NULL){
        z_t->next=t_h;
        t_t->next=NULL;
        return z_h;
    }

    //if it has 1 and 2
     if(o_h!=NULL && z_h==NULL && t_h!=NULL){
        o_t->next=t_h;
        t_t->next=NULL;
        return o_h;
    }

    //if it has all three
     if(o_h!=NULL && z_h!=NULL && t_h!=NULL){
            z_t->next=o_h;
            o_t->next=t_h;
            t_t->next=NULL;
        return z_h;
    }



return z_h;





}









int main(){

    node* head =NULL;

  int n;
  cin>>n;
    while(n>0){
        int x;
        cin>>x;
        insertAtEnd(head,x);
        n--;
    }


head=sort_0_1_2(head);




  printLL(head);

}


