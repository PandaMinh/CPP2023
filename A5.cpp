#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
#define PI 3.141592653589793238
// by sunmin

class CauTruc{
    private:
        struct Infor{
            string name;
            float age;
        };
        struct Infor ds[50];
    public:
        void nhap(){}
        void solve(){}
        void xuat(){}

        string NgaySinh(string ns){
            if(ns[1] == '/')
                ns.insert(0, "0");
            if(ns[4] == '/')
                ns.insert(3, "0");
            return ns;
        }
        string ChuanHoaTen(string s){
            string res = "";
            stringstream ss(s);
            string tmp;
            while(ss >> tmp){
                res += toupper(tmp[0]);
                for(int i = 1; i < tmp.length(); i++) {
                    res += tolower(tmp[i]);
                }
                res += " ";
            }
            res.erase(res.length() - 1);
            return res;
        }
};

class CauTrucSinhVien: CauTruc{
    private:
        struct SinhVien{
            string msv, ten, lop, ns;
            float gpa;
        };
        SinhVien a;
    public:
        void nhap(){
            getline(cin, a.ten);
            a.ten = ChuanHoaTen(a.ten);
            getline(cin, a.lop);
            getline(cin, a.ns);
            a.ns = NgaySinh(a.ns);
            cin >> a.gpa;
        }
        void xuat(){
            cout << "B20DCCN001" << " ";
            cout << a.ten << " " << a.lop << " " << a.ns << " ";
            cout << fixed << setprecision(2) << a.gpa << endl;
        }
};

class CauTrucThiSinh: CauTruc{
    private:
        struct ThiSinh{
            string name;
            string date;
            float a;
            float b;
            float c;
        };
        struct ThiSinh A;
    public:
        void nhap(){
            getline(cin, A.name);
            getline(cin, A.date);
            cin >> A.a >> A.b >> A.c;
        }
        void xuat(){
            cout << A.name << " ";
            cout << A.date << " ";
            cout << fixed << setprecision(1) << A.a + A.b + A.c << endl;
        }
};

class BangDiemThanhPhan1: CauTruc{
    protected:
        struct SinhVien{
            string msv, name, lop;
            float a, b, c;
        };
        struct SinhVien a[50];
        int n;
    public:
        void nhap(){
            cin >> n;
            for(int i = 0; i < n; i++){\
                scanf("\n");
                cin >> a[i].msv;
                scanf("\n");
                getline(cin, a[i].name);
                cin >> a[i].lop >> a[i].a >> a[i].b >> a[i].c;
            }
        }
        bool cmp(SinhVien a, SinhVien b){
            return a.msv < b.msv;
        }
        void in(){
            sort(a, a + n, cmp);
            for(int i = 0; i < n; i++){
                cout << i + 1 << " ";
                cout << a[i].msv << " " << a[i].name << " ";
                cout << a[i].lop << " ";
                cout << fixed << setprecision(1) << a[i].a << " " << a[i].b << " " << a[i].c << endl;
            }
        }
};

class BangDiemThanhPhan2: BangDiemThanhPhan1{
    public:
        bool cmp(SinhVien a, SinhVien b){
            return a.name < b.name;
        }
};

class CauTrucNhanVien: CauTruc{
    private:
        struct NhanVien{
            string name;
            string sex;
            string date;
            string addr;
            string tax;
            string b;
        };
        struct NhanVien a;
    public:
        void nhap(){
            getline(cin, a.name);
            getline(cin, a.sex);
            getline(cin, a.date);
            getline(cin, a.addr);
            getline(cin, a.tax);
            getline(cin, a.b);
        }
        void xuat(){
            cout << "00001" << " " << a.name << " " << a.sex << " " << a.date << " " << a.addr << " " << a.tax << " " << a.b;
        }
};

class DanhSachNhanVien: CauTruc{
    private:
        struct NhanVien{
            int id;
            string name;
            string sex;
            string date;
            string addr;
            string tax;
            string b;
        };
        struct NhanVien a[50];
        int n;
    public:
        void nhap(){
            cin >> n;
            for(int i = 0; i < n; i++){
                scanf("\n");
                getline(cin, a[i].name);
                getline(cin, a[i].sex);
                getline(cin, a[i].date);
                getline(cin, a[i].addr);
                getline(cin, a[i].tax);
                getline(cin, a[i].b);
            }
        }
        void in(){
            for(int i = 0; i < n; i++){
                a[i].id = i + 1;
                if(i + 1 < 10)
                    cout << "0000";
                else 
                    cout << "000";
                cout << a[i].id << " " <<  a[i].name << " " << a[i].sex << " " << a[i].date << " " << a[i].addr << " " << a[i].tax << " " << a[i].b << endl;
            }
        }
};

