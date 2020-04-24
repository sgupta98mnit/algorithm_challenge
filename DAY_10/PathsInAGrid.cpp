/*
	find a path from the upper-left corner to the lower-right corner of
	an n × n grid, with the restriction that we may only move down and right.
	value[x][y] denotes value in the grid
	sum[x][y] deontes the maximum sum that can be gatherd to reach point (x,y)
*/

for(int row=1;row<=n;++row){
	for(int col=1;col<=n;++col){
		sum[row][col]=max(sum[row-1][col],sum[row][col-1])+value[row][col];
	}
}
