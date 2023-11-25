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
        string s;
        cin >> s;
        map <char, int > m;
        for(char x : s){
            m[x]++;
        }
        int len = m.size();
        int cnt = 0 , left = 0, res = INT_MAX;
        int dem[256] = {};
        for(int i = 0; i < s.length();i++){
            dem[s[i]]++;
            if(dem[s[i]] == 1) ++cnt;
            if(cnt == len){
                while(dem[s[left]] > 1 ){
                    dem[s[left]]--;
                    left++;
                }
                if(i - left + 1 < res){
				res = i - left + 1;
                }
            }
        }
        cout << res << endl;
    }
    return 0;
}