#include <iostream>
using namespace std;
int len(char ch[]){
int count =0;
for(int i=0;ch[i]!='\0';i++){
    count++;
}
return count;
}

void mergeTwoArray(char a[],char b[]){
    int n=len(a);
    int i=n;   //kis position pe add krna h a me
    int j=0;  //b ka konsa character add krna h
    for(;b[j]!='\0';j++){
        a[i]=b[j];
        i++;
    }
    a[i]='\0';  //add null character to a

}


int main(){
 char a[100];
 cin>>a;
 char b[100];
 cin>>b;
 mergeTwoArray(a,b);
 cout << a << endl;




}



