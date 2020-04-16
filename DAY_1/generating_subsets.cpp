/*
The following recursive function search can be used to generate the subsets. The
function maintains a vector that will contain the elements of each subset. The search begins when the function
is called with parameter 1.
When the function search is called with parameter k, it decides whether to
include the element k in the subset or not, and in both cases, then calls itself with
parameter k + 1. Then, if k = n + 1, the function notices that all elements have been
processed and a subset has been generated.
*/
#include<bits/stdc++.h>
using namespace std;
vector<int> data{1,2,3};
vector<int> subset;
int n=3;
void search(int k){
	if(k==n){
		for(auto &x : subset)
			cout<<x<<" ";
		cout<<"\n";
	}
	else{
        // include the kth element in the subset
        subset.push_back(data[k]);
        search(k+1);

        // exclude the kth element from the subset
        subset.pop_back();
        search(k+1);
	}
}
int main(){
	search(0);
}