class SapXepDanhSachNhanVien: CauTruc{
    private:
        struct NhanVien {
            string mnv, name, sex, ns, dc, mst, date;
            int ngay, thang, nam;
        };  
        struct NhanVien a[50];
        int n;
    public:
        void nhap(){
            cin >> n;
            for(int i = 0; i < n; i++){
                if(i == 0) cin.ignore();
                getline(cin, a[i].name);
                getline(cin, a[i].sex);
                getline(cin, a[i].ns);
                a[i].ngay = stoi(a[i].ns.substr(3, 2));
                a[i].thang = stoi(a[i].ns.substr(0, 2));
                a[i].nam = stoi(a[i].ns.substr(6, 4));
                getline(cin, a[i].dc);
                getline(cin, a[i].mst);
                getline(cin, a[i].date);
                a[i].mnv = to_string(i + 1);
                a[i].mnv.insert(0, 5 - a[i].mnv.length(), '0');
            }
        }
        bool cmp(NhanVien a, NhanVien b) {
            if(a.nam != b.nam) return a.nam < b.nam;
            if(a.nam == b.nam && a.thang != b.thang) return a.thang < b.thang;
            return a.ngay < b.ngay;
        }
        void xuat(){
            sort(a, a + n, cmp);
            for(int i = 0; i < N; i++) {
                cout << a[i].mnv << ' ';
                cout << a[i].name << " " << a[i].sex << ' ' << a[i].ns << ' ' << a[i].dc << ' ' << a[i].mst << ' ' << a[i].date << endl;
            }
        }
};

