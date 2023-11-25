#include <bits/stdc++.h>
typedef long long ll;
typedef double db;

using namespace std;

class KhachHang {
    public:
        string maKH, tenKH, gioiTinh, ngaySinh, diaChi;
};

vector <KhachHang> Customer;

class MatHang {
    public:
        string maMH, tenMH, donVi;
        ll giaBan, giaMua; 
};

vector <MatHang> Product;

class HoaDon {
    public:
        string maHD, maKhachHang, maMatHang;
        ll soLuong;
};

vector <HoaDon> Invoice;

int main() {
    int n, m, k;
    ifstream fl1, fl2, fl3;

    // nhap thong tin khach hang
    fl1.open("KH.in");
    fl1 >> n;
    fl1.ignore();
    for(int i = 0; i < n; i++) {
        KhachHang a;
        getline(fl1, a.tenKH);
        if(a.tenKH[a.tenKH.length() - 1] == ' ') a.tenKH.pop_back();
        fl1 >> a.gioiTinh >> a.ngaySinh;
        fl1.ignore();
        getline(fl1, a.diaChi);
        // chuan hoa ma khach hang
        string s = to_string(i + 1);
        while(s.length() < 3) {
            s = "0" + s;
        }
        a.maKH = "KH" + s;
        Customer.push_back(a);
    }
    fl1.close();
    
    // nhap thong tin mat hang
    fl2.open("MH.in");
    fl2 >> m;
    for(int i = 0; i < m; i++) {
        MatHang a;
        fl2.ignore();
        string x;
        getline(fl2, x);
        a.tenMH = x;
        getline(fl2, x);
        a.donVi = x;
        ll res;
        fl2 >> res;
        a.giaMua = res;
        fl2 >> res;
        a.giaBan = res;;
        // xu li ma mat hang
        string s = to_string(i + 1);
        while(s.length() < 3) {
            s = "0" + s;
        }
        a.maMH = "MH" + s;
        Product.push_back(a);
    }
    fl2.close();

    // nhap thong tin hoa don
    fl3.open("HD.in");
    fl3 >> k;
    for(int i = 0; i < k; i++) {
        HoaDon a;
        fl3 >> a.maKhachHang >> a.maMatHang >> a.soLuong;
        // xu li ma hoa don
        string s = to_string(i + 1);
        while(s.length() < 3) {
            s = "0" + s;
        }
        a.maHD = "HD" + s;
        Invoice.push_back(a);
    }
    fl3.close();

    for(auto hd : Invoice) {
        cout << hd.maHD << " ";

        for(auto kh : Customer) {
            if(kh.maKH == hd.maKhachHang) {
                cout << kh.tenKH << " " << kh.diaChi << " ";
                break;
            }
        } 

        ll t = 0;
        for(auto mh : Product) {
            if(mh.maMH == hd.maMatHang) {
                cout << mh.tenMH << " " << mh.donVi << " " << mh.giaMua << " " << mh.giaBan << " ";
                t = mh.giaBan;
                break;
            }
        }

        cout << hd.soLuong << " " << t * hd.soLuong << endl;
    }
    return 0;
}