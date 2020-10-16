#include <iostream>
using namespace std;

int main(){
    int arr[3][2]={{2,2},{2,2},{6,7}};     // 2 2
                                           // 2 2
                                           // 6 7

    int x=2;
     bool flag = false;   //false means nhi mili
    for(int i=0;i<3;i++){
        for(int j=0;j<2;j++){
            if(arr[i][j]==x){
                cout << i << " "<< j << endl;   //index print krna h
               // return 0;
               flag = true;
            }
        }
    }
    if(flag ==false){
    cout << -1 << endl;  //not found
    }


}

