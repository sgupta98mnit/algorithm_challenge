/*
The search begins by calling search(0). The size of the board is n, and the
code calculates the number of solutions to count. The code assumes that the rows
and columns of the board are numbered from 0 to n − 1. When search is called
with parameter y, it places a queen on row y and then calls itself with parameter
y +1. Then, if y = n, a solution has been found, and the value of count is increased
by one.
The array col keeps track of the columns that contain a queen, and the arrays
diag1 and diag2 keep track of the diagonals. It is not allowed to add another
queen to a column or diagonal that already contains a queen.
*/
#include<bits/stdc++.h>
using namespace std;
int col[10],diag1[20],diag2[20];
int n=4,ans=0;
void search(int y){
	if(y==n){
		++ans;
		return ;
	}
	for(int x=0;x<n;++x){
        if(col[x] || diag1[x+y] || diag2[x-y+n-1])
			continue;
		col[x]=1; diag1[x+y]=1 ; diag2[x-y+n-1]=1;
		search(y+1);
		col[x]=0; diag1[x+y]=0 ; diag2[x-y+n-1]=0;
	}
}
int main(){
	search(0);
	cout<<ans;
}
