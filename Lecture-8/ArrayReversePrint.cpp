#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;  //n le liya user se;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];   //user input ko array me store kiya h
    }
    cout << endl;
    for(int i=n-1;i>=0;i--){
        cout << arr[i] << " ";  //reverse order me print kar rahe h
    }
    //n=5, arr[4]->arr[3]->arr[2]->arr[1]->arr[0]



return 0;
}





