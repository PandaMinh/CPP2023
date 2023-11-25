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

PhanSo tong(PhanSo p, PhanSo q){
    PhanSo m;
    m.a = p.a * q.b + p.b * q.a;
    m.b = p.b * q.b;
    return m;
}

void in(PhanSo m){
    ll tmp = ucln(m.a, m.b);
    m.a = m.a / tmp;
    m.b = m.b / tmp;
    cout << m.a << "/" << m.b;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    struct PhanSo p,q;
	nhap(p); nhap(q);
	PhanSo t = tong(p,q);
	in(t);
	return 0;
}