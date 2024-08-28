#include<bits/stdc++.h>
#include <algorithm>
using namespace std;
#define IOS ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define trace1(x)                cerr<<#x<<": "<<x<<"\n";
#define trace2(x, y)             cerr<<#x<<": "<<x<<" | "<<#y<<": "<<y<<"\n";
#define trace3(x, y, z)          cerr<<#x<<":" <<x<<" | "<<#y<<": "<<y<<" | "<<#z<<": "<<z<<"\n";
#define trace4(a, b, c, d)       cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<"\n";
#define trace5(a, b, c, d, e)    cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<"\n";
#define trace6(a, b, c, d, e, f) cerr<<#a<<": "<<a<<" | "<<#b<<": "<<b<<" | "<<#c<<": "<<c<<" | "<<#d<<": "<<d<<" | "<<#e<< ": "<<e<<" | "<<#f<<": "<<f<<"\n";
#define int long long
int n, d;
vector<double> a;
int l, r;
bool canDivideSegment(double avg) {
    vector<double> prefixSum(n + 1, 0);
    for(int i = 0; i < n; ++i) 
        prefixSum[i + 1] = prefixSum[i] + a[i] - avg;
    
}
signed main() {
    IOS
    cin >> n >> d;
    a.resize(n);
    for(int i = 0; i < n; ++i)
        cin >> a[i];
    double minAvg = 0;
    double maxAvg = 100;
    double eps = 1e-6;
    while(maxAvg - minAvg > eps) {
        double midAvg = (minAvg + maxAvg) / 2;
        if(canDivideSegment(midAvg))
            minAvg = midAvg;
        else
            maxAvg = midAvg;
    }
    return 0;
}