#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
// by sunmin

class SinhVien {
private:
    string ten, lop, ns;
    db gpa;
public:
    friend istream& operator >> (istream& in, SinhVien &a);
    friend ostream& operator << (ostream& out, SinhVien a);
};

istream& operator >> (istream& in, SinhVien &a){
    cin.ignore();
    getline(in, a.ten);
    in >> a.lop >> a.ns;
    if(a.ns[1] == '/') a.ns.insert(0, "0");
    if(a.ns[4] == '/') a.ns.insert(3, "0");
    in >> a.gpa;
    return in;
}

int stt = 1;

ostream& operator << (ostream& out, SinhVien a) {
    cout << "B20DCCN" + string(3 - to_string(stt).length(), '0') + to_string(stt) << " ";
    stt++;
    cout << a.ten << " " << a.lop << " " << a.ns << " ";
    cout << fixed << setprecision(2) << a.gpa << endl;
    return out;
}

int main(){
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}