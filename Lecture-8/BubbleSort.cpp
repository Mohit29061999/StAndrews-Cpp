#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
            cin>>arr[i];}
            cout << "Without sorted" << endl;
     for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    //bubble sort ka code
    //loop run hoga 0 to n-2 // total values = n-1;
    for(int i=0;i<n-1;i++){   //ek ek karke max ko correct position pe lga dega
        for(int j=0;j<=n-2;j++){  //compare kar rha h-0&1 , 1&2,2&3,3&4.....n-2&n-1.
            if(arr[j]>arr[j+1]){   //swap condition ko check ie.left>right toh nhi h
                //swap;
                int temp = arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    //sorted array
    for(int i=0;i<n;i++ ){
        cout << arr[i] << " ";
    }

return 0;
}







