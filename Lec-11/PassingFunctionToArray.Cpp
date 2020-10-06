#include <iostream>
using namespace std;

void update(int arr[],int array_size){   //() - main provide krega ye things
    for(int i=0;i<array_size;i++){
        arr[i]+=1;
    }
}
void updateVarible(int x){
x++;}

int main(){
    int arr[] ={1,2,3,4,5};

    cout << "without change : ";
    for(int i=0;i<5;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    update(arr,5);
      cout << "with change : ";
    for(int i=0;i<5;i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    int w=5;
    cout << w << endl;
    updateVarible(w);
    cout << w << endl;

    return 0;
}
