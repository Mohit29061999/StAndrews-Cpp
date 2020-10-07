#include <iostream>
using namespace std;
int main(){  int a1[]={1,10,0,0,0};   //0 means empty value
      int a2[]={3,5,12};    //array sorted given h
      int i=1;    //m-1
      int j=2;    //n-1
      int k=4;   //m+n-1    m a1 ka size filled value ka,n a2 ka size
      while(i>=0 && j>=0){    //jabtak dono array me value h
        if(a1[i]<=a2[j]){
            a1[k]=a2[j];   //khali place pe a2 ki value daal di
            k--;   //ek khali place use ho gya
            j--;   //j index ki value a1 me aa gayi
        }
        else{
            a1[k]=a1[i]; //a1 ki value ko final array ke correct position pe rakh diya
            i--;    //a1 ki ith value ko correct position pe rakh diya
            k--;   //ek empty value use kar li h
        }
      }
      //a2 ki bachi hui value a1 me daal do
      while(j>=0){
         a1[k]=a2[j];   //khali place pe a2 ki value daal di
            k--;   //ek khali place use ho gya
            j--;
      }
      //sorted array ko print kar rahe h
      for(int i=0;i<5;i++){
        cout << a1[i] << " ";
      }







    return 0;



}


