#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
// by sunmin

class SinhVien {
    private:
    public:
        string msv, ten, email, lop;
        string nganh;
        friend istream& operator >> (istream& is, SinhVien &a) {
            is >> a.msv;
            is.ignore();
            getline(is, a.ten);
            is >> a.lop >> a.email;
            // xu li nganh
            a.nganh = a.msv.substr(5, 2);
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
    cin.ignore();
    while(q--) {
        string s; getline(cin, s);
        string nganh = "", tmp;
        stringstream ss(s);
        int lc = 0;
        while(ss >> tmp && lc < 2) {
            nganh += toupper(tmp[0]);
            lc ++;
        }
        transform(s.begin(), s.end(), s.begin(), ::toupper); 
        cout << "DANH SACH SINH VIEN NGANH " << s << ":" << endl;

        for(int i = 0; i < N; i++) {
            if(ds[i].nganh == nganh) {
               if(nganh == "CN" || nganh == "AT") {
                    if(ds[i].lop[0] != 'E') {
                        cout << ds[i];
                    }
               } else {
                    cout << ds[i];
               }
            }
        }
    }
    return 0;
}