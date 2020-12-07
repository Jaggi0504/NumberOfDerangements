#include<bits/stdc++.h>
using namespace std;

int derangement(int n) {
	int dp[n+1];
	memset(dp, -1, sizeof(dp));
	if(n <= 1) {
		return 0;
	}
	if(n == 2) {
		return 1;
	}
	if(n == 3) {
		return 2;
	}
	if(dp[n] != -1) {
		return dp[n];
	}
	return dp[n] = ((n-1)* (derangement(n-2) + derangement(n-1)));
}

int main() {
	int n;
	cin>>n;
	int ans = derangement(n);
	cout<<ans;
	return 0;
}
