#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
// by sunmin

struct Film{
    string ma, theloai, ngay, phimso;
    int tap;
    int dd, mm, yyyy;
};

void XuLiDate(Film &a){
    string s = a.ngay;
    string dd, mm, yyyy;
    dd = s.substr(3, 2);
    mm = s.substr(0, 2);
    yyyy = s.substr(6, 4);
    a.dd = stoi(dd);
    a.mm = stoi(mm);
    a.yyyy = stoi(yyyy);
}

int num = 1;

void nhap(Film &a){
    cin.ignore();
    getline(cin, a.theloai);
    getline(cin, a.ngay);
    XuLiDate(a);
    getline(cin, a.phimso);
    cin >> a.tap;
    a.ma = "";
    a.ma += "P" + string(3 - to_string(num).length(), '0') + to_string(num);
    num++;
    a.theloai.erase(0);
    a.theloai.erase(0);z
    string m = "";
    m += vt[stoi(a.theloai)];
}

bool cmp(Film a, Film b){
    if(a.yyyy != b.yyyy)
        return a.yyyy < b.yyyy;
    else if
}

void sapxep(Film a[], int n){
    sort(a, a + n, cmp);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, m;
    cin >> n >> m;
    struct Film a[50];
    vector <string> vt;
    for(int i = 0; i < n; i++){
        string x;
        cin.ignore();
        getline(cin, x);
        vt.push_back(x);
    }
    for(int i = 0; i < m; i++){
        nhap(a[i]);
    }
    return 0;
}