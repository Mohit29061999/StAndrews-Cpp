#include <iostream>
using namespace std;

int main(){
    int arr[3][2]={{2,1},{2,4},{6,7}};     // 2 1
                                           // 2 4
                                           // 6 7
    for(int i=0;i<2;i++){   //i->col
        if(i%2==0){    //if even,increasing
            for(int j=0;j<3;j++){  //j->row
                cout << arr[j][i] << " ";
            }
        }
        else{   //else decreasing by row
             for(int j=2;j>=0;j--){
                cout << arr[j][i] << " ";
             }
    }
     cout << endl;



}
}


