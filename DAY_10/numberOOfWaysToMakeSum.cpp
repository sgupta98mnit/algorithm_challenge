/*
	our task is to calculate the total number
	of ways to produce a sum x using the coins
*/
#include<bits/stdc++.h>
using namespace std;
vector<int> coins={1,3,4};
vector<int> ans(100);
int target=5;
int main(){
	//number of ways to make sum 0 is 1
	ans[0]=1;
	for(int sum=1;sum<=target;++sum){
		for(int coin : coins){
			if(sum-coin>=0)
				ans[sum]+=ans[sum-coin];
		}
	}
	cout<<ans[target]<<"\n";
}
