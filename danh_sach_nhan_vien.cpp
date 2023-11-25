#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
// by sunmin

struct NhanVien{
    int id;
    string name;
    string sex;
    string date;
    string addr;
    string tax;
    string b;
};

void nhap(NhanVien &a){
    scanf("\n");
    getline(cin, a.name);
    getline(cin, a.sex);
    getline(cin, a.date);
    getline(cin, a.addr);
    getline(cin, a.tax);
    getline(cin, a.b);
}

void inds(NhanVien a[], int n){
    for(int i = 0; i < n; i++){
        a[i].id = i + 1;
        if(i + 1 < 10)
            cout << "0000";
        else 
            cout << "000";
        cout << a[i].id << " " <<  a[i].name << " " << a[i].sex << " " << a[i].date << " " << a[i].addr << " " << a[i].tax << " " << a[i].b << endl;
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    struct NhanVien ds[50];
    int N,i;
    cin >> N;
    for(i = 0; i < N; i++) nhap(ds[i]);
    inds(ds,N);
    return 0;
}