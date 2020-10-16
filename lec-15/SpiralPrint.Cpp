#include <iostream>
using namespace std;

int main(){
    int arr[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
     int r_s=0;
    int c_s=0;
    int r_e=3;  //n-1 =4-1
    int c_e=3; //m-1=4-1

    while(r_s<=r_e && c_s<=c_e){  //4,4
            //boundary work starts here
        //first row in increasing col
        for(int i=c_s;i<=c_e;i++){
            cout << arr[r_s][i] << " ";
        }
        r_s++;    //5,4

          //last  col in increasing row
        for(int i=r_s;i<=r_e;i++){
            cout << arr[i][c_e] << " ";   //last col
        }
        c_e--;


        if(r_s<=r_e){
                //last row in decreasing col order
            for(int i=c_e;i>=c_s;i--){
                cout << arr[r_e][i] << " ";
            }
           r_e--;
        }
        if(c_s<=c_e){
                  //first col in decreasing  row order
            for(int i=r_e;i>=r_s;i--){
                cout << arr[i][c_s] << " ";
            }
           c_s++;
        }

    }




}



