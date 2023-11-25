#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
// by sunmin

struct SinhVien{
    string msv, name, lop;
    float a, b, c;
};

void nhap(SinhVien &a){
    scanf("\n");
    cin >> a.msv;
    scanf("\n");
    getline(cin, a.name);
    cin >> a.lop >> a.a >> a.b >> a.c;
}

bool cmp(SinhVien a, SinhVien b){
    return a.msv < b.msv;
}

void sap_xep(SinhVien ds[50], int n){
    sort(ds, ds + n, cmp);
}

void in_ds(SinhVien ds[50], int n){
    for(int i = 0; i < n; i++){
        cout << i + 1 << " ";
        cout << ds[i].msv << " " << ds[i].name << " ";
        cout << ds[i].lop << " ";
        cout << fixed << setprecision(1) << ds[i].a << " " << ds[i].b << " " << ds[i].c << endl;
    }
}

int main(){
    int n;
    cin >> n;
    struct SinhVien *ds = new SinhVien[n];
    for(int i = 0; i < n; i++){
    	nhap(ds[i]);
	}
	sap_xep(ds, n);
    in_ds(ds,n);
    return 0;
}