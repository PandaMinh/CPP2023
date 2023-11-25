#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
// by sunmin

class INT{
    protected:
        ll n, a, b;
        map <int, int> mp;
    public:
        void nhap(){
            cin >> n;
        }

        int ThuanNghich(ll n){
            int a[20] = {};
            int m = 0;
            while(n > 0){
                a[m++] = n % 10;
                n /= 10;
            }
            for(int i = 0; i < m; i++){
                if(a[i] != a[m - i - 1]) return 0;
            }
            return 1;
        }

        int TongChuSo(int n){
            int s = 0;
            while(n != 0) {
                s += n % 10;
                n /= 10;
            }
            return s;
        }

        int CanBangChanLe(ll n){
            int chan = 0, le = 0;
            while(n > 0){
                if((n % 10) % 2 == 0)
                    chan++;
                else 
                    le++;
                n /= 10;
            }
            if(chan == le) 
                return 1;
            return 0;
        }

        void PhanTichNguyenTo(ll n){
            for(int i = 2; i <= sqrt(n); i++){
                if(n % i == 0){
                    while(n % i == 0){
                        mp[i]++;
                        n = n / i;
                    }
                }
            }
            if(n > 1) 
                mp[n] = 1;
        }

        ll ucln(ll a, ll b){
            return __gcd(a, b);
        }

        ll bcnn(ll a, ll b){
            return a * b / __gcd(a, b);
        }

        int ngto(ll n){
            if(n < 2)
                return 0;
            else{
                for(ll i = 2; i <= sqrt(n); i++){
                    if(n % i == 0)
                        return 0;
                }
            }
            return 1;
        }
        // tối ưu
        int nto(ll n){
            if(n < 2) return 0;
            if(n < 4) return 1;
            if(n % 2 == 0 || n % 3 == 0) return 0;
            for(ll i = 5; i <= sqrt(n); i += 6) {
                if(n % i == 0 || n % (i + 2) == 0) return 0;
            }  
            return 1;
        }
        // sàng nguyên tố
        void era(){
            int a[10005] = {};
            a[0] = 1;
            a[1] = 1;
            for(int i = 2; i <= 10005; i++){
                if(a[i] == 0)
                    for(int j = i * i; j <= 10005; j += i){
                        a[j] = 1;
                    }
            }
        }

        int Tang(int n){
            int tmp = n % 10;
            n /= 10;
            while(n > 0){
                if(tmp <= n % 10)
                    return 0;
                tmp = n % 10;
                n /= 10;
            }
            return 1;
        }

        int Giam(int n){
            int tmp = n % 10;
            n /= 10;
            while(n > 0){
                if(tmp >= n % 10)
                    return 0;
                tmp = n % 10;
                n /= 10;
            }
            return 1;
        }

        void DayFibo(){
            ll a[95] = {};
            a[1] = 1;
            a[2] = 1;
            for(int i = 3; i <= 92; i++){
                a[i] = a[i - 1] + a[i - 2];
            }
        }

        void solve(){

        }
        void xuat(){

        }
};

class SoLocPhat: public INT{
    public:
    int l = 1;
    void solve(){
        while(n > 0){
            if(n % 10 != 0 && n % 10 != 6 && n % 10 != 8){
                l = 0;
                break;
            }
            n /= 10;
        }
    }
    void xuat(){
        if(l)
            cout << "YES" << endl;
        else 
            cout << "NO" << endl;
    }
};

class SoThuanNghich: public INT{
    public:
        void xuat(){
            if(ThuanNghich(n))
                cout << "YES" << endl;
            else 
                cout << "NO" << endl;
        }
};

class CanBangChan_Le: public INT{
    public:
        void xuat(){
            int m = 1;
            for(ll i = pow(10, n - 1); i <= pow(10, n) - 1;i++){
                if(CanBangChanLe(i) == 1 && m <= 9){
                    cout << i << ' ';
                    m++;
                }
                else if(CanBangChanLe(i) == 1 && m == 10){
                    cout << i << endl;
                    m = 1;
                }
            }
        }
};

class MaSoQuocGia: public INT{
public:
    char s[20] = {};    
    void nhap(){
        cin.ignore();
        cin >> s;
    }
    void xuat(){
        int i = 0;
        while(i < strlen(s)){
            if(s[i] == '0' && s[i+1] == '8' && s[i+2] == '4' && i < strlen(s) - 2){
                i += 3;
            }
            else{
                cout << s[i];
                i++;
            }
        }
        cout << endl;
    }
};

