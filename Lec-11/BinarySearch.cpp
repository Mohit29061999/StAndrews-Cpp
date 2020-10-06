#include <iostream>
using namespace std;
int main(){
    int arr[] ={1,3,5,6,9};
    int start=0;
    int end =4;   //n=5 , end = n-1 =4;
    int x;
    cin>>x;
    while(start<=end){
        int mid = (start+end)/2;//start->index,mid=index,end =index
           cout << mid << ' ';
        if(arr[mid]==x){
            cout << "value found at:" << mid << endl;
            return 0;
        }
        else if(arr[mid]>x){
            end = mid-1;
        }
        else{
            start = mid+1;
        }
    }

    cout << "value not found" << endl;



    return 0;
}

