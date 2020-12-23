#include <bits/stdc++.h>
using namespace std;


void printall(string s,int i,char out[],int j){
  int n=s.length();
  //base case
  if(i==n){
    out[j]='\0';
    cout << out << endl;
    return;
  }

  //take only 1 character typed
  char c=(s[i]-'1')+'A';
  out[j]=c;
  printall(s,i+1,out,j+1);

  //take 2 character at at time
  //ie. 12-'L'   23-'W';
  if(i!=n-1){
          if(s[i]=='1'){
            int x=1;
            x=x*10+(s[i+1]-'1');
            char c='A'+x;
            out[j]=c;

            //call to i+2;
            printall(s,i+2,out,j+1);


          }
          else if(s[i]=='2' && s[i+1]<='6'){
              int x=2;
            x=x*10+(s[i+1]-'1');
            char c='A'+x;
            out[j]=c;

            //call to i+2;
            printall(s,i+2,out,j+1);
          }
  }
}



int main(){
	string s;
  cin>>s;

  char out[1000];

  printall(s,0,out,0);




    
    }