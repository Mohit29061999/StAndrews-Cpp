#include <iostream>
using namespace std;

int main(){

int a[]={3,4,3,2,2};
int n=5;  //n is size of array;

for(int i=0;i<n-1;i++){  //i - selects position where we put
                          //correct element
     //int min_index=a[i];   //only value  no index
     int min_index=i;     //value = a[min_index]  index toh store hi kar rahe h
     for(int j=i+1;j<n;j++){  //min in rest of the array
        if(a[j]<a[min_index]){   //already min-min_index, new value kya usse choti h
            min_index=j;
        }
     }

     if(min_index!=i){  //if value at i is not minimum in rest of the array
        //swap karo i and min_index
        int temp = a[i];
        a[i]=a[min_index];
        a[min_index]=temp;
     }

}

for(int i=0;i<n;i++){
    cout << a[i] << " ";
}




}
