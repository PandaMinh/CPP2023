#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
// by sunmin

int n, m, l, k;
int a[501][501], b[501][501];

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        cin >> n >> m >> l;
        k = (l - 1) / 2;
        for(int i = 1; i < n + 1; i++){
            for(int j = 1; j < m + 1; j++){
                cin >> a[i][j];
            }
        }
        int prefix[n + 1][m + 1];
        memset(prefix, 0, sizeof(prefix));
        for(int i = 1; i <= n; i++){
		    for(int j = 1; j <= m; j++){
		    	prefix[i][j] = prefix[i - 1][j] + prefix[i][j - 1] - prefix[i - 1][j - 1] + a[i][j];
		    }
	    }
	    for(int i = 1 ; i <= n - l + 1; i++){
	    	for(int j = 1; j <= m -l + 1; j++){
	    		int h1 = i, h2 = i + l - 1, c1 = j, c2 = j + l - 1;
	    		int sum = prefix[h2][c2] - prefix[h1-1][c2] - prefix[h2][c1-1] + prefix[h1-1][c1-1];
	    		b[i][j] = sum / (l * l);
	    	}
	    }
	    for(int i = 1 ; i <= n - l + 1; i++){
	    	for(int j = 1; j <= m - l + 1; j++){
	    		cout << b[i][j] << " ";
	    	}
	    	cout << endl;
        }
    }
    return 0;
}