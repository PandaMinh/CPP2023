#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
const ll mod = 1000000007;
// by sunmin

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t; 
    cin >> t;
    while(t--){
        int n; 
        cin >> n;
        int count = 0;
        if(!n){
            cout << 0 << endl;
            continue; 
        }
        int a[n];
        for(int i = 0; i < n; i++) cin >> a[i]; 
        sort(a, a+n);
        int d = a[n-1] - a[0];
        vector<int> v; 
        for(int i = 1; i*i <= d; i++){ 
            if(d%i == 0){ 
                v.push_back(i);
                if(i != d/i) v.push_back(d/i);
            } 
        } 
        for(int i = 0; i < v.size(); i++){ 
            int tmp = a[0]%v[i];
            int j;
            for(j = 1; j < n; j++) if(a[j]%v[i] != tmp) break;
            if(j == n) count++;
        } 
        cout << count << endl;
    }
    return 0;
}