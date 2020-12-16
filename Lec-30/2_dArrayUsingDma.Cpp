#include <bits/stdc++.h>
using namespace std;

int main(){
     int r=4;
     int c=4;
     //to define a 2-d array using dma
     int** a=new int*[r];
     for(int i=0;i<r;i++)
        a[i]=new int[c];
     int count =1;
     for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            a[i][j]=count;
            count++;
        }
     }
      for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
     }

     //delete rows first;
     for(int i=0;i<r;i++)
        delete []a[i];

     //row data array to be deleted
     delete []a;
     a=NULL;




}

