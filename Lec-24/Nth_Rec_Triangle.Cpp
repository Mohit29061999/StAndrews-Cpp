#include <bits/stdc++.h>
using namespace std;

int Nth(int i){
    //base case
    if(i==1)
        return 1;
    //to get answer for i-1
    int val=Nth(i-1);  // 1+2+3....+i-1
    val+=i;
    return val;



}

int main(){
    int n;
    cin>>n;

    cout << Nth(n) << endl;


}
