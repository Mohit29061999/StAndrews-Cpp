
#include <bits/stdc++.h>
using namespace std;

int main(){

   int n;
   cin>>n;

   int arr[n][n];
   for(int i=0;i<n;i++){
    for(int j=0;j<n;j++)
        cin>>arr[i][j];
   }

   //for(int i=0;i<n;i++){
     //  for(int j=0;j<n;j++)
      // cout << arr[i][j] << " ";
      // cout << endl;
 //  }

   stack<int>s;
   for(int i=0;i<n;i++){
    s.push(i);
   }

 // cout << s.size() << endl;
// while(!s.empty()){
    // cout << s.top() << endl;
    // s.pop();
 //}


   while(s.size()>1){
    int a=s.top();
    s.pop();
    int b=s.top();
    s.pop();
    //does a know b;
    if(arr[a][b]==1){
            //a knows b then a can't be celeb
            s.push(b);
    }
    else{
        //a doesn't know b,b can't be celeb
        s.push(a);
    }
   }

   bool celeb=true;
   int a=s.top();  //a is potential celeb


  // cout << a << endl;
   for(int i=0;i<n;i++){
    if(i!=a && (arr[a][i]==1 || arr[i][a]==0)){
        celeb=false;
        break;
    }
   }

   if(celeb)
    cout << a << endl;
   else
    cout << "No Celebrity" << endl;




}
