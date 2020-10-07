#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];   //assumed sorted
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int start=0;   //search space ka start index
    int end =5;    //search space ka end index

    int x;
    cin>>x;    //value jiske liye pair find krna h
    while(start<end){
        int sum = arr[start]+arr[end];
        if(sum==x){
            cout << "pair found: " << arr[start] << " " << arr[end] << endl;
            start++;
            end--;
        }
        else if(sum>x){
            end--;
        }
        else{   //case? sum < x
            start++;
        }

    }

    return 0;



}

