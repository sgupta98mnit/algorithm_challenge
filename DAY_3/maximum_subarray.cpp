#inlcude<bits/stdc++.h>
using namespace std;
int main(){

	// O(N3) solution
	vector<int> data{1,-2,3,4}
	for(int i=0;i<(int)data.size();++i){
		for(int j=i;j<(int)data.size();++i){
			int sum=0;
			for(int k=i;k<=j;++i){
				sum+=data[k];
			}
			ans=max(sum,ans);
		}
	}
	// O(N2) solution
	for(int i=0;i<(int)data.size();++i){
		int sum=0;
		for(int j=i;j<data.size();++j){
			sum+=data[j];
			ans=max(ans,sum);
		}
	}

	//O(N) solution
	int sum=0;
	for(int i=0;i<(int)data.size();++i){
        sum=max(data[i],sum+data[i]);
        ans=max(ans,sum);
	}
}
