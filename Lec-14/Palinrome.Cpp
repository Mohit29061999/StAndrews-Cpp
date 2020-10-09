#include <iostream>
using namespace std;
int len(char ch[]){
int count =0;
for(int i=0;ch[i]!='\0';i++){
    count++;
}
return count;
}
/*
bool palindrome(char c[]){
    int n=len(c);
    int i=0;   //left pointer
    int j=n-1;   //right pointer
    while(i<j){
        if(c[i]!=c[j]){  //compare karo ki reverse and original equal h ya nhi
            return false;  //not a palindrome
        }
        else{
        i++;
        j--;
        }
    }
    return true;  //it is palindrome
}
*/
//using pointer
bool palindrome(char *c){  //array ka implementation pointer se hota h
    int n=len(c);
    int i=0;   //left pointer
    int j=n-1;   //right pointer
    while(i<j){
            //c[i]!=c[j]
        if(*(c+i)!=*(c+j)){  //compare karo ki reverse and original equal h ya nhi
            return false;  //not a palindrome
        }
        else{
        i++;
        j--;
        }
    }
    return true;  //it is palindrome
}

int main(){
    char ch[100];
    cin>>ch;
    //array ka name 0th element ka address hota h
    if(palindrome(ch)==true){  //function ne main ko btaya
        cout << "Yes it is palindrome";  //user ko bta rha hu
    }
    else{
        cout << "No,it is not";

    }



}


