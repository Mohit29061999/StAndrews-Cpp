#include <iostream>
#include <climits>               //for INT_MAX and INT_MIN
using namespace std;

int main(){
    int n;
    cin>>n;  //n le liya user se;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];   //user input ko array me store kiya h
    }

     //int max_val = INT_MIN;
     //without INT_MIN;
     int max_val = arr[0];   //maximum first value ko maan rha hu
     for(int i=1;i<n;i++){
        if(arr[i]>max_val){  //kya new value previous max se badi h?
            max_val = arr[i];    //agar h toh update kar do max ko
        }
     }

     cout << max_val << endl;




return 0;
}







