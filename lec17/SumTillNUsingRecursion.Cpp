#include <iostream>
using namespace std;

int sumtilln(int i,int n){
    if(i==n){  //jab ek hi element ka sum krna ho
        return i;
    }
    int x=sumtilln(i+1,n);  //chote box ka answer h
    return x+i;
}


int main(){

    cout << sumtilln(1,4);
}
