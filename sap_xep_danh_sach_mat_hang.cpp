#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
// by sunmin

struct goods{
    int id;
    string ten, nhom;
    double giaban, giamua, loinhuan;
};

void nhap(goods ds[50], int n){
    for(int i = 0; i < n; i++){
        ds[i].id = i + 1;
        cin.ignore();
        getline(cin, ds[i].ten);
        getline(cin, ds[i].nhom);
        cin >> ds[i].giamua >> ds[i].giaban;
        ds[i].loinhuan = ds[i].giaban - ds[i].giamua;
    }
}

bool cmp(goods a, goods b){
    return a.loinhuan > b.loinhuan;
}

void sapxep(goods ds[50], int n){
    sort(ds, ds + n, cmp);
}

void in(goods ds[50], int n){
    for(int i = 0; i < n; i++){
        cout << ds[i].id << " " << ds[i].ten << " " << ds[i].nhom << " ";
        cout << fixed << setprecision(2) << ds[i].loinhuan << endl;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    struct goods ds[50];
    nhap(ds, n);
    sapxep(ds, n);
    in(ds, n);
    return 0;
}