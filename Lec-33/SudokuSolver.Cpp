#include <bits/stdc++.h>
using namespace std;


//to find empty cell
void find(int grid[9][9],int &r,int &c){
	//try all rows and all cols and see if there is empty cell
	for(int i=0;i<=8;i++){
		for(int j=0;j<=8;j++){
			if(grid[i][j]==0){
				r=i;
				c=j;
				return;
			}
		}
	}
}

//to check if we can place a value at a particular cell.
bool kyasafe(int grid[9][9],int r,int c,int num){
	//check for all col;
	for(int i=0;i<9;i++){
		if(grid[r][i]==num)
			return false;
	}

	//check for all row;
	for(int i=0;i<9;i++){
		if(grid[i][c]==num)
			return false;
	}

	//try 3*3 grid;
	int r_s=r-r%3;
	int c_s=c-c%3;
	for(int i=r_s;i<r_s+3;i++){
		for(int j=c_s;j<c_s+3;j++){
			if(grid[i][j]==num)
			return false;
		}
	}

	return true;
}

bool sudoku(int grid[9][9]){
	int r=-1;
	int c=-1;
	//find any empty cell
	find(grid,r,c);

	//if sudoku is completely filled
	if(r==-1 && c==-1){
		for(int i=0;i<9;i++){
			for(int j=0;j<9;j++){
				cout << grid[i][j] << " ";
			}

			cout << endl;
		}

		cout << endl;
		cout << endl;
		//return true;
		return false;
	}

	//try all values in that cell;
	for(int i=1;i<=9;i++){
		if(kyasafe(grid,r,c,i)){
			grid[r][c]=i;
			if(sudoku(grid)){
				return true;
			}

			//backtracking
			grid[r][c]=0;
		}
	}

	return false;
}


int main(){
  //int g1[n][n];
	//for(int i=0;i<n;i++){
	//	for(int j=0;j<n;j++)
	//		cin>>grid[i][j];
	//}
int grid[9][9] = { {3, 0, 6, 5, 0, 8, 4, 0, 0}, 
         {5, 2, 0, 0, 0, 0, 0, 0, 0}, 
         {0, 8, 7, 0, 0, 0, 0, 3, 1}, 
         {0, 0, 3, 0, 1, 0, 0, 8, 0}, 
         {9, 0, 0, 8, 6, 3, 0, 0, 5}, 
         {0, 5, 0, 0, 9, 0, 6, 0, 0}, 
         {1, 3, 0, 0, 0, 0, 2, 5, 0}, 
         {0, 0, 0, 0, 0, 0, 0, 7, 4}, 
         {0, 0, 5, 2, 0, 6, 3, 0, 0} };

         sudoku(grid);




    
    }