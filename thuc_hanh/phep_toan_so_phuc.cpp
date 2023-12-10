#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
// by sunmin

class SoPhuc{
    public:
    ll thuc, ao;
    friend istream &operator >> (istream &in, SoPhuc &A);
    friend istream &operator << (istream &out, SoPhuc &A);
};

istream& operator >>(istream& in, SoPhuc &A){
    in >> A.thuc >> A.ao;
    return in;
}

SoPhuc binh_phuong_tong(SoPhuc A, SoPhuc B){
    SoPhuc C;
    C.thuc = A.thuc + B.thuc;
    C.ao = A.ao + B.ao;
    SoPhuc D;
    D.thuc = C.thuc * C.thuc - C.ao * C.ao;
    D.ao = 2 * C.thuc * C.ao;
    return D;
}

void hien_thi(SoPhuc C){
    if(C.ao > 0)
        cout << C.thuc << " " << "+" << C.ao <<"i";
    else if(C.ao < 0)
        cout << C.thuc << " " << C.ao << "i";
    else
        cout << C.thuc;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		SoPhuc A;
		SoPhuc B;
		cin >> A.thuc >> A.ao >> B.thuc >> B.ao;
		SoPhuc C = binh_phuong_tong(A, B);
		hien_thi(C);
		cout << endl;
	}
}