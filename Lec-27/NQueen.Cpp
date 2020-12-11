#include <bits/stdc++.h>
using namespace std;
bool kyasafeh(int res[][4],int n,int r,int c){
    //try same row for previous col
    for(int i=0;i<c;i++){
        if(res[r][i]==1)
            return false;
    }

    //upper diagonal: row-1,col-1
    int i=r;
    int j=c;
    while(i>=0 && j>=0){
        if(res[i][j]==1){
            return false;
        }
        i--;
        j--;
    }

    //lower diagonal:row++,col--;
    i=r;
    j=c;
    while(i<n && j>=0){
         if(res[i][j]==1){
            return false;
        }
        i++;
        j--;
    }
    return true;
}
bool Nqueen(int res[][4],int n,int i){
    //base case:
    if(i==n){
        for(int k=0;k<n;k++){
            for(int j=0;j<n;j++){
                cout << res[k][j] << " ";
            }
            cout << endl;
        }
        return true;
    }

    //try all rows of current col
    for(int j=0;j<4;j++){
        if(kyasafeh(res,n,j,i)==true){
            res[j][i]=1;
            bool restcol= Nqueen(res,n,i+1);
            if(restcol==true)
                return true;
            //backtracking
            res[j][i]=0;
        }
    }
    return false;

}
int main(){
    //res[i][j]=1 queen placed else not
    int res[4][4];
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++)
            res[i][j]=0;
    }


 Nqueen(res,4,0);



}


