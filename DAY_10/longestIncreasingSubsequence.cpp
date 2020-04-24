/*
	Longest Increasing Subsequence
	length[i] deontes the maximum length upto point i
*/

for(int i=0;i<n;++i){
	length[i] = 1;

	for(int j=0;j<i;++j){
		if(arr[j]<arr[i])
			length[i]=max(length[i],length[j]+1);
	}
}
