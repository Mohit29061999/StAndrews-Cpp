#include <iostream>
using namespace std;

//function main se pahle define krna hota h agar prototype nhi kiya ho
//sum of two numbers a,b-> a+b(value main ko doge)
//kaam btaya h
//function ko define krna
void sum(int a,int b){
cout << a+b << endl;
}




int main(){

int a=5;
int b=10;
//actual kaam krvana
//cout << sum(a,b) << endl;    //calling
sum(a,b);

return 0;

}
