#include<bits/stdc++.h>
using namespace std;
const int n=5;
pair<int,int> best[1<<n];
int main() {
	best[0]={1,0};
	vector<int> weight = {2,3,4,5,9};
	int x=12;
	for(int s=1;s<(1<<n);++s){

		best[s]={n+1,0};

		for(int p=0;p<n;++p){

            if(s&(1<<p)){
				auto option = best[s^(1<<p)];

				if(option.second + weight[p]<=x){
                    option.second += weight[p];
				}else{
                    option.first++;
                    option.second = weight[p];
				}

				best[s] = min(best[s],option);
            }
		}
		//cout<<"s:"<<s<<" "<<best[s].first<<" "<<best[s].second<<endl;
	}

}
