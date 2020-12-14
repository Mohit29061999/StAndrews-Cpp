
#include <bits/stdc++.h>
using namespace std;

int ElephantWays(int i,int j){
    if(i==0 && j==0)
        return 1;
        //row vary
        int ans =0;
   for(int k=0;k<i;k++)   //k=0 to i-1
    ans +=ElephantWays(k,j);

   //col vary
    for(int k=0;k<j;k++)  //k =0 to j-1
    ans +=ElephantWays(i,k);
    return ans;
}

int main(){
    int n;
    cin >>n;
   int m;
   cin>>m;
   cout << ElephantWays(n-1,m-1);

}

