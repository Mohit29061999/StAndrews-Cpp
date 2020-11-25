#include <iostream>
using namespace std;
int main()
{/* code */
	int n;
	cin>>n;
	int a1[n];
	for(int i=0;i<n;i++) {
		cin>>a1[i];
	}

	int a2[n];
	for(int i=0;i<n;i++) {
		cin>>a2[i];
	}

	int b[2*n];
	int i=0; //a1 ka min element jisko add krna h
	int j=0;  //a2 ka min element jisko add krna h
	int k=0;   //konsi position pe add krna h

	while(i<n  && j<n){
        if(a1[i]>a2[j]){
                //a2 ka element chota h
            b[k]=a2[j];
            k++;
            j++;
        }
        else{
              b[k]=a1[i];
            k++;
            i++;
        }
	}
	//bache hue elements of a1
	while(i<n){
        b[k]=a1[i];
        i++;
        k++;
	}
	//bache hue elemets of a2
	while(j<n){
        b[k]=a2[j];
        j++;
        k++;
	}

	for(int i=0;i<2*n;i++)
        cout << b[i] << " ";
       // cout <<b[n-1];
    cout << endl;











}



