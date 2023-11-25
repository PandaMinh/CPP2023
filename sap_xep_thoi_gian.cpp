#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
// by sunmin

struct Time{
    int gio, phut, giay;
};

void nhap(Time &a){
    cin >> a.gio >> a.phut >> a.giay;
}

bool cmp(Time a, Time b){
    if(a.gio != b.gio) {
        return a.gio < b.gio;
    }
    if(a.phut != b.phut){
        return a.phut < b.phut;
    }
    return a.giay < b.giay;
}

void sapxep(Time tm[], int n){
    sort(tm, tm + n, cmp);
}

void inds(Time tm[], int n){
    for(int i = 0; i < n; i++) {
        cout << tm[i].gio << " " << tm[i].phut << " " << tm[i].giay << endl;
    }
}

int main(){
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n; cin >> n;
    Time tm[n];
    for(int i = 0; i < n; i++){
        nhap(tm[i]);
    }
    sapxep(tm, n);
    inds(tm, n);
    return 0;
}