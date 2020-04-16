/*
we can use recursion to perform the search. The fol-
lowing function search maintains a vector
that will contain each permutation, and an array
which indicates for each element if it has been included in the permutation. The
search begins when the function is called without parameters.
*/
#include<bits/stdc++.h>
using namespace std;
vector<int> data{1,2,3,4};
vector<int> permutation;
int n=4;
vector<bool> chosen(4);
void search(){
	if(permutation.size() == n){
		for(auto &x : permutation)
			cout<<x<<" ";
		cout<<"\n";
	}
	else{
        for(int i=0;i<data.size();++i){
			if(chosen[i]) continue;

			chosen[i] = true;
			permutation.push_back(data[i]);
			search();
			chosen[i]=false;
			permutation.pop_back();
        }
	}
}
int main(){
	search();
}
