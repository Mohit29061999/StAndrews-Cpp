#include <iostream>
using namespace std;




int main(){
int n;
cout << "Enter the number";
cin>>n;

for(int x=n;x>0;x=x/10){    //initalisation already done
                     //updation step is n=n/10;
    cout << x%10;     //loop work
}

/*  x=4321 ; 4321%10 = 1 ; x=x/10 = 432;

    432%10 = 2 ; x=x/10 ; 43
    43%10 = 3 ; 4
    4%10 = 4; x=x/10 ; x= 4/10 = 0

*/

return 0;
}
