#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
// by sunmin

struct SoPhuc{
    double ao, thuc;
};

SoPhuc binh_phuong_tong(SoPhuc a, SoPhuc b){
    SoPhuc c, d;
    c.thuc = a.thuc + b.thuc;
    c.ao = a.ao + b.ao;
    d.thuc = c.thuc * c.thuc - c.ao * c.ao;
    d.ao = 2 * c.thuc * c.ao;
    return d;
}

void hien_thi(SoPhuc a){
    cout << a.thuc;
    if(a.ao > 0)
        cout << " + " << a.ao << "i";
    else if(a.ao < 0)
        cout << " - " << a.ao * (-1) << "i";
}

int main(){
    int t;
    cin >> t;
    while(t--){
        SoPhuc A;
        SoPhuc B;
        cin >> A.thuc >> A.ao >> B.thuc >> B.ao;
        SoPhuc C = binh_phuong_tong(A, B);
        hien_thi(C);
        cout << endl;
    }
    return 0;
}

// 1: 2
// 2: 4
// 3: 3
// 4: 1


// 1: 2
// 2: 2
// 3: 2