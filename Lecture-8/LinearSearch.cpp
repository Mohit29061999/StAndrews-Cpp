#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;  //n le liya user se;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];   //user input ko array me store kiya h
    }

    int x;
    cin>>x;  //value to be found

    for(int i=0;i<n;i++){
        if(arr[i]==x){  //compare kar rahe h saari value se
            cout << i << endl;  //value mil gayi
            return 0;
        }
    }

    cout << -1 << endl;   //-1 means value not in array
    return 0;




return 0;
}






