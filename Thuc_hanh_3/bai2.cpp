#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
// by sunmin

struct NhanVien{
    string name, chucvu;
    ll luong, ngay;
};

string ChuanHoa(string s){
    string res = "";
    stringstream ss(s);
    string tmp;
    while(ss >> tmp){
        res += toupper(tmp[0]);
        for(int i = 1; i < tmp.length(); i++){
            res += tolower(tmp[i]);
        }
        res += " ";
    }
    res.erase(res.length() - 1);
    return res;
}

void nhap(NhanVien &a){
    getline(cin, a.name);
    cin >> a.luong >> a.ngay;
    cin.ignore();
    getline(cin, a.chucvu);
}

void in(NhanVien a){
    a.name = ChuanHoa(a.name);
    int thuong = 0, phucap = 0;
    if(a.ngay >= 25)
        thuong = a.luong * a.ngay * 20 / 100;
    else if(a.ngay < 25 && a.ngay >= 22)
        thuong = a.luong * a.ngay * 10 / 100;
    if(a.chucvu[0] == 'G')
        phucap = 250000;
    else if(a.chucvu[0] == 'P')
        phucap = 200000;
    else if(a.chucvu[0] == 'T')
        phucap = 180000;
    else if(a.chucvu[0] == 'N')
        phucap = 150000;
    a.luong = a.luong * a.ngay;
    cout << "NV01 " << a.name << " " << a.luong << " " << thuong << " " << phucap << " " << a.luong + thuong + phucap;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    struct NhanVien a;
    nhap(a);
    in(a);
    return 0;
}