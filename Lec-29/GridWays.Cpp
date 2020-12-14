
#include <bits/stdc++.h>
using namespace std;

int GridWays(int i,int j){
    if(i==0 && j==0)
        return 1;
        if(i<0 || j<0)
            return 0;
    return GridWays(i-1,j)+GridWays(i,j-1);
}

int main(){
    int n;
    cin >>n;
   int m;
   cin>>m;
   cout << GridWays(n-1,m-1);

}
