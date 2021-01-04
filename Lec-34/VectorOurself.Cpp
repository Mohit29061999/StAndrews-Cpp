#include <iostream>
#include <vector>   //or <bits/stdc++.h>
using namespace std;

class Vector{
public:
    int *arr;
    int cs;
    int max_s;

    Vector(int s=2){
         arr=new int[s];
         cs=0;
         max_s=2;
    }

    void push_back(int data){
        //capacity change only if size==ms
        if(cs==max_s){
            int *old_arr=arr;
            int oldms=cs;
            arr=new int[max_s*2];
            max_s=max_s*2;

            //copy contents
            for(int i=0;i<cs;i++)
                arr[i]=old_arr[i];

            delete[] old_arr;
        }

        arr[cs++] = data;


    }

    void pop_back(){
        if(cs>=1)
            cs--;
    }

    int size(){
        return cs;
    }

    int capacity(){
   // return cs;
   return max_s;
    }

  //operator overloading for []
  int operator[](int i){
  return arr[i];}

};

int main(){

Vector v;
for(int i=0;i<5;i++)
    v.push_back(i+1);

    cout << v.size() << endl;
    cout << v.capacity() << endl;

    for(int i=0;i<5;i++)
        cout << v[i] << " ";

    cout << endl;

    for(int i=0;i<5;i++)
    v.pop_back();

     cout << v.size() << endl;
    cout << v.capacity() << endl;





}

