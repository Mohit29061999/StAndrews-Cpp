
#include <bits/stdc++.h>
using namespace std;


int main()
{/* code */
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++) {
		cin>>a[i];
	}
	int x;
	cin>>x;

	sort(a,a+n);

	int i=0;
	int j=n-1;

	while(i<j){
        int y=a[i]+a[j];
        if(y>x){
            j--;
        }
        else if(y<x){
            i++;
        }
        else{
            cout << "pair found at " << i << " " << j << endl;
            i++;
            j--;
        }
	}















}