class SapXepDanhSachMatHang: CauTruc{
    private:
        struct goods{
            int id;
            string ten, nhom;
            double giaban, giamua, loinhuan;
        }; 
        struct goods ds[50];
        int n;
    public:
        void nhap(){
            cin >> n;
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
        void xuat(){
            sort(ds, ds + n, cmp);
            for(int i = 0; i < n; i++){
                cout << ds[i].id << " " << ds[i].ten << " " << ds[i].nhom << " ";
                cout << fixed << setprecision(2) << ds[i].loinhuan << endl;
            }
        }
};

class CauTrucDiem: CauTruc{
    private:
        struct Point{
            double x, y;
        };
        struct Point A, B;
    public:
        void nhap(){
            cin >> A.x >> A.y;
            cin >> B.x >> B.y;
        }
        double xuat(){
            return sqrt((A.x - B.x) * (A.x - B.x) + (A.y - B.y) * (A.y - B.y));
        }
};

class CauTrucPhanSo: CauTruc{
    private:
        struct PhanSo{
            ll a, b;
        };
        struct PhanSo p;
    public:
        void nhap(){
            cin >> p.a >> p.b;
        }
        void solve(){
            ll tmp = __gcd(p.a, p.b);
            p.a /= tmp;
            p.b /= tmp;
        }
        void xuat(){
            cout << p.a << "/" << p.b;
        }
};  

class TinhTongHaiPhanSo: CauTruc{
    private:
        struct PhanSo{
            ll a, b;
        };
        struct PhanSo p, q, ans;
    public:
        void nhap(){
            cin >> p.a >> p.b >> q.a >> q.b;
        }
        void solve(){
            ans.a = p.a * q.b + p.b * q.a;
            ans.b = p.b * q.b;
            ll tmp = __gcd(ans.a, ans.b);
            ans.a /= tmp;
            ans.b /= tmp;
        }
        void xuat(){
            cout << ans.a << "/" << ans.b;
        }
};

class PhepToanVoiPhanSo: CauTruc{
    private:
        struct PhanSo{
            ll tu, mau;
        };
        PhanSo a, b;
    public:
        void nhap(){
            cin >> a.tu >> a.mau >> b.tu >> b.mau; 
        }
        PhanSo sum(PhanSo a, PhanSo b){
            PhanSo c;
            c.tu = a.tu * b.mau + a.mau * b.tu;
            c.mau = a.mau * b.mau;
            ll x = __gcd(c.tu, c.mau);
            c.tu /= x;
            c.mau /= x;
            c.tu = c.tu * c.tu;
            c.mau = c.mau * c.mau;
            return c;
        }
        PhanSo tich(PhanSo a, PhanSo b, PhanSo c){
            PhanSo d;
            d.tu = a.tu * b.tu * c.tu;
            d.mau = a.mau * b.mau * c.mau;
            ll x = __gcd(d.tu, d.mau);
            d.tu /= x;
            d.mau /= x;
            return d;
        }
        void xuat(){
            PhanSo c = sum(a, b);
            cout << c.tu << "/" << c.mau << " ";
            PhanSo d = tich(a, b, c);
            cout << d.tu << "/" << d.mau << endl;
        }
};

class DanhSachSinhVien1: CauTruc{
    protected:
        struct SinhVien{
            string msv, ten, lop, ns;
            float gpa;
        };
        struct SinhVien ds[50];
        int n;
    public:
        void nhap(){
            cin >> n;
            for(int i = 0; i < n; i++){
                cin.ignore();
                getline(cin, ds[i].ten);
                ds[i].ten = ChuanHoaTen(ds[i].ten);
                getline(cin, ds[i].lop);
                getline(cin, ds[i].ns);
                ds[i].ns = NgaySinh(ds[i].ns);
                cin >> ds[i].gpa;
            }
        }
        void xuat(){
            for(int i = 0; i < n; i++){
                cout << "B20DCCN" + string(3 - to_string(i + 1).length(), '0') + to_string(i + 1);
                cout << ds[i].ten << " " << ds[i].lop << " " << ds[i].ns << " ";
                cout << fixed << setprecision(2) << ds[i].gpa << endl;
            }
        }   
};

class DanhSachSinhVien2: DanhSachSinhVien1{

};

class DanhSachSinhVien3: CauTruc{
    private:
        struct SinhVien{
            string msv, ten, lop, ns;
            float gpa;
        };
        struct SinhVien ds[50];
        int n;
    public:
        bool cmp(SinhVien a, SinhVien b){
            return a.gpa > b.gpa;
        }
        void nhap(){
            cin >> n;
            for(int i = 0; i < n; i++){
                ds[i].msv = "B20DCCN" + string(3 - to_string(i+1).length(), '0') + to_string(i+1);
                cin.ignore();
                getline(cin, ds[i].ten);
                ds[i].ten = ChuanHoaTen(ds[i].ten);
                getline(cin, ds[i].lop);
                getline(cin, ds[i].ns);
                ds[i].ns = NgaySinh(ds[i].ns);
                cin >> ds[i].gpa;
            }
        }
        void in(){
            void sapxep(SinhVien ds[50], int n){
                sort(ds, ds + n, cmp);
            }
            for(int i = 0; i < n; i++){
                cout << ds[i].msv << " ";
                cout << ds[i].ten << " " << ds[i].lop << " " << ds[i].ns << " ";
                cout << fixed << setprecision(2) << ds[i].gpa << endl;
            }
        }
};

class DanhSachThucTap1: CauTruc{
    protected:
        struct SinhVien{
            int id;
            string msv, ten, lop, email, dn;
        };
        vector <SinhVien> vt;
        int n;
    public:
        void nhapp(SinhVien &a) {
            cin.ignore();
            getline(cin, a.msv);
            getline(cin, a.ten);
            getline(cin, a.lop);
            getline(cin, a.email);
            cin >> a.dn;
        }
        bool cmp(SinhVien a, SinhVien b) {
            return a.ten < b.ten;
        }
        void nhap(){
            cin >> n;
            for(int i = 0; i < n; i++){
                SinhVien a;
                nhapp(a);
                a.id = i + 1;
                vt.push_back(a);
            }
        }
        void in(SinhVien a){
            cout << a.id << " " << a.msv << " ";
            cout << a.ten << " " << a.lop << " " << a.email << " " << a.dn << endl;
        }
        void xuat(){
            sort(vt.begin(), vt.end(), cmp);
            int q; cin >> q;
            while(q--) {
                string s; cin >> s;
                for(auto x : vt) {
                    if(x.dn == s) {
                        in(x);
                    }
                }
            }
        }
};

class DanhSachThucTap2: DanhSachThucTap1{
    public:
        bool cmp(SinhVien a, SinhVien b){
            return a.msv < b.msv;
        }
};

class TreNhatGiaNhat: CauTruc{
    private:
        struct infor{
            string name, ns;
            int day, month, year;
        };
        struct infor ds[50];
        int n;
    public:
        void ns(infor &a){
            a.day = (a.ns[1] - '0') + (a.ns[0] - '0') * 10;
            a.month = (a.ns[3] - '0') * 10 + (a.ns[4] - '0');
            a.year = (a.ns[6] - '0') * 1000 + (a.ns[7] - '0') * 100 + (a.ns[8] - '0') * 10 + (a.ns[9] - '0');
        }
        void nhap(){
            cin >> n;
            for(int i = 0; i < n; i++){
                cin >> ds[i].name;
                cin >> ds[i].ns;
                ns(ds[i]);
            }   
        }
        bool cmp(infor a, infor b){
            if(a.year != b.year)
                return a.year < b.year;
            else{
                if(a.month != b.month)
                    return a.month < b.month;
            }
            return a.day < b.day;
        }
        void solve(){
            sort(ds, ds + n, cmp);
        }
        void xuat(){
            cout << ds[n - 1].name << endl;
            cout << ds[0].name << endl;
        }
};

class SapXepThoiGian: CauTruc{
    private:
        struct Time{
            int gio, phut, giay;
        };
        struct Time tm[1000];
        int n;
    public:
        void nhap(){
            cin >> n;
            for(int i = 0; i < n; i++){
                cin >> tm[i].gio >> tm[i].phut >> tm[i].giay;
            }
        }
        bool cmp(Time a, Time b){
            if(a.gio != b.gio) {
                return a.gio < b.gio;
            }
            if(a.phut != b.phut){
                return a.phut < b.phut;
            }
            return a.giay < b.giay;
        }
        void xuat(){
            sort(tm, tm + n, cmp);
            for(int i = 0; i < n; i++) {
                cout << tm[i].gio << " " << tm[i].phut << " " << tm[i].giay << endl;
            }
        }
};

class DienTichhHinhTronTamGiac: CauTruc{
    private:
        struct Point{
            db x, y;
        };
        Point A, B, C;
    public:
        void nhap(){
            cin >> A.x >> A.y >> B.x >> B.y >> C.x >> C.y;
        }

