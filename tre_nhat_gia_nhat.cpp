#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
// by sunmin

struct infor{
    string name, ns;
    int day, month, year;
};

bool cmp(infor a, infor b){
    if(a.year != b.year)
        return a.year < b.year;
    else{
        if(a.month != b.month)
            return a.month < b.month;
    }
    return a.day < b.day;
}

void ns(infor &a){
    a.day = (a.ns[1] - '0') + (a.ns[0] - '0') * 10;
    a.month = (a.ns[3] - '0') * 10 + (a.ns[4] - '0');
    a.year = (a.ns[6] - '0') * 1000 + (a.ns[7] - '0') * 100 + (a.ns[8] - '0') * 10 + (a.ns[9] - '0');
}

void nhap(infor &a){
    cin >> a.name;
    cin >> a.ns;
    ns(a);
}

void sapxep(infor ds[50], int n){
    sort(ds, ds + n, cmp);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    struct infor *ds = new infor[n];
    for(int i = 0; i < n; i++) {
        nhap(ds[i]);
    }
    sapxep(ds, n);
    cout << ds[n - 1].name << endl;
    cout << ds[0].name << endl;
    return 0;
}