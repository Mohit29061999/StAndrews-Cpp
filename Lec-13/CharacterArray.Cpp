#include <iostream>
using namespace std;

int main(){
//char ch[]={'a','b','c','d','\0'};

char ch[]="abcd";

//ch[i]='\0';  //null character ko add kiya h
for(int i=0;i<4;i++){
    cout << ch[i] << " ";
}
cout << endl;
return 0;
}





