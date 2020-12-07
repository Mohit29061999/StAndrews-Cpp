
#include <bits/stdc++.h>
using namespace std;

void inverted(int n){
    if(n==0)
        return;
        //current row ke start print karo
        for(int i=1;i<=n;i++)
            cout << "*" << " ";
        cout << endl;
        //call for next row
        inverted(n-1);

}



int main(){
    int n;
    cin>>n;

    inverted(n);


}



