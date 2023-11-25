#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
// by sunmin

class SinhVien {
    public:
        string msv, ten, email, lop;
        friend istream& operator >> (istream& is, SinhVien &a) {
            is >> a.msv;
            is.ignore();
            getline(is, a.ten);
            is >> a.lop >> a.email;
            return is;
        }
        friend ostream& operator << (ostream& os, SinhVien a) {
            cout << a.msv << " " << a.ten << " " << a.lop << " " << a.email << endl;
            return os;
        }
};

bool cmp(SinhVien a, SinhVien b) {
    if(a.lop != b.lop) return a.lop < b.lop;
    return a.msv < b.msv;
}

void sapxep(SinhVien ds[], int N) {
    sort(ds, ds + N, cmp);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    SinhVien ds[1001];
    int N; cin >> N;
    for(int i = 0; i < N; i++) cin >> ds[i];
    sapxep(ds, N);
    for(int i = 0; i < N; i++) cout << ds[i];
    return 0;
}