#include <bits/stdc++.h>
using namespace std;


int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++)
       cin>>arr[i];

     bool isInverse=true;
     for(int i=0;i<n;i++){
        int val=arr[i];
        if(arr[val]!=i){
            isInverse=false;
            break;
        }
     }

     if(isInverse){
        cout << "Yes" << endl;
     }
     else
        cout << "No" << endl;


}
