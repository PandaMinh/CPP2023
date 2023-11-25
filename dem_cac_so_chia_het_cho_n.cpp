#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
// by sunmin

void solve(string &s , int &size , int &n){
	vector<vector<long long>> dp(size,vector<long long>(n,0));
	dp[0][(s[0]-'0')%n]++;	
	for(int i = 1; i < size; i++){
		dp[i][(s[i]-'0')%n]++;
		for(int j = 0 ; j < n; j++){
			dp[i][j] =  (dp[i][j] + dp[i-1][j]);
			dp[i][(j*10 + (s[i]-'0'))%n] = (dp[i][(j*10 + (s[i]-'0'))%n]  + dp[i-1][j]);
		}
	}
	cout << dp[size-1][0] << endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> m >> n;
        string s;
        cin >> s;
        solve(s, m, n);
    }
    return 0;
}