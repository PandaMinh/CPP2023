#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
// by sunmin

struct PhanSo{
    ll a, b;
};

void nhap(PhanSo &p){
    cin >> p.a >> p.b;
}

ll ucln(ll a, ll b){
    if(b == 0) return a;
    else return ucln(b, a % b);
}

void rutgon(PhanSo &p){
    ll tmp = ucln(p.a, p.b);
    p.a = p.a / tmp;
    p.b = p.b / tmp;
}

void in(PhanSo p){
    cout << p.a << "/" << p.b;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    struct PhanSo p;
	nhap(p);
	rutgon(p);
	in(p);
	return 0;
}