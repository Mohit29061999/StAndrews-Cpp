#include <iostream>
using namespace std;

int main()
{
	/* code */
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++) {
		cin>>arr[i];
	}

	int c1=0;  //number of 0;
	int c2=0;   //number of 1;
	//int c3=0;   //number of 2;

	for(int i=0;i<n;i++){
	    if(arr[i]==0){
	        c1++;
	    }
	    else if(arr[i]==1){
	        c2++;
	    }
	   // else{  //it will be 2;
	   //     c3++;
	   // }
	}
	//writing zero first
	for(int i=0;i<c1;i++)
	arr[i]=0;
	//writing 1
	for(int i=0;i<c2;i++)
	arr[i+c1]=1;
	//writing 2;
	for(int i=c1+c2;i<n;i++)
	arr[i]=2;

	for(int i=0;i<n;i++)
	cout << arr[i] << endl;




}

