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

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    SinhVien ds[1001];
    int N; cin >> N;
    for(int i = 0; i < N; i++) cin >> ds[i];
    int q; cin >> q;
    while(q--) {
        string s; cin >> s;
        cout << "DANH SACH SINH VIEN LOP " << s << ":" << endl;
        for(int i = 0; i < N; i++) {
            if(ds[i].lop == s) {
                cout << ds[i];
            }
        }
    }
    return 0;
}