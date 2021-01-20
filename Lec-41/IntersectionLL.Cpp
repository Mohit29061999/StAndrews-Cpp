#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int d)
    {
        data = d;
        next = NULL;
    }
};


  //print size of linked list
    int printLength(Node* head){
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


Node *intersectionOfTwoLinkedLists(Node *l1, Node *l2)
{    Node* h1=l1;
    Node* h2=l2;
     int l_1=printLength(h1);
            int l_2=printLength(h2);

            Node* f=h1;
            Node* s=h2;

            //make bigger linked list travel the extra length
            if(l_1>l_2){
                int diff=l_1-l_2;
                for(int i=0;i<diff;i++)
                    f=f->next;
            }
            else{
                  int diff=l_2-l_1;
                for(int i=0;i<diff;i++)
                    s=s->next;

            }

            while(f!=NULL && s!=NULL && f!=s){
                f=f->next;
                s=s->next;
            }

            if(f==NULL)
                return f;
        return f;
}

Node *buildList(unordered_map<int, Node *> &hash)
{
    int x;
    cin >> x;
    Node *head = new Node(x);
    Node *current = head;
    hash[x] = head;
    while (x != -1)
    {
        cin >> x;
        if (x == -1)
            break;
        Node *n = new Node(x);
        hash[x] = n;
        current->next = n;
        current = n;
    }
    current->next = NULL;
    return head;
}

void printLinkedList(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main()
{
    unordered_map<int, Node *> hash;
    Node *l1 = buildList(hash);

    Node *l2 = NULL;
    int x;
    cin >> x;
    l2 = new Node(x);
    Node *temp = l2;

    while (x != -1)
    {
        cin >> x;
        if (x == -1)
            break;
        if (hash.find(x) != hash.end())
        {
            temp->next = hash[x];
            break;
        }
        Node *n = new Node(x);
        temp->next = n;
        temp = n;
    }

    cout << "L1 - ";
    printLinkedList(l1);
    cout << "L2 - ";
    printLinkedList(l2);

    Node *intersectionPoint = intersectionOfTwoLinkedLists(l1, l2);
    cout << "Intersection at node with data = " << intersectionPoint->data << endl;

    return 0;
}
