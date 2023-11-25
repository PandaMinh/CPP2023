#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
// by sunmin

int main(){
    ifstream file;
    file.open("DATA.in");
    int n, m;
    file >> n >> m;
    set <int> st1, st2;
    int x;
    for(int i = 0; i < n; i++) {
        file >> x;
        st1.insert(x);
    }
    for(int i = 0; i < m; i++) {
        file >> x;
        st2.insert(x);
    }       
    map <int, int> mp;
    for(auto x : st1) mp[x]++;
    for(auto x : st2) mp[x]++;

    for(auto x : mp) {
        if(x.second > 1) cout << x.first << " ";
    } 
    return 0;
}