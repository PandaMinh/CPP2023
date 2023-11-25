#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
// by sunmin

struct infor{
    string bien;
    string loai;
    int soghe;
    string in_out;
    string day;
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    infor a[n + 5];
    for(int i = 0; i < n; i++){
        cin >> a[i].bien >> a[i].loai >> a[i].soghe >> a[i].in_out >> a[i].day;
    }
    map <string, ll> mp;
    for(int i = 0; i < n; i++){
        if(a[i].in_out == "IN"){
            if(a[i].loai == "Xe_con" && a[i].soghe == 5)
                mp[a[i].day] += 10000;
            if(a[i].loai == "Xe_con" && a[i].soghe == 7)
                mp[a[i].day] += 15000;
            if(a[i].loai == "Xe_tai" && a[i].soghe == 2)
                mp[a[i].day] += 20000;
            if(a[i].loai == "Xe_khach" && a[i].soghe == 29)
                mp[a[i].day] += 50000;
            if(a[i].loai == "Xe_khach" && a[i].soghe == 45)
                mp[a[i].day] += 70000;
        }
    }
    for(auto x : mp){
        cout << x.first << ": " << x.second << endl;
    }
    return 0;
}