class SoLienKe: public MaSoQuocGia {
public:
    void xuat(){
        int l = 1;
        for(int i = 0; i < strlen(s) - 1; i++){
            if(abs(s[i] - s[i+1]) != 1){
                l = 0;
                break;
            }
        }
        if(l) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
};

class SoMayMan: public MaSoQuocGia{
public:
    void xuat(){
        if(s[strlen(s) - 1] == '6' && s[strlen(s) - 2] == '8')
            cout << "1" << endl;
        else 
            cout << "0" << endl;
    }
};

class KhoangCach: public INT{
public:
    double Xa, Ya, Xb, Yb;
    void nhap(){
        cin >> Xa >> Ya >> Xb >> Yb;
    }
    void xuat(){
        cout << fixed << setprecision(4) << sqrt((Xa - Xb) * (Xa - Xb) + (Ya - Yb) * (Ya - Yb));
    }
};

class PhanTichThuaSoNguyenTo: public INT{
    public:
        void xuat(){
            PhanTichNguyenTo(n);
            for(auto x : mp){
                cout << x.first << " " << x.second << " ";
            }
            cout << endl;
        }
};

class SoSphenic: public INT{
    public:
        void xuat(){
            PhanTichNguyenTo(n);
            int l = 1;
            for(auto x : mp){
                if(x.second > 1){
                    l = 0;
                    break;
                }
                //cout << x.first << " " << x.second << " ";
            }
            if(mp.size() != 3) l = 0;
            if(l == 0)  cout << "0";
            else cout << "1";
            cout << endl;
        }
};

class SoSmith: public INT{
    public:
        void xuat(){
            if(nto(n))
                cout << "NO" << endl;
            else{
                int s = TongChuSo(n);
                int sum = 0;
                PhanTichNguyenTo(n);
                for(auto x : mp){
                    //cout << x.first << " " << x.second << endl;
                    sum += TongChuSo(x.first) * x.second;
                }
                //cout << sum << " " << s;
                if(sum == s) 
                    cout << "YES" << endl;
                else
                     cout << "NO" << endl;
            }
        }
};

class SoHoanHao: public INT{
    public:
        void xuat(){
            vector <ll> vt = {6, 28, 496, 8128};
            vt.push_back(pow(2, 12)*(pow(2, 13) - 1));
            vt.push_back(pow(2, 16)*(pow(2, 17) - 1));
            vt.push_back(pow(2, 18)*(pow(2, 19) - 1));
            bool check = false;
            for(auto x : vt){
                if(x == n){
                    check = true;
                    break;
                }
            }
            cout << check << endl;
        }
};

class TinhTongChuSo: public INT{
    public:
        int Solve(int n){
            int tmp = 0;
            if(n == 10) return 1;
            else if(n > 9){
                while(n > 0){
                    tmp += n % 10;
                    n = n / 10;
                }
            }
            else return n;
            return Solve(tmp);
        }
        void xuat(){
            cout << Solve(n) << endl;
        }
};

class BCNNcuaNSo: public INT{
    public:
        void xuat(){
            ll ans = 1;
            for(int i = 2; i <= n; i++){
                ans = bcnn(ans, i);
            }
            cout << ans << endl;
        }
};

class CapSoNguyenToDauTienCoTongN: public INT{
    public:
        void xuat(){
            int l = 0;
            for(int i = 2; i <= n / 2; i++){
                if(ngto(i) == 1 && ngto(n - i) == 1){
                    cout << i << " " << n - i << endl;
                    l = 1;
                    break;
                }
            }
            if(l == 0) cout << "-1" << endl;
        }
};

class ChiaDu1DenN: public INT{
    public:
        ll k;
        void nhap(){
            cin >> n >> k;
        }
        void xuat(){
            cout << ((k - 1) * k / 2) * (n / k) + (n % k) * (n % k + 1) / 2 << endl;
        }
};
// (a * x) % m == 1
class ChiaDu: public INT{
    public: 
        ll a, m;
        void nhap(){
            cin >> a >> m;
        }
        void xuat(){
            int l = 0;
            for(ll i = 1; i < m; i++){
                if((a * i) % m == 1){
                    cout << i << endl;
                    l = 1;
                    break;
                }
            }
        if(l == 0) cout << "-1" << endl;
        }
};
//vừa tăng giảm vừa nguyên tố
class SoTangGiam: public INT{
    public:
        int cnt = 0;
        void solve(){
            for(int i = pow(10, n - 1); i < pow(10, n) - 1; i++){
                if((Tang(i) == 1 || Giam(i) == 1)){
                    if(ngto(i) == 1)
                        cnt++;
                }
            }
        }
        void xuat(){
            cout << cnt << endl;
        }
};

class NguyenToCungNhau: public INT{
    public:
        int cnt = 0;
        void solve(){
            for(int i = 1; i <= n; i++){
                if(ucln(i, n) == 1){
                    cnt++;
                }
            }
        }
        void xuat(){
            cout << ngto(cnt) << endl;
        }
};

class ChiaHetChoBaSoNguye: public INT{
    public:
        ll x, y, z, c, d, l, r, s;
        void nhap(){
            cin >> x >> y >> z >> n;
        }
        void solve(){
            ll c = x*y/__gcd(x, y);
            ll d = c*z/__gcd(c, z);
            ll l = pow(10, n - 1);
            ll r = pow(10, n) - 1;
            ll s = ceil(1.0 * l/d);
        }
        void xuat(){
            if(d*s <= r){
                cout << d*s << endl;
            } 
            else cout << "-1" << endl;
        }
};

class SoLapLai: public INT{
    public:
        ll a, x, y;
        void nhap(){
            cin >> a >> x >> y;
        }
        void xuat(){
            ll s = __gcd(x, y);
            while(s--) {
                cout << a;
            }
            cout << endl;
        }
};                                                      
// N! % (p ^ cnt) == 0
class UocSoGiaiThua: public INT{
public:
    int p;
    void nhap(){
        cin >> n >> p;
    }
    int cnt = 0;
    void solve(){
        for(int i = 1; i <= n; i++) {
            int a = i;
            while(a % p == 0) {
                cnt++;
                a /= p;
            }
        }
    }
    void xuat(){
        cout << cnt << endl;
    }
};
// x^2 % p == 1 ( x <= b)
class DemSoNghiemCuaPhuowngTrinhDongDu: public INT{
    public:
        ll b, p, ans = 0;
        void nhap(){
            cin >> b >> p;
        }
        void solve(){
            for(ll i = 1; i <= p; i++){
                if(i*i % p == 1){
                    ll c = i + p * ( b / p);
                    if(c > b){
                        c -= p;
                    }
                    ans += (c - i) / p + 1;
                }
            }
        }
        void xuat(){
            cout << ans << endl;
        }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        SoSmith m;
        m.nhap();
        m.solve();
        m.xuat();
    }
    return 0;
}