#include <iostream>
using namespace std;
int main()
{/* code */
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++) {
		cin>>arr[i];
	}

	int ans =0;

	for(int i=0;i<32;i++){
        //left shift to check ith bit
        int x=(1<<i);
        int count =0;
        for(int j=0;j<n;j++){
                //to know about ith bit of jth number in array
            if((arr[j]&x)>0){
                count++;
            }
        }

        if(count%3!=0){
            ans  = (ans | x);
        }

	}
	cout << ans << endl;






}


