#include <bits/stdc++.h>
using namespace std;
void solution(int arr[],int n,int i,int ans[],int j,int k,int sum){  //i-which number decision we have to take
                                             //j-which position we are adding

        if(sum==k){
            //print the solution in reverse order
            //for reverse order use loop in reverse order.
            for(int w=j-1;w>=0;w--)
                cout << ans[w] << " ";
            cout << endl;

            //assume numbers greater than 0;
           // return;
           //for negative numbers as well
           //no return;

        }

        //base case:if we have taken decision for all elements
        if(i==n)
            return;

        //not add
        solution(arr,n,i+1,ans,j,k,sum);
        //add to the res;
        ans[j]=arr[i];

        //add the number
        solution(arr,n,i+1,ans,j+1,k,sum+arr[i]);






}
int main(){
    //res[i][j]=1 queen placed else not
    int n;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];

        int k;
        cin>>k;

    int ans[n];
    for(int i=0;i<n;i++)
        ans[i]=0;
        int sum=0;
        solution(arr,n,0,ans,0,k,sum);




}

