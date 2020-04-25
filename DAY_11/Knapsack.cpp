/*
	Knapsack Problem : to determine if we can form a proticular sum using a
	given set of weights;
	possile[x][k] deonotes if we can form sum x using first k set of weights.
*/

possible[0][0]=true;

for(int k=1;k<=n;++k){
	for(int x=0;x<=m;++x){
		if(x-w[k]>=0)
			possible[x][k] |= possible[x-w[k]][k-1];
		possible[x][k] |= possible[x][k-1];
	}
}
//////////////////////////////////////////////////////////////////////////////////////////////
/*
	Compact Way using one D array	:
	trick is to update the array from right to left for each new weight

*/
possible[0]=true;
for(int k=1;k<=n;++k){
	for(int x=m-w[k];x>=0;--x){
		possible[x+w[k]] |= possible[x];
	}
}
