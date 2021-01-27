
#include <bits/stdc++.h>
using namespace std;


int main(){
    //int t;
    //cin>>t;
   // while(t){
    //    t--;
   int n;
   cin>>n;

   int a[n];
   for(int i=0;i<n;i++){
    cin>>a[i];
   }

   int out[n];
   out[0]=1;
   stack<int>s;
   s.push(0);
   for(int i=1;i<n;i++){
       //remove all smaller value than current price
       while(!s.empty() && a[s.top()]<=a[i])
        s.pop();

       //if stack is empty then all values are smaller than current
       if(s.empty())
        out[i]=i+1;
       else
        out[i]=i-s.top();

       s.push(i);
   }

   for(int i=0;i<n;i++)
    cout << out[i] << " ";

   cout << "END";
    //}


}