        db Tinh_Canh(Point a, Point b) {
            return sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2));
        }

        bool checkTamGiac(db a, db b, db c) {
            return (a + b > c && a + c > b && b + c > a);
        }

        db Superficies(db a, db b, db c) {
            db s = 1.0 * sqrt((a + b + c) * (a + b - c) * (b + c - a) * (c + a - b))/4;
            db r = (a * b * c)/(4.0 * s);
            return PI * pow(r, 2);
        }
        void xuat(){
            db a = Tinh_Canh(B, C);
            db b = Tinh_Canh(A, C);
            db c = Tinh_Canh(A, B);
            if(checkTamGiac(a, b, c))
                cout << fixed << setprecision(3) << Superficies(a, b, c) << endl;
            else
                cout << "INVALID" << endl;
        }
};

// class NhanVien: public SinhVien{
//     public:
//         string gt, dc, mst, nkhd;
//     public:
//         friend istream& operator >> (istream& in, NhanVien &a){
//             getline(in, a.name);
//             in >> a.gt >> a.ns;
//             in.ignore();
//             getline(in, a.dc);
//             in >> a.mst >> a.nkhd;
//             return in;
//         }
//         friend ostream& operator << (ostream& out, NhanVien a){
//             cout << "00001 ";
//             cout << a.name << " " << a.gt << " " << a.ns << " " << a.dc << " " << a.mst << " " << a.nkhd << endl;
//             return out;
//         }
// };

// class PhanSo: public CauTruc{
//     public:
//         ll tu, mau;
//     public:
//         //PhanSo();
//         PhanSo(ll a, ll b){
//             this->tu = a;
//             this->mau = b;
//         }
//         friend istream& operator >> (istream& in, PhanSo &a){
//             in >> a.tu >> a.mau;
//             return in;
//         }
//         friend ostream& operator << (ostream& out, PhanSo a){
//             cout << a.tu << "/" << a.mau;
//             return out;
//         }
//         void rutgon(){
//             ll x = __gcd(this->tu, this->mau);
//             this->tu /= x;
//             this->mau /= x;
//         }
//         friend PhanSo operator + (PhanSo a, PhanSo b){
// 			ll mc = a.mau/__gcd(a.mau,b.mau)*b.mau;
// 			PhanSo tong(1, 1);
// 			tong.tu = mc / a.mau * a.tu + mc / b.mau * b.tu;
// 			tong.mau = mc;
// 			ll g = __gcd(tong.tu, tong.mau);
// 			tong.tu /= g;
// 			tong.mau /= g;
// 			return tong;
// 		}
// };

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    CauTrucDiem m;
    m.nhap();
    m.xuat();
	return 0;
}
