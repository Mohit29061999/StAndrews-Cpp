#include <iostream>
#include <vector>   //or <bits/stdc++.h>
using namespace std;



int main(){
    //define a vector
    vector<int>v;
    for(int i=0;i<5;i++)
        v.push_back(i+1);
    //for size:numbers of elements that are in vector
    cout << v.size() << endl;

    for(int i=0;i<5;i++)
        cout << v[i] << " ";

    cout << endl;

    //v[2]=10;

    //for capacity:max elements that can be
    cout << v.capacity() << endl;

    for(int i=0;i<5;i++)
        v.pop_back();
    cout << v.size() << endl;
    cout << v.capacity() << endl;

}
