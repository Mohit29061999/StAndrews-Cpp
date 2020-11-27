#include <bits/stdc++.h>
using namespace std;

int max(int a,int b){
    if(a>b)
    return a;
    else
    return b;
}

int main(){
    int arr[]={0,2,1,3,0,1,2,1,2,1};
    int n=10;
    int l_max[10];  // 0 to i ka max
    int r_max[10];   //i to n-1 ka max
    l_max[0]=arr[0];
    r_max[n-1]=arr[n-1];
    for(int i=1;i<n;i++){
        l_max[i]=max(l_max[i-1],arr[i]);
    }



     for(int i=n-2;i>=0;i--){
        r_max[i]=max(r_max[i+1],arr[i]);
    }
    int ans =0;
    for(int i=0;i<n;i++){
        ans +=((min(l_max[i],r_max[i])) - arr[i]);
    }
   cout << ans << endl;

}

