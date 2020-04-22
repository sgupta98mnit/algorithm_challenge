#include<bits/stdc++.h>
using namespace std;
int main(){
	vector<int> data{1,2,2,3,3,3,4,5,6,6,7,8,9};
	int left=0,right=data.size()-1,target=5;
	while(left<=right){
		int mid=(left+right)/2;
		if(data[mid] == target){
			// Found the solution
		}
		if(target < data[mid])
			right = mid-1;
		else
			left = mid+1;
	}

							/* Second Method */
	/* Another way to implement binary search is to go through the array
	from left to right making jumps. The initial jump length is n/2, and the jump length
	is halved on each round: first n/4, then n/8, then n/16, etc., until finally the length
	is 1. On each round, we make jumps until we would end up outside the array or in
	an element whose value exceeds the target value. After the jumps, either the desired
	element has been found or we know that it does not appear in the array.
	During the search, the variable b contains the current jump length.
	*/
}


