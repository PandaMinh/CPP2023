#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
// by sunmin

int hd = 1, kh = 1, mh = 1;
map<int, string> mp1, mp2;
map<int, int> gi_mua, gi_ban;

class KhachHang{
    public:
        string ma_kh, ten_kh, gt, ng_sinh, d_chi;
        friend istream &operator >> (istream &in, KhachHang &a){
            scanf(" ");
            getline(in,a.ten_kh);
            in >> a.gt >> a.ng_sinh;
            scanf(" ");
            getline(in,a.d_chi);
            mp1[kh] = a.ten_kh + " " + a.d_chi;
            kh++;
            return in;
        }
};

class MatHang{
    public:
        string ten_mh, d_vi;
        int g_mua, g_ban;
        friend istream &operator >> (istream &in, MatHang &a){
            scanf(" ");
            getline(in,a.ten_mh);
            in >> a.d_vi >> a.g_mua >> a.g_ban;
            mp2[mh] = a.ten_mh;
            gi_ban[mh] = a.g_ban;
            gi_mua[mh] = a.g_mua;
            mh++;
            return in;
        }
};

int to_int(string s)
{
    s = s.substr(2,4);
    int res = stoi(s);
    return res;
}

class HoaDon{
    public: 
        string ma_hd, ma_kh, ma_mh;
        int so_luong;
        friend istream &operator >> (istream &in, HoaDon &a){
            in >> a.ma_kh >> a.ma_mh >> a.so_luong;
            a.ma_hd = "HD";
            if(hd<10) a.ma_hd += "00" + to_string(hd);
            else if(hd>=10 && hd<100) a.ma_hd += "0" + to_string(hd);
            else if(hd>=100) a.ma_hd += to_string(hd);
            hd++;
            return in;
        }

        friend ostream &operator << (ostream &out, HoaDon a){
            int thanh_tien = gi_ban[to_int(a.ma_mh)]*a.so_luong;
            int loi_nhuan = thanh_tien - gi_mua[to_int(a.ma_mh)]*a.so_luong;
            out << a.ma_hd << " " << mp1[to_int(a.ma_kh)] << " " << mp2[to_int(a.ma_mh)]
                << " " << a.so_luong << " " << thanh_tien << " " << loi_nhuan << endl;
            return out;
        }
};

bool Dieu_kien(HoaDon a, HoaDon b)
{
    int thanh_tien1 = gi_ban[to_int(a.ma_mh)]*a.so_luong;
    int loi_nhuan1 = thanh_tien1 - gi_mua[to_int(a.ma_mh)]*a.so_luong;
    int thanh_tien2 = gi_ban[to_int(b.ma_mh)]*b.so_luong;
    int loi_nhuan2 = thanh_tien2 - gi_mua[to_int(b.ma_mh)]*b.so_luong;
    if (loi_nhuan1 == loi_nhuan2) return a.ma_hd < b.ma_hd;
    return loi_nhuan1 > loi_nhuan2;

}

void sapxep(HoaDon a[], int k){
    sort(a,a+k,Dieu_kien);
}

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

    sapxep(dshd, K);

    for(i=0;i<K;i++) cout << dshd[i];
    return 0;
}