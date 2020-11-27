#include <bits/stdc++.h>
using namespace std;

int main(){
     int n=6;
    int a1[]={2,2,3,4,5,3};

    int a2[]={2,2,1,2,4};
    int m=5;

    sort(a1,a1+n);
    sort(a2,a2+m);

    int i=0;
    int j=0;
    while(i<n && j<m){
        if(a1[i]==a2[j]){
            cout << a1[i] << " " << a2[j] << endl;
            i++;
            j++;
        }
        else if(a1[i]<a2[j]){
            i++;
        }
        else{
            j++;
        }
    }


}



