#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
// by sunmin

struct NhanVien{
    string name;
    string sex;
    string date;
    string addr;
    string tax;
    string b;
};

void nhap(NhanVien &a){
    getline(cin, a.name);
    getline(cin, a.sex);
    getline(cin, a.date);
    getline(cin, a.addr);
    getline(cin, a.tax);
    getline(cin, a.b);
}

void in(NhanVien a){
    cout << "00001" << " " << a.name << " " << a.sex << " " << a.date << " " << a.addr << " " << a.tax << " " << a.b;
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