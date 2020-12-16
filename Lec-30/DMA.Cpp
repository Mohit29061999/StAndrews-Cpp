#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    //int using dma
    int *p=new int;

    *p=5;   //address is know then for value use *
    //cout << *p << endl;
    //define an array
    int *a=new int[n];
    for(int i=0;i<n;i++)
        a[i]=i+1;
    for(int i=0;i<n;i++)
        cout << a[i] << " ";
        //for array deletion
    delete []a;
    a=NULL;
    //for integer deletion
    delete p;
    // cout << *p << endl;
     p=NULL;
     cout << *p << endl;


}
