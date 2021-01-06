#include <bits/stdc++.h>
using namespace std;

#define int long long

int ways(int n){
    //base case
    if(n==1 || n==2)
        return n;

    int ans =0;
    //case i:nth person single
    //subproblem n-1
    ans +=ways(n-1);

    //case ii:nth person as pair
    //he can select his partner from n-1 ways
    //then person left n-2

    ans+=((n-1)*ways(n-2));
    return ans;



}

int32_t main(){
    int t;
    cin>>t;
    while(t){
        t--;
    //n friends
    int n;
    cin>>n;

    cout << ways(n) << endl;

}
}
