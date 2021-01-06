#include <bits/stdc++.h>
using namespace std;

int eggdrop(int n,int k){
    //base case
    if(n==0 || n==1)
        return n;

    int ans=INT_MAX;
    //try all floor as first floor ie.for first attempt
    for(int i=1;i<=n;i++){
        //break
        int v1=eggdrop(i-1,k-1);
        //not break
        int v2=eggdrop(n-i,k);

        //since it is not in our control whether egg breaks or not so we will take max of them
        ans = max(ans,v1+1,v2+1);
    }

    return ans;


}

int main(){
   int n;
   cin>>n;

   int k;
   cin>>k;

   cout << eggdrop(n,k) << endl;
}
