#include <iostream>
using namespace std;

int main(){
    //int arr[3][2]={{2,3},{4,5},{6,7}};     // 2 3
                                           // 4 5
                                           // 6 7
    int arr[2][3];      //valid;

   // int arr[][2]={{1,2},{3,4},{5,6}}; //3*5
    //int arr[][]={{},{},{}};     //invalid col is must
    //input
    for(int i=0;i<2;i++){   //i->which row we are dealing with
            for(int j=0;j<3;j++){   //j->col with which we are dealing with
                cin>>arr[i][j];
            }
    }

     //output
     for(int i=0;i<2;i++){   //i->which row we are dealing with
            for(int j=0;j<3;j++){   //j->col with which we are dealing with
                cout<<arr[i][j] << " ";
            }
            cout << endl;  //next row newline pe aaye
    }

     //1st row and 2nd col update
     arr[1][2] =10;
     //arr[i][j]+=10;
     //arr[i]
     cout << arr[1][2];



}
