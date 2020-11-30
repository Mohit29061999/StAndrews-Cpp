
#include <bits/stdc++.h>
using namespace std;

int main(){
    char arr[1000];
   cin.getline(arr,1000);
   int n=0;
   for(int i=0;arr[i]!='\0';i++)
    n++;
   int i=0;
   int j=n-1;
   while(i<j){
      char t=arr[i];
      arr[i]=arr[j];
      arr[j]=t;
      i++;
      j--;
   }
   cout << arr << endl;

}


