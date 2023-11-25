#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
// by sunmin

int n, k, b[100][100], cnt = 0;

void nhap(){
    for(int i = 1; i <= n; i++)
		for(int j = 1; j <= n; j++)
			cin >> b[i][j];
}

void back_tracking(int i, int j, int sum){
	if(i == n && j == n && sum == k){
		cnt++;
		return;
	}	
	if(i+1 <= n && sum + b[i+1][j] <= k){
		back_tracking(i+1, j, sum + b[i+1][j]);
	}
	if(j+1 <= n && sum + b[i][j+1] <= k){
		back_tracking(i, j+1, sum + b[i][j+1]);
	}
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        cnt = 0;
        cin >> n >> k;
        nhap();
        back_tracking(1, 1, b[1][1]);
		cout << cnt << endl;
    }
    return 0;
}