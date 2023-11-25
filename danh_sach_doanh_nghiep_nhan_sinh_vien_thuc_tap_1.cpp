#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
// by sunmin

class DoanhNghiep {
    public: 
        string mdn, ten;
        int sl;
    friend istream& operator >> (istream& is, DoanhNghiep &a) {
        is >> a.mdn;
        cin.ignore();
        getline(is, a.ten);
        is >> a.sl;
        return is;
    }
    friend ostream& operator << (ostream& os, DoanhNghiep a) {
        cout << a.mdn << " " << a.ten << " " << a.sl << endl;
        return os;
    }
};

bool cmp(DoanhNghiep a, DoanhNghiep b) {
    if(a.sl != b.sl) return a.sl > b.sl;
    return a.mdn < b.mdn;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n; cin >> n;
    DoanhNghiep ds[n];
    for(int i = 0; i < n; i++) {
        cin >> ds[i];
    }
    sort(ds, ds + n, cmp);
    for(int i = 0; i < n; i++) {
        cout << ds[i];
    }
    return 0;
}