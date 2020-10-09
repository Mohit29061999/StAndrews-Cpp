#include <iostream>
using namespace std;

int len(char ch[]){
int count =0;
for(int i=0;ch[i]!='\0';i++){
    count++;
}
return count;
}




int main(){
    char ch1[100];
   // cin>>ch1;
     cin.getline(ch1,100,'\n');
    cout << len(ch1) << endl;
    cout << sizeof(ch1);



}

