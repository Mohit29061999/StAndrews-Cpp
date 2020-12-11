#include <bits/stdc++.h>
using namespace std;

bool solve(char arr[][10],int res[][10],int i,int j,int n,int m){
    //base case
    if(i==n-1 && j==m-1){
            res[i][j]=1;
            for(int i=0;i<n;i++){
                for(int j=0;j<m;j++)
                    cout << res[i][j] << " ";
                cout << endl;
            }
        return true;
    }

    res[i][j]=1;
    //try right
    if(j+1<m && arr[i][j+1]!='X'){
        bool kyarightsesolve=solve(arr,res,i,j+1,n,m);
        if(kyarightsesolve==true){
            return true;
        }
    }
    //for false: try down
     if(i+1<n && arr[i+1][j]!='X'){
        bool kyadownsesolve=solve(arr,res,i+1,j,n,m);
        if(kyadownsesolve==true){
            return true;
        }
    }
    //if can't find from both???
    //backtracking
    res[i][j]=0;
    return false;
}

int main(){
    char arr[][10]={"OXOX","OOXO","OXOO","OOOO"};
    int res[5][10];
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++)
            res[i][j]=0;
    }

    solve(arr,res,0,0,4,4);




}

