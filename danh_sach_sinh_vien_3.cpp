#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
// by sunmin

struct SinhVien{
    string msv, ten, lop, ns;
    float gpa;
};

bool cmp(SinhVien a, SinhVien b){
    return a.gpa > b.gpa;
}

string Chuan_hoa_ten(string name){
    string s = "";
    stringstream ss(name);
    string tmp;
    while(ss >> tmp){
        for(int i = 0; i < tmp.length(); i++){
            if(i == 0)
                s += toupper(tmp[i]);
            else
                s += tolower(tmp[i]);
        }
        s += " ";
    }
    s.erase(s.length() - 1);
    return s;
}

void nhap(SinhVien ds[50], int n){
    for(int i = 0; i < n; i++){
        ds[i].msv = "B20DCCN" + string(3 - to_string(i+1).length(), '0') + to_string(i+1);
        cin.ignore();
        getline(cin, ds[i].ten);
        ds[i].ten = Chuan_hoa_ten(ds[i].ten);
        getline(cin, ds[i].lop);
        getline(cin, ds[i].ns);
        if(ds[i].ns[1] == '/')
            ds[i].ns.insert(0, "0");
        if(ds[i].ns[4] == '/')
            ds[i].ns.insert(3, "0");
        cin >> ds[i].gpa;
    }
}

void sapxep(SinhVien ds[50], int n){
    sort(ds, ds + n, cmp);
}

void in(SinhVien ds[50], int n){
    for(int i = 0; i < n; i++){
        cout << ds[i].msv << " ";
        cout << ds[i].ten << " " << ds[i].lop << " " << ds[i].ns << " ";
        cout << fixed << setprecision(2) << ds[i].gpa << endl;
    }
}

int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    sapxep(ds,N);
    in(ds, N);
    return 0;
}