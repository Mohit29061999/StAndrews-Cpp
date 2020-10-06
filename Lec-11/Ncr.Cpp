#include <iostream>
using namespace std;
int fact(int n){
    int ans=1;
    for(int i=1;i<=n;i++){
        ans = ans*i;
    }
    return ans;
}

int nCr(int n,int r){
   int nfact = fact(n);    // n! is calculated
   int n_rfact = fact(n-r);//n=n-r;//n-r! is calculated
   int r_fact = fact(r); //n=r;    //r! is calculated;
   int ans = nfact/(n_rfact * r_fact);
   return ans;
}
int main(){
    int n;
    cin>>n;
    int r;
    cin>>r;
    cout << nCr(n,r) << endl;

    return 0;
}



