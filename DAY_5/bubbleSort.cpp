// Bubble Sort
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> data{4,3,2,1};
    int n=data.size();
    for( int i=0 ; i<n ; ++i ){
        for( int j=0 ; j<n-1 ;++j){
			if( data[j] > data[j+1] )
				swap(data[j],data[j+1]);
        }
    }
}
