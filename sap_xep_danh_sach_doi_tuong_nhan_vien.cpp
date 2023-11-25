#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
// by sunmin

int stt = 1;

class NhanVien {
public: 
    string mnv, ten, ns, gt, dc, mst, nkhd;
    int day, month, year;
    friend istream& operator >> (istream& is, NhanVien &a) {
        cin.ignore();
        getline(is, a.ten);
        is >> a.gt >> a.ns;
        cin.ignore();
        getline(is, a.dc);
        is >> a.mst >> a.nkhd;
        a.mnv = string(5 - to_string(stt).length(), '0') + to_string(stt);
        stt++;
        string s = a.ns;
        a.day = stoi(s.substr(3, 2));
        a.month= stoi(s.substr(0, 2));
        a.year = stoi(s.substr(6, 4));
        return is;
    }
    friend ostream& operator << (ostream& os, NhanVien a) {
        cout << a.mnv << " " << a.ten << " " << a.gt << " " << a.ns << " "; 
        cout << a.dc << " " << a.mst << " " << a.nkhd << endl;
        return os;
    }
};

bool cmp(NhanVien a, NhanVien b) {
    if(a.year != b.year) return a.year < b.year;
    if(a.month != b.month) return a.month < b.month;
    return a.day < b.day;
}

void sapxep(NhanVien ds[], int N) {
    sort(ds, ds + N, cmp);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> ds[i];
    sapxep(ds, N);
    for(i=0;i<N;i++) cout << ds[i];
    return 0;
}