#include <iostream>
using namespace std;


int main(){
 int year;
 cout << "Enter the year in which you are studying?" << endl;
 cin>>year; //year bato
 //first year
 if(year==1){
    cout << "First Year" << endl;
 }
 else if(year==2){
    cout << "Second Year" << endl;
 }
 else if(year==3){
    cout << "Third Year" << endl;
 }
 else{
    cout << "Fourth Year" << endl;
 }
return 0;
}
