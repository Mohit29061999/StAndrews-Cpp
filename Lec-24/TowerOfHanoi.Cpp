#include <bits/stdc++.h>
using namespace std;

void towerofhanoi(int n,char src,char dest,char temp){
    //base case
if(n==0)
    return;
//move n-1 disk from src to temp using dest;
 towerofhanoi(n-1,src,temp,dest);
 cout << "Moving ring " << n << " from " << src << " " << "to " <<dest;
 cout << endl;
 //move n-1 disk from temp to dest using src
 towerofhanoi(n-1,temp,dest,src);

}


int main(){
    int n;
    cin>>n;

    towerofhanoi(n,'A','B','C');






}


