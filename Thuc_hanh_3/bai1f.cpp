#include<bits/stdc++.h>

using namespace std;

map<string, string> M;

int idx = 1;

class TheLoai{
public:
    string ma, ten;
    friend istream& operator >>(istream& is, TheLoai& a){
        a.ma = "TL";
        if (idx < 10) a.ma += "00" + to_string(idx);
        else if (idx < 100) a.ma += "0" + to_string(idx);
        else a.ma += to_string(idx);
        getline(is, a.ten);
        M[a.ma] = a.ten;
        ++idx;
        return is;
    }
};

int j = 1;
int cv(string& s){
    int res = 0;
    for (int i : s) res = res * 10 + (i - '0');
    return res;
}

class Phim{
public:
    string ma, ten, nc, tap, tl, m;
    int ngay, thang, nam, sotap;
    friend istream& operator >> (istream& is, Phim& a){
        a.m = "P";
        if (j < 10) a.m += "00" + to_string(j);
        else if (j < 100) a.m += "0" + to_string(j);
        else a.m += to_string(j);
        string s1, s2;
        getline(is, a.ma);
        a.tl = M[a.ma];
        getline(is, a.nc);
        getline(is, a.ten);
        getline(is, a.tap);
        stringstream ss2(a.nc);
        getline(ss2, s2, '/');
        a.ngay = cv(s2);
        getline(ss2, s2, '/');
        a.thang = cv(s2);
        getline(ss2, s2, '/');
        a.nam = cv(s2);
        a.sotap = cv(a.tap);
        ++j;
        return is;
    }
    friend ostream& operator << (ostream& os, Phim& a){
        cout << a.m << ' ' << a.tl << ' ' << a.nc << ' ' << a.ten << ' ' << a.tap << endl;
        return os;
    }
};

bool cmp(Phim& a, Phim& b){
    if (a.nam > b.nam) return 0;
    if (a.nam < b.nam) return 1;
    if (a.thang > b.thang) return 0;
    if (a.thang < b.thang) return 1;
    if (a.ngay > b.ngay) return 0;
    if (a.ngay < b.ngay) return 1;
    if (a.ten > b.ten) return 0;
    if (a.ten < b.ten) return 1;
    if (a.sotap < b.sotap) return 0;
    if (a.sotap > b.sotap) return 1;
    return 0;
}

void process(TheLoai mh[], int n, Phim a[], int m){
    sort(a, a + m, cmp);
}

int main(){
    int n, m;
    cin >> n >> m;
    cin.ignore();
    TheLoai tl[100];
    Phim p[1000];
    for (int i = 0; i < n; i++) cin >> tl[i];
    for (int i = 0; i < m; i++) cin >> p[i];
    process(tl, n, p, m);
    for (int i = 0; i < m; i++) cout << p[i];
}