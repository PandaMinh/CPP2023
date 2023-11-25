#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
// by sunmin

int sttkh = 1;
class KhachHang {
    public:
    string maKH, tenKH, gioiTinh, ngaySinh, diaChi;
    friend istream& operator >> (istream& is, KhachHang &a);
};
vector <KhachHang> custormer;
istream& operator >> (istream& is, KhachHang &a) {
        scanf("\n");
        getline(is, a.tenKH);
        is >> a.gioiTinh >> a.ngaySinh;
        is.ignore();
        getline(is, a.diaChi);
        // ma khach hang
        string s = to_string(sttkh++);
        while(s.length() < 3) {
            s = "0" + s;
        }
        s = "KH" + s;
        a.maKH = s;
        custormer.push_back(a);
        return is;
}

int sttmh = 1;
class MatHang {
    public:
    string maMH, tenMH, donVi;
    int giaMua, giaBan;
    friend istream& operator >> (istream& is, MatHang &a);
};
vector <MatHang> Product;
istream& operator >> (istream& is, MatHang &a) {
        scanf("\n");
        getline(is, a.tenMH);
        getline(is, a.donVi);
        is >> a.giaMua >> a.giaBan;
        // xu li ma mat hang
        string s = to_string(sttmh++);
        while(s.length() < 3) {
            s = "0" + s;
        }
        s = "MH" + s;
        a.maMH = s;
        Product.push_back(a);
        return is;
}

int stthd = 1;
class HoaDon {
    public:
    string maHoaDon, maKhachHang, maMatHang; 
    int soLuong;
    friend istream& operator >> (istream& is, HoaDon &a) {
        is >> a.maKhachHang >> a.maMatHang >> a.soLuong;
        // xu li ma hoa don
        string s = to_string(stthd++);
        while(s.length() < 3) {
            s = "0" + s;
        }
        s = "HD" + s;
        a.maHoaDon = s;
        return is;
    }
    friend ostream& operator << (ostream& os, HoaDon a) {
        os << a.maHoaDon << " ";
        for(auto x : custormer) {
            if(x.maKH == a.maKhachHang) {
                os << x.tenKH << " " << x.diaChi << " ";
                break;
            }
        }   
        ll res = 0;
        for(auto x : Product) {
            if(x.maMH == a.maMatHang) {
                os << x.tenMH << " " << x.donVi << " " << x.giaMua << " " << x.giaBan << " ";
                res = x.giaBan;
                break;
            }
        }
        os << a.soLuong << " " << a.soLuong*res << endl;

        return os;
    }
};

int main(){
    KhachHang dskh[25];
    MatHang dsmh[45];
    HoaDon dshd[105];
    int N,M,K,i;
    cin >> N;
    for(i=0;i<N;i++) cin >> dskh[i];
    cin >> M;
    for(i=0;i<M;i++) cin >> dsmh[i];
    cin >> K;
    for(i=0;i<K;i++) cin >> dshd[i];
    
    for(i=0;i<K;i++) cout << dshd[i];
    return 0;
}