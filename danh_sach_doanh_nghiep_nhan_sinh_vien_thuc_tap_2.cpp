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
    int q; cin >> q;
    while(q--) {
        int a, b; cin >> a >> b;
        cout << "DANH SACH DOANH NGHIEP NHAN TU " << a << " DEN " << b << " SINH VIEN:" << endl;
        for(auto x : ds) {
            if(x.sl >= a && x.sl <= b) {
                cout << x;
            }
        }
    }
    return 0;
}