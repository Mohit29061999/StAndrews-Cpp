#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int m;
    cin>>m;
    int k;
    cin>>k;
    int s;
    cin>>s;
    char arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    bool canPass=true;  //it will tell whether we can pass or not , true-can
    for(int i=0;i<n;i++){  //to select row
        for(int j=0;j<m;j++){  //to select different col of current row
            if(s<k){
                canPass=false;  //can not pass as strength is less
                break;
            }
            if(arr[i][j]=='.'){
                s-=2;
                 if(s<k){
                canPass=false;
                break;
            }
            }
            else if(arr[i][j]=='*'){
                s+=5;
                 if(s<k){
                canPass=false;
                break;
            }
            }
            else if(arr[i][j]=='#'){  //there is #
                break;
            }
            if(j!=m-1){  //if i am not at last col,1 unit strength is required
                s-=1;  //s=5,k=5 ,final s=4
                if(s<k){
                canPass=false;
                break;
            }


            }
        }
    }

    if(canPass){
        cout << "Yes" << endl;
        cout << s << endl;
    }
    else{
           cout << "No" << endl;
    }





}

