#include <iostream>
using namespace std;

int main(){
 int n;
 cout << "Enter the value of n" << endl;
 cin>>n;
 int ans =0;   //unique value
 for(int i=1;i<=n;i++){
    int x;
    cin>>x;   //user se values le rahe h
    ans = (ans^x);  //saare number ka xor kar rahe h
 }
  cout << ans << endl;


}



