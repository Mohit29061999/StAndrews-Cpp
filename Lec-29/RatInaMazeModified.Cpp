#include <bits/stdc++.h>
using namespace std;

bool solve(char arr[][10],int res[][10],int i,int j,int n,int m,int visited[][10]){
    //base case
    if(i==n-1 && j==m-1){
            //solution print first

            res[i][j]=1;
            for(int i=0;i<n;i++){
                for(int j=0;j<m;j++)
                    cout << res[i][j] << " ";
                cout << endl;
            }

            cout << endl;
            cout << endl;
            //false for all path
        return false;
        //true for one path
        //return true;
    }

    res[i][j]=1;
    visited[i][j]=1;
    //try right
    if(j+1<m && arr[i][j+1]!='X' && visited[i][j+1]==0){
        bool kyarightsesolve=solve(arr,res,i,j+1,n,m,visited);
        if(kyarightsesolve==true){
            return true;
        }
    }
    //for false: try down
     if(i+1<n && arr[i+1][j]!='X' && visited[i+1][j]==0){
        bool kyadownsesolve=solve(arr,res,i+1,j,n,m,visited);
        if(kyadownsesolve==true){
            return true;
        }
    }
    //try left
     if(j-1>=0 && arr[i][j-1]!='X' && visited[i][j-1]==0){
        bool kyarightsesolve=solve(arr,res,i,j-1,n,m,visited);
        if(kyarightsesolve==true){
            return true;
        }
    }

    //try up
     if(i-1>=0 && arr[i-1][j]!='X' && visited[i-1][j]==0){
        bool kyadownsesolve=solve(arr,res,i-1,j,n,m,visited);
        if(kyadownsesolve==true){
            return true;
        }
    }

    //if can't find from both???
    //backtracking
    visited[i][j]=0;
    res[i][j]=0;
    return false;
}

int main(){
    char arr[][10]={"OOOO","OOOO","OOOO","OOOO"};
    int res[10][10];
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++)
            res[i][j]=0;
    }
    int visited[10][10]={0};

    if(solve(arr,res,0,0,4,4,visited)==true){
        cout << "after recursion" << endl;
        cout << "Yes" ;
    }
    else{
        cout << "after recursion" << endl;
        cout << "No" ;
    }




}

