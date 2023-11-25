#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
// by sunmin

int stt = 1;

class GiangVien{
    public:
        string mgv, name, khoa, ten;

        friend istream& operator >> (istream& is, GiangVien &a) {
            getline(is, a.name);
            getline(is, a.khoa);

            // xu li ten
            stringstream ss1(a.name);
            string tmp1;
            string res = "";
            while(ss1 >> tmp1) {
                res = tmp1;
            }
            a.ten = res;

            // xu li khoa
            stringstream ss(a.khoa);
            string tmp;
            string s = "";
            while(ss >> tmp) {
                s += toupper(tmp[0]);
            }
            a.khoa = s;
            return is;
        }

        friend ostream& operator << (ostream& os, GiangVien a) {
            cout << a.mgv << " " << a.name << " " << a.khoa << endl;
            return os;
        }

};

bool cmp(GiangVien a, GiangVien b) {
    if(a.ten != b.ten) return a.ten < b.ten;
    return a.mgv < b.mgv;
}

void sapxep(GiangVien ds[], int n) {
    sort(ds, ds + n, cmp);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int N; cin >> N;
    GiangVien ds[N];
    cin.ignore();
    for(int i = 0; i < N; i++) {
        cin >> ds[i];
        // xu li ma giang vien 
        ds[i].mgv = "GV" + to_string(i + 1);
        if(i + 1 < 10) {
            ds[i].mgv.insert(2, "0");
        } 
    }
    sapxep(ds, N);
    for(int i = 0; i < N; i++) cout << ds[i];
    return 0;
}