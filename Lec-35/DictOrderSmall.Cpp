#include <bits/stdc++.h>
using namespace std;

//keep a count of permuatations
int j=0;
void permutate(string &s,int i,string arr[]){
    int n=s.length();
    if(i==n){
            //store current permutation
        arr[j]=s;
        j++;
        return;
    }

    //try all characters as ith character
    for(int j=i;j<n;j++){
        swap(s[i],s[j]);
        permutate(s,i+1,arr);
        //backtracking step
        swap(s[i],s[j]);
    }
}


int main(){
   string s;
   cin>>s;

    //we make an extra string as s is getting changed
    //so we need a string to store s
   string t;
   t=s;

   string arr[1000];
   permutate(s,0,arr);

   //sort for lexicographical order
   sort(arr,arr+j);

   //print all strings to the left
   for(int i=0;i<j;i++){
    if(arr[i]==t)
        break;
    cout << arr[i] << endl;
   }






}
