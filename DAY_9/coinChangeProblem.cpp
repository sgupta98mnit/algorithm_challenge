/*
	Coin Change problem
	Find minimum coins required to make a pirticular sum from a given set of coins.
	Dynamic programming
*/
#include<bits/stdc++.h>
using namespace std;
vector<int> coin{1,3,4};
int target=10;
int solve(int sum){
    if(x<0)
		return 100000;
	if(x==0)
		return 0;
	if(ready[sum])
		return value[sum];
	int best=1e6;
	for(auto c : coin){
		best=min(best,solve(sum-c)+1);
	}
	value[sum]=best;
	ready[sum]=true;
	return value[sum];
}
int main(){
	/* Iterative solution */
    value[0]=0;
    for(int x=1;x<=n;++x){

    }
}
