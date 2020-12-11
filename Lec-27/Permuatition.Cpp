#include <bits/stdc++.h>
using namespace std;

void permuation(char *arr,int i){
    //base case
    if(arr[i]=='\0'){
        cout << arr << endl;
        return;
    }


    //try all character for current position
    for(int j=i;arr[j]!='\0';j++){
            //a ke place pe c and c ke place pe a
        swap(arr[i],arr[j]);
        permuation(arr,i+1);
        //backtracking step
        //c ke place pe a and a pe c
        swap(arr[i],arr[j]);
    }
}

int main(){
    char arr[]="abc";
    permuation(arr,0);

}
