#include <iostream>
using namespace std;

int main(){
    char ch;
    ch = cin.get();  //initialisation step;

    int count=0;   //number of character entered
    while(ch!='$'){
        count++;
        ch = cin.get();  //updation step;
    }
  cout << count << endl;

}




