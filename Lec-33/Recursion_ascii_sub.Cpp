#include <bits/stdc++.h>
using namespace std;

void printall(char a[],int i,char out[],int j,int &c){
	//base case
	if(a[i]=='\0'){
		out[j]='\0';
		cout << out << " ";
		c++;
		return;
	}

	//ignore the ith character
	printall(a,i+1,out,j,c);

	//add ith as character
	out[j]=a[i];
	printall(a,i+1,out,j+1,c);
    

    //add ascii value
    int digit=0;
    //to get ascii value
    int ascii=(int)a[i];
    int x=ascii;
    while(x>0){
    	x=x/10;
    	digit++;
    }

    int pos=j+digit-1;
    while(ascii>0){
    	int x=ascii%10;
    	out[pos]=x+'0';
    	pos--;
    	ascii = ascii/10;
    }

    printall(a,i+1,out,j+digit,c);  
    

}




int main(){
	char a[1000];
	cin>>a;
  char out[1000];
  int c=0;
  printall(a,0,out,0,c);
  
  cout << endl;
  cout << c << endl;


    
    }