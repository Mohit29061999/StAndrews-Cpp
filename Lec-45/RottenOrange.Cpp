#include <bits/stdc++.h>
using namespace std;

class fruit{
public:
    //x means row,y means col and t means day at which it gets rot
    int x;
    int y;
    int t;
    fruit(int a,int b,int c){
        x=a;
        y=b;
        t=c;
    }
};



int main(){
    int t;
    cin>>t;
    while(t){
        t--;
        int n;
        cin>>n;
        int m;
        cin>>m;

        int arr[n][m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++)
                cin>>arr[i][j];
        }

        queue<fruit>q;

        //insert already rotten orange to queue
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(arr[i][j]==2){
                    fruit f(i,j,0);
                    q.push(f);
                }
            }
        }

        int ans =0;
        while(!q.empty()){
            fruit f=q.front();
            q.pop();

            //rot it's adjacent orange
            int x=f.x;
            int y=f.y;
            int t=f.t;

            ans =max(ans,t);

            //down direction me koi fresh orange h
            if(x+1<n && arr[x+1][y]==1){
                    //make down orange rotten
                arr[x+1][y]=2;
                fruit f1(x+1,y,t+1);
                q.push(f1);
            }

             //up direction me koi fresh orange h
            if(x-1>=0 && arr[x-1][y]==1){
                    //make down orange rotten
                arr[x-1][y]=2;
                fruit f1(x-1,y,t+1);
                q.push(f1);
            }

            //left direction me koi fresh orange h
             if(y-1>=0 && arr[x][y-1]==1){
                    //make down orange rotten
                arr[x][y-1]=2;
                fruit f1(x,y-1,t+1);
                q.push(f1);
            }

            //right direction
            if(y+1<m && arr[x][y+1]==1){
                    //make down orange rotten
                arr[x][y+1]=2;

                //insert it to queue as it is rotten now
                fruit f1(x,y+1,t+1);
                q.push(f1);
            }

        }

    //how to check if all orange are rotten or not???
    //check if any fresh orange is left ie.arr[i][j]=1
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]==1)
                ans =-1;
        }
    }


       cout << ans << endl;
    }


}

