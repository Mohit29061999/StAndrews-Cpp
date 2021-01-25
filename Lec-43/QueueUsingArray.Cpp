
#include <bits/stdc++.h>
using namespace std;

class Queue{
    private:
        int *arr;
        int n;
        int f;
        int e;

        //it gives number of elements in queue
        int cs;


    public:
     Queue(int max_s){
         arr=new int[max_s];
         n=max_s;
         f=0;
         e=-1;
         cs=0;
      }

     void push(int d){
         if(cs==n){
            cout << "No space in queue" << endl;
            return;
         }
         //cirular queue so e=(e+1)%n;
         e=(e+1)%n;
         arr[e]=d;
         cs++;
         return;
     }

     void pop(){
         if(cs==0){
                cout << "no elements in queue" << endl;
         return;
         }

         f=(f+1)%n;
         //since we are removing one element from queue
         cs--;

     }

     int front(){
         return arr[f];
     }

     bool empty(){
       if(cs==0)
        return true;
       return false;
     }


};

int main(){
    Queue q(5);
    q.push(1);
    q.push(2);
     q.push(3);
    q.push(4);
     q.push(5);
    q.push(6);

   q.pop();
   q.pop();
    while(!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }
   cout << endl;
    q.pop();
}
