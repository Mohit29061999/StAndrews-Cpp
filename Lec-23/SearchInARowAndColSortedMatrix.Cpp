#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int m;
    cin>>m;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    int x;
    cin>>x;

    int i=0; //for row;
    int j=m-1;  //for col;
    while(i<n && j>=0 && i>=0 && j<m){  //to check if i am inside array
        if(arr[i][j]==x){
                 cout << i << " " << j << endl;
                 return 0;
        }
        else if(arr[i][j]>x){
            j--;
        }
        else{
            i++;
        }

    }

    cout << "Not Found";





}


