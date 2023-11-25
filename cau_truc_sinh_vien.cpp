#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
// by sunmin

struct SinhVien{
    string name;
    string clroom;
    string date;
    float gpa;
};

void nhap(SinhVien &a){
    getline(cin, a.name);
    getline(cin, a.clroom);
    getline(cin, a.date);
    cin >> a.gpa;
}

void in(SinhVien a){
    cout << "B20DCCN001" << " " << a.name << " " << a.clroom << " ";
    int n = a.date.length();
    if(a.date[1] == '/'){
        cout << "0" << a.date[0] << "/";
        n = 2;
    }
    else{
        cout << a.date[0] << a.date[1] << "/";
        n = 3;
    }
    if(a.date[n+2] == '/'){
        cout << a.date[n] << a.date[n+1] << "/";
        n = n + 3;
    }
    else{
        cout << "0";
        cout << a.date[n] << "/";
        n = n + 2;
    }
    for(int i = 0; i < 4 - a.date.length() + n; i++){
        cout << "0";
    }
    for(int i = n; i < a.date.length(); i++){
        cout << a.date[i];
    }
    cout << " ";
    cout << fixed << setprecision(2) << a.gpa << endl;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    struct SinhVien a;
    nhap(a);
    in(a);
    return 0;
}