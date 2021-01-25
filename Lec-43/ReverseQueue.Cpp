#include <bits/stdc++.h>
//or
#include <queue>  //file for queue
using namespace std;

void reverseQueue(queue<int> &q){
    //base case:
    if(q.empty())
        return;

    //to store front element of queue to be insertered later
    int x=q.front();
    q.pop();

    //to reverse rest of the queue
    reverseQueue(q);

    //cout << x << " ";
    q.push(x);


}


int main(){
  queue<int>q;  //queue for stl
  q.push(1);
   q.push(2);
    q.push(3);
     q.push(4);

     cout << "before reversing" << endl;
     while(!q.empty()){
        cout << q.front() << " ";
        q.pop();
     }
     cout << endl;

       q.push(1);
   q.push(2);
    q.push(3);
     q.push(4);

     reverseQueue(q);


      cout << "After reversing" << endl;
     while(!q.empty()){
        cout << q.front() << " ";
        q.pop();
     }
     cout << endl;
}

