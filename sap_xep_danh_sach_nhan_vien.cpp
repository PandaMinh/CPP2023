#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
// by sunmin

struct NhanVien{
    string ten, gt, ns, dc, fax, day;
    string id;
    int dd, mm, yyyy;
};

bool cmp(NhanVien a, NhanVien b){
    if(a.yyyy != b.yyyy)
        return a.yyyy < b.yyyy;
    else{
        if(a.mm != b.mm)
            return a.mm < b.mm;
    }
    return a.dd < b.dd;
}

void ns(NhanVien &a){
    a.dd = (a.ns[1] - '0') + (a.ns[0] - '0') * 10;
    a.mm = (a.ns[3] - '0') * 10 + (a.ns[4] - '0');
    a.yyyy = (a.ns[6] - '0') * 1000 + (a.ns[7] - '0') * 100 + (a.ns[8] - '0') * 10 + (a.ns[9] - '0');
}

int stt = 1;

void nhap(NhanVien &a){
    if(stt == 1) cin.ignore();
    a.id = string(5 - to_string(stt).length(), '0') + to_string(stt);
    stt++;
    getline(cin, a.ten);
    getline(cin, a.gt);
    getline(cin, a.ns);
    ns(a);
    getline(cin, a.dc);
    getline(cin, a.fax);
    getline(cin, a.day);
}

void sapxep(NhanVien ds[50], int n){
    sort(ds, ds + n, cmp);
}

void inds(NhanVien ds[50], int n){
    for(int i = 0; i < n; i++){
        cout << ds[i].id << " " << ds[i].ten << " ";
        cout << ds[i].gt << " " << ds[i].ns << " " << ds[i].dc << " ";
        cout << ds[i].fax << " " << ds[i].day << endl;
    }
}

int main(){
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    sapxep(ds, N);
    inds(ds, N);
    return 0;
}