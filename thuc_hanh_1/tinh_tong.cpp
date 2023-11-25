#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
// by sunmin

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        char a[20] = {};
		char b[20] = {};
		long long  max1 = 0, min1 = 0;
		long long  max2 = 0, min2 = 0;
		cin >> a >> b;
		int m = strlen(a);
		int n = strlen(b);
		for(int i = 0; i < m; i++){
			int x = a[i] - '0';
			if(x == 6){
				x = 5;
			}
			min1 = min1 * 10 + x;
			if(x == 5){
				x = 6;
			}
			max1 = max1 * 10 + x;
		}
		for(int i = 0; i < n; i++){
			int x = b[i] - '0';
			if(x == 6){
				x = 5;
			}
			min2 = min2 * 10 + x;
			if(x == 5){
				x = 6;
			}
			max2 = max2 * 10 + x;
		}
        cout << min1 + min2 << " " << max1 + max2 << endl;
    }
    return 0;
}
