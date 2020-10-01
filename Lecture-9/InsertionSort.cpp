#include <iostream>
using namespace std;

int main(){
int a[]={3,4,3,2,2};
int n=5;  //n is size of array;

for(int i=1;i<n;i++){  //right hand se card select karo
    int hand =a[i];      //card in hand;
    int j=i-1;           //sorted ka end
    while(j>=0 && a[j]>hand){    //sahi position find kar rahe h hand wale card ki
        a[j+1]=a[j];           //hand card(chote) ke le jagah bnao
        j--;
    }

    a[j+1] = hand;     //correct position is j+1 for card in hand

}





for(int i=0;i<n;i++){
    cout << a[i] << " ";
}




}

