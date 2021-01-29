#include <bits/stdc++.h>
using namespace std;


// Function to print Next Greater Element for each element of the array
void nextGreater(int arr[], int n)
{
int out[n];
    stack<int>s;
    s.push(n-1);

    //there is no value in right to n-1
    out[n-1]=-1;

    for(int i=n-2;i>=0;i--){
            //current se small value ko stack se nikalo
        while(!s.empty()&& arr[s.top()]<=arr[i])
              s.pop();
        //if stack is empty then it is greatest value till now
        if(s.empty())
            out[i]=-1;
        else{
                //s.top is greater value
            out[i]=arr[s.top()];
        }

        //insert current value in stack
        s.push(i);

    }

    for(int i=0;i<n;i++){
        cout << arr[i] << "," << out[i] << endl;
    }
}


int main(){

}
