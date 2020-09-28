#include <iostream>
using namespace std;




int main(){                 //101 -> 010 -> 001
                     /// count : 0 -> 1 ->1 ->2 //final result
                               ///       xxxxy
                               ///       00001
                               //        0000y  if(y==1) final =1;
                                /////////       else final  =0;
int n;
cout << "Enter the number";
cin>>n;    //initialisation already done

int count=0;   //stores the answer for set bits

for(;n>0 /*conditon */;n=n>>1){              //n = n>>1 updation step
    int x= (n & 1);   //lsb check whether set or not.
    if(x>0)
        count=count+1;   //find one set bit
}
cout << count << endl;
return 0;
}

