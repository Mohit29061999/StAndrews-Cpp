
#include <bits/stdc++.h>
using namespace std;
int countDigit(int n){
int count=0;
while(n>0){
    n=n/10;
    count++;
}
return count;
}

int main()
{/* code */
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++) {
		cin>>a[i];
	}

	for(int i=0;i<n-1;i++){
        for(int j=0;j<n-1;j++){
            int a1=a[j];
            int b=a[j+1];
            int d_a=countDigit(a1);
            int d_b=countDigit(b);
            int n01=a1*pow(10,d_b)+b;
            int n02=b*pow(10,d_a) +a1;
            if(n01>n02){
                swap(a[j],a[j+1]);
            }
        }
	}

	for(int i=n-1;i>=0;i--)
        cout << a[i];















}




