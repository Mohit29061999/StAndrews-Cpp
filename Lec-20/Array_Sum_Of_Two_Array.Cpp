#include <iostream>
using namespace std;

void print(int num)
{
    if(num == 0)
    {
        return;
    }

    print(num / 10);
    cout << num % 10;
    cout << ", ";
}

int main()
{
    int num1[1000] , num2[1000];

    int n;
    cin >> n;

    for( int i = 0 ; i < n ; i++ )
    {
        cin >> num1[i];
    }

    int m;
    cin >> m;

    for( int j = 0 ; j < m ; j++ )
    {
        cin >> num2[j];
    }

     int res[1004];
      int i=n-1;
     int j=m-1;
     int c=0;
     int k=0;
     while(i>=0 && j>=0){
         int x=num1[i]+num2[j]+c;
         res[k]=x%10;
         c=x/10;
         k++;
         i--;
         j--;
     }

     while(i>=0){
           int x=num1[i]+c;
         res[k]=x%10;
         c=x/10;
         k++;
         i--;

     }

      while(j>=0){
           int x=num2[j]+c;
         res[k]=x%10;
         c=x/10;
         k++;
         j--;

     }

     if(c>0){
     res[k]=c;
     k++;
     }
     for(int i=k-1;i>=0;i--)
     cout << res[i] << ","<< " ";

    cout << "END";
}
