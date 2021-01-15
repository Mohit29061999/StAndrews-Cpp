#include <list>

//or
#include <bits/stdc++.h>
using namespace std;

class demo{
public:
    int x;
    char c;

    demo(int x1,char c1){
        x=x1;
        c=c1;
    }
};


int main(){
    //to make a linked list of type int
    list<int> l;

    //to insert at end
    for(int i=1;i<=5;i++){
       //push_back is same as insertAtEnd
       l.push_back(6-i);
    }

    //it will store address and not val
    list<int>::iterator it;
   // for(it=l.begin();it!=l.end();it++){
    //    cout << *it << " ";

   // }
    //cout << endl;

    //insert at start;
    l.push_front(0);

    // for(it=l.begin();it!=l.end();it++){
     //   cout << *it << " ";

   // }
   // cout << endl;

    //to delete
     //to delete from end
   // l.pop_back();

   //to delete from front
   l.pop_front();

   for(it=l.begin();it!=l.end();it++){
       cout << *it << " ";

    }

    cout << endl;

    //to sort linked list
   // l.sort();

   //to insert at any pos
   //to insert at second pos 100
   it=l.begin();
   for(int i=1;i<4;i++){
    it++;
   }
   //give address and value to insert
   l.insert(it,100);

     for(it=l.begin();it!=l.end();it++){
       cout << *it << " ";

    }

    cout << endl;


    //new list for class object
   // list<demo> l1;
   // demo d1(1,'a');
   //  demo d2(2,'b');

   // l1.push_back(d1);
   // l1.push_back(d2);

   // list<demo>::iterator it1;
   // for(it1=l1.begin();it1!=l1.end();it1++){
      // cout << *it1 <<endl;
    //  demo d=*it1;
     //   cout << d.x << " " << d.c << endl;
   // }



}
