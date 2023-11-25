#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
// by sunmin

int stt = 1;

class SinhVien {
private:
    string msv, ten, lop, ns;
    db gpa;
public:
    friend istream& operator >> (istream& in, SinhVien &a);
    friend ostream& operator << (ostream& out, SinhVien a);
    db getGpa();
};

db SinhVien::getGpa() {
    return this->gpa;
}

string chuanHoa(string s) {
    string a = "";
    stringstream ss(s);
    string tmp;
    while(ss >> tmp) {
        a += toupper(tmp[0]);
        for(int i = 1; i < tmp.length(); i++) {
            a += tolower(tmp[i]);
        }
        a += " ";
    }
    a.pop_back();
    return a;
}

istream& operator >> (istream& in, SinhVien &a){
    scanf("\n");
    getline(in, a.ten);
    a.ten = chuanHoa(a.ten);
    in >> a.lop >> a.ns;
    if(a.ns[1] == '/') a.ns.insert(0, "0");
    if(a.ns[4] == '/') a.ns.insert(3, "0");
    in >> a.gpa;
    a.msv = "B20DCCN" + string(3 - to_string(stt).length(), '0') + to_string(stt);
    stt++;
    return in;
}

bool cmp(SinhVien a, SinhVien b) {
    return a.getGpa() > b.getGpa();
}

void sapxep(SinhVien ds[], int n) {
    sort(ds, ds + n, cmp);
}

ostream& operator << (ostream& out, SinhVien a) {
    cout << a.msv << " ";
    cout << a.ten << " " << a.lop << " " << a.ns << " ";
    cout << fixed << setprecision(2) << a.gpa << endl;
    return out;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    SinhVien ds[50];
    int N, i;
    cin >> N;
    for(i=0;i<N;i++){
        cin >> ds[i];
    }
    sapxep(ds, N);
    for(i=0;i<N;i++){
        cout << ds[i];
    }
    return 0;
}