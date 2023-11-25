#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
// by sunmin

struct PhanSo{
    ll tu, mau;
};

PhanSo sum(PhanSo a, PhanSo b){
    PhanSo c;
    c.tu = a.tu * b.mau + a.mau * b.tu;
    c.mau = a.mau * b.mau;
    ll x = __gcd(c.tu, c.mau);
    c.tu /= x;
    c.mau /= x;
    c.tu = c.tu * c.tu;
    c.mau = c.mau * c.mau;
    return c;
}

PhanSo tich(PhanSo a, PhanSo b, PhanSo c){
    PhanSo d;
    d.tu = a.tu * b.tu * c.tu;
    d.mau = a.mau * b.mau * c.mau;
    ll x = __gcd(d.tu, d.mau);
    d.tu /= x;
    d.mau /= x;
    return d;
}

void process(PhanSo a, PhanSo b){
    PhanSo c = sum(a, b);
    cout << c.tu << "/" << c.mau << " ";
    PhanSo d = tich(a, b, c);
    cout << d.tu << "/" << d.mau << endl;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		PhanSo A;
		PhanSo B;
		cin >> A.tu >> A.mau >> B.tu >> B.mau;
		process(A, B);
	}
}