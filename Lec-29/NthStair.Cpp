#include <bits/stdc++.h>
using namespace std;

int ways(int n){
    if(n==1 || n==2)
        return n;

    return ways(n-1) + ways(n-2);  //last step:1+2
}

int main(){
    int n;
    cin >>n;
    cout << ways(4) << endl;

}
