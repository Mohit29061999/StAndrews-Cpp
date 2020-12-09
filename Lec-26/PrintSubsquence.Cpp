#include <bits/stdc++.h>
using namespace std;

void printSub(char *arr,char *out,int i,int j){
    if(arr[i]=='\0'){
        out[j]='\0';
        cout << out << endl;
        return;
    }
    //case i: add first character
    out[j]=arr[i];
    //j+1 as we have added to current position
    printSub(arr,out,i+1,j+1);

    //case ii: not add first character
    printSub(arr,out,i+1,j);
}


int main(){
    char arr[]="abc";
    char out[100];

    printSub(arr,out,0,0);

}


