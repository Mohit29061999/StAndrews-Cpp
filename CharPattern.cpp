#include <iostream>
using namespace std;

int main(){
 int n;
 cout << "Enter the value of n" << endl;
 cin>>n;

 for(int row=1;row<=n;row++){   //row ka loop;
        //first increasing ka loop;
        char ch='A';  //normal char;
        int j=0;
        for(;j<=(n-row);j++){
            cout << (char)(ch+j);   //typecast to get char;
        }

        j=j-1;   //why?
        for(;j>=0;j--){  //decreasing ka loop
            cout << (char)(ch+j);  //typecast as result is int
        }

        cout << endl;

 }
}



