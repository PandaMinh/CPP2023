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
    return a.msv < b.msv;
}

void sapxep(SinhVien ds[], int N) {
    sort(ds, ds + N, cmp);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N = 0;
    SinhVien ds[1001];
    while(cin >> ds[N]) {
        N++;
    }
    sapxep(ds, N);
    for(int i = 0; i < N; i++) cout << ds[i];
    return 0;
}