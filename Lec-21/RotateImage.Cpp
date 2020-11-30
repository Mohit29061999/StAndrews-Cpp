
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
   int a[n][n];
   for(int i=0;i<n;i++){
    for(int j=0;j<n;j++)
        cin>>a[i][j];
   }

   //step1:reverse every row
   for(int i=0;i<n;i++){
    int j=0;
    int k=n-1;
    while(j<k){
        swap(a[i][j],a[i][k]);
        j++;
        k--;
    }
   }

   //step-2 //swap the values in bottom half(i>j)
   for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        if(i>j){
            swap(a[i][j],a[j][i]);
        }
    }
   }

   for(int i=0;i<n;i++){
    for(int j=0;j<n;j++)
        cout << a[i][j] << " ";
    cout << endl;
   }

}


