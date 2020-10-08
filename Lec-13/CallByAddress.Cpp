#include <iostream>
using namespace std;
void update(int *x){   //int * x= &y;
    *x=*x+1;    //x=x+1 value ke liye * extra add krna hota h
    cout << x << endl;   //y ka address print krega
}
int main(){
int y=4;
cout << &y << endl;
update(&y); //call by address h
cout << y << endl;
return 0;
}

