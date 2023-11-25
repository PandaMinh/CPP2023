#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
const ll e = 1e9 + 7;
// by sunmin

class MangSo{
    public:
        int a[100005] = {};
        int b[100005] = {};
        int n;
        map <int, int> mp;
        multimap <int, int> mapp;// mpp.insert({abs(a - x), a});
    public:
        void nhap(){
            cin >> n;
            for(int i = 0; i < n; i++){
                cin >> a[i];
                mp[a[i]]++;
            }
        }

        int TongTrongKhoang(int a[], int l, int r){
            int sum = 0;
            for(int i = l; i <= r; i++){
                sum += a[i];
            }
            return sum;
        }

        void PrefixSum(){
            for(int i = 0; i < n; i++){
                b[i] = b[i - 1] + a[i];
            }
        }

        void solve(){

        }
        
        void xuat(){
            for(int i = 0; i < n; i++){
                cout << a[i] << " ";
            }
            cout << endl;
        }
};

class SapXep: public MangSo{
    private:
        int n;
        int a[1000005] = {};
    public:
        void nhap(){
            cin >> n;
            for(int i = 0; i < n; i++){
                cin >> a[i];
            }
        }
        void solve(){
            sort(a, a + n);
        }
        void xuat(){
            for(int i = 0; i < n; i++){
                cout << a[i] << " ";
            }
            cout << endl;
        }
};

class SapXepChuSo: public MangSo{
    private:
        int n;
        string s;
        set <int> st;
    public:
        void nhap(){
            cin >> n;
            cin.ignore();
            getline(cin, s);
        }
        void solve(){
            for(int i = 0; i < s.length(); i++){
                if(s[i] != ' ')
                    st.insert(int(s[i] - '0'));
            }
        }
        void xuat(){
            for(auto x : st){
                cout << x << " ";
            }
            cout << endl;
        }
};

class ChenhLechNhoNhat: public MangSo{
    public:
        int ans = 1e9;
        void solve(){
            sort(a, a+n);
            for(int i = 0; i < n - 1; i++){
                ans = min(ans, abs(a[i] - a[i+1]));
            } 
        }
        void xuat(){
            cout << ans << endl;
        }
};

class SoNhoNhatChuaXuatHien: public MangSo{
    public:
        int m = 0;
        void nhap(){
            cin >> n;
            for(int i = 0; i < n; i++){
                int x;
                cin >> x;
                if(x > 0)
                    a[m++] = x;
            }
        }
        void xuat(){
            sort(a, a + m);
            if(a[0] > 1 || m == 0)
                cout << "1";
            else{
                int l = 0;
                for(int i = 1; i < m; i++){
                    if(a[i-1] + 1 < a[i]){
                        l = 1;
                        cout << a[i-1] + 1;
                        break;
                    }
                }
                if(l == 0)
                    cout << a[m-1] + 1;
            }
            cout << endl;
        }
};

class PhanTuMaxMin: public MangSo{
    public:
        void xuat(){
            sort(a, a+n);
            cout << a[n - 1] << " " << a[0];
        }
};

class DemSoPhanTuLapLai: public MangSo{
    public:
        void xuat(){
            int ans = 0;
            for(auto x : mp){
                if(x.second > 1)
                    ans += x.second;
            }
            cout << ans << endl;
        }
};

class HieuMaxDungThuTu: public MangSo{
    public:
        void xuat(){
            int kq = -1;
            for(int i = 0; i < n - 1; i++) {
                for(int j  = i + 1; j < n; j++) {
                    if(a[j] > a[i]) {
                        kq = max(kq, a[j] - a[i]);
                    }
                }
            }
            cout << kq << endl;
        }
};

class TinhGiaTriDaThuc: public MangSo{
    public:
        ll x;
        ll sum = 0;
        ll Power(ll x, ll i){
            if(i == 0) return 1;
            if(i == 1) return x;
            if(i % 2 == 0) 
                return Power(x * x % e, i / 2) % e;
            return x * Power(x * x % e, i / 2) % e;
        }
        void nhap(){
            cin >> n >> x;
            for(ll i = 0; i < n; i++){
                ll y;
                cin >> y;
                sum += y * Power(x, n - i) % e;
                sum %= e;
            }
        }
        void xuat(){
            cout << sum << endl;
        }
};

class DayMountain: public MangSo{
    public:
        int l, r;
        string s;
        void solve(){
            cin >> l >> r;
            for(int i = l + 1; i <= r; i++){
                if(a[i - 1] < a[i])
                    s += "1";
                else if(a[i - 1] > a[i])
                    s += "0";
            }
        }
        void xuat(){
            if(s.find("01") != -1)
                cout << "No" << endl;
            else    
                cout << "Yes" << endl;
        }
};

class BienDoiDaySo: public MangSo{
    public:
        int cnt = 0;
        void solve(){
            int l = 0;
            int r = n - 1;
            while(l < r){
                if(a[l] == a[r]){
                    l++; r--;
                }
                if(a[l] < a[r]){
                    cnt++;
                    a[l + 1] += a[l];
                    l++;
                }
                if(a[l] > a[r]){
                    cnt++;
                    a[r - 1] += a[r];
                    r--; 
                }
            }
        }
        void xuat(){
            cout << cnt << endl;
        }
};

class DaySoNhiPhan: public MangSo{
    public:
        int lmax = 0;
        void nhap(){
            cin >> n;
            for(int i = 0; i < n; i++){
                cin >> a[i];
            }
            for(int i = 0; i < n; i++){
                cin >> b[i];
            }
        }
        void solve(){
            for(int i = 0; i < n; i++){
                int sum1 = 0;
                int sum2 = 0;
                int l = 0;
                for(int j = i; j < n; j++){
                    sum1 += a[j];
                    sum2 += b[j];
                    l++;
                    if(sum1 == sum2)
                        lmax = max(lmax, l);
                }
            }
        }
        void xuat(){
            cout << lmax << endl;
        }
};

class ThongKePhanTu: public MangSo{
    public:
        vector <int> vt;
        void nhap(){
            char x = ' ';
            while(x != '\n'){
                cin >> n;
                vt.push_back(n);
                a[n]++;
                x = getchar();
            }
        }
        void xuat(){
            for(int i = 0; i < vt.size(); i++){
                if(a[vt[i]]){
                    cout << vt[i] << " " << a[vt[i]] << endl;
                    a[vt[i]] = 0;
                }
            }
        }
};

class KhoangCachLonNhat: public MangSo{
    public:
        int l = 0;
        void solve(){
            for(int i = 0; i < n - l; i++) {
                for(int j = n - 1; j >= i; j--) {
                    if(a[j] >= a[i] && j - i > l) {
                        l = j - i;
                        break;
                    }
                }
            }
        }
        void xuat(){
            cout << l << endl;
        }
};

class DongDuVoiK: public MangSo{
    public:
        int cnt = 0;
        void solve(){
            sort(a, a+n);
            int d = a[n - 1] - a[0];
            vector <int> vt;
            for(int i = 1; i <= sqrt(d); i++){
                if(d % i == 0){
                    vt.push_back(i);
                    if(i != d / i)
                        vt.push_back(d / i);
                }
            }
            for(int i = 0; i < vt.size(); i++){
                int tmp = a[0] % vt[i];
                int j;
                for( j = 0; j < n; j++){
                    if(a[j] % vt[i] != tmp)
                        break;
                }
                if(j == n)
                    cnt++;
            }
            if(n == 0)
                cnt = 0;
        }
        void xuat(){
            cout << cnt << endl;
        }
};

class SapDatDaySo: public MangSo{
    public:
        int n, m;
        map <int, int> mp;
        void nhap(){
            cin >> n >> m;
            for(int i = 0; i < n; i++){
                cin >> a[i];
                mp[a[i]]++;    
            } 
            for(int i = 0; i < m; i++){
                cin >> b[i];
            }
        }
        void solve(){
            for(int i = 0; i < m; i++){
                while(mp[b[i]]--){
                    cout << b[i] << " ";
                }
                mp.erase(b[i]);
            }
        }
        void xuat(){
            for(auto x : mp){
                while(x.second--){
                    cout << x.first << " ";
                }
            }
            cout << endl;
        }
};

class TapHopNguyenToCungNhau: public MangSo{
    public:
        ll n, m;
        void nhap(){
            cin >> n >> m;
        }
        void xuat(){
            ll s1, s2;
            ll tong = n * (n + 1) / 2 + m;
            if(tong % 2 == 0){
                s1 = tong / 2;
                s2 = s1 - m;
                if(__gcd(s1, s2) == 1)
                    cout << "Yes" << endl;
                else    
                    cout << "No" << endl;
            }
            else 
                cout << "No" << endl;
        }
};

class TinhToanTrenDaySo: public MangSo{
    public:
        ll uoc = 1;
        ll ans = 1;

        ll UCLN(ll a, ll b){
            return __gcd(a, b);
        }

        ll Mul(ll a, ll b){
            if(b == 0) return 1;
            if(b % 2 == 0)
                return Mul(a * a % e, b / 2) % e;
            else
                return a * Mul(a * a % e,  b / 2) % e;
        }

        void solve(){
            for(int i = 0; i < n; i++){
                uoc = UCLN(uoc, a[i]);
            }
            for(int i = 0; i < n; i++){
                ans *= Mul(uoc, a[i]);
                ans %= e;
            }
        }

        void xuat(){
            cout << ans << endl;
        }
};

class SoLonNhatCuaDayConLienTuc: public MangSo{
    public:
        int n, k;
        multiset <int> st;
        void nhap(){
            cin >> n >> k;
            for(int i = 0; i < n; i++){
                cin >> a[i];
            }
        }
        void xuat(){
            for(int i = 0; i < k; i++){
                st.insert(a[i]);
            }        
            cout << *st.rbegin() << " ";
            for(int i = k; i < n; i++){
                st.erase(st.find(a[i - k]));//Remove only one instance of element from multiset having same value
                st.insert(a[i]);
                cout << *st.rbegin() << " ";
            }
            cout << endl;
        }
};

class DemCapPhanTuCoTongBangK: public MangSo{
    public:
        int ans = 0;
        void solve(){
            for(int i = 0; i < n - 1; i++){
                for(int j = i + 1; j < n; j++){
                    //if(a[i] + a[j] == k)
                        ans++;
                }
            }
        }
        void xuat(){
            cout << ans << endl;
        }
};

class SapXepLaiDayCon: public MangSo{
    public:
        void nhap(){
            cin >> n;
            for(int i = 1; i <= n; i++){
                cin >> a[i];
                b[i] = a[i];
            }
        }
        int l = 0, r = 0;
        void solve(){
            sort(b + 1, b + n + 1);
            for(int i = 1; i <= n; i++) {
                if(a[i] != b[i]) {
                    l = i;
                    break;
                } 
            }
            for(int i = n; i >= 0; i--) {
                if(a[i] != b[i]) {
                    r = i;
                    break;
                } 
            }
        }
        void xuat(){
            cout << l << " " << r << endl;
        }
};

class HopGiaoHaiDaySo: public MangSo{
    public:
        int n, m;
        set <int> st;
        set <int> st2;
        void nhap(){
            cin >> n >> m;
            for(int i = 0; i < n + m; i++){
                int x;
                cin >> x;
                if(x >= n){
                    if(st.find(x) != st.end())
                        st2.insert(x);
                }
                st.insert(x);
            }
        }
        void xuat(){
            for(auto x : st) cout << x << " ";
            cout << endl;
            for(auto x : st2) cout << x << " ";
            cout << endl;
        }
};

class HieuNhoHonK: public MangSo{
    public:
        void xuat(){
            int k;
            cin >> k;
            sort(a, a + n);
            ll cnt = 0;
            for(int i = 0; i < n - 1; i++) {
                ll vt = lower_bound(a, a + n, a[i] + k) - a;
                cnt += vt - i - 1;
            }
            cout << cnt << endl;
        }
};

class NhanDoiCapSoBangNhau: public MangSo{
    public:
        vector <ll> vt;
        void solve(){
            for(int i = 0; i < n - 1; i++) {
                if(a[i] != 0) {
                    if(a[i] == a[i + 1]) {
                        a[i] *= 2;
                        a[i + 1] = 0;
                        vt.push_back(a[i]);
                    }
                    else {
                        vt.push_back(a[i]);
                    }
                }
            }
            if(a[n - 1] != 0) vt.push_back(a[n - 1]);
        }
        void xuat(){
            for(int i = 0; i < vt.size(); i++) {
                cout << vt[i] << " ";
            }
            for(int i = vt.size(); i < n; i++) {
                cout << "0" << " ";
            }
            cout << endl;
        }
};

class SuaDen: public MangSo{
    public:
        int n, b, k, ans = 0;
        void nhap(){
            cin >> n >> k >> b;
            for(int i = 0; i < b; i++) {
                int x; cin >> x;
                a[x] = 1;
            }
        }
        void solve(){
            int s = 0;
            for(int i = 1; i <= k; i++) {
                s += a[i];
            }
            for(int i = k + 1; i <= n; i++) {
                s = s - a[i - k] + a[i];
                ans = min(ans, s);
            }
        }
        void xuat(){
            cout << ans << endl;
        }
};

class SapXepTheoChuSo: public MangSo{
    public:
        bool cmp(int a, int b){
            string x = to_string(a);
            string y = to_string(b);
            return x + y > y + x;
        }
        void xuat(){
            sort(a, a + n, cmp);
            for(auto x : a) cout << x;
            cout << endl;
        }
};

class BienDoiDaySo2: public MangSo{
    public:
        void solve(){
            for(int i = 0; i < n; i++)
                b[i] = a[i];
            for(int i = 0; i < n; i++){
                if(i == 0)
                    b[i] = a[i] * a[i + 1];
                else if(i == n - 1)
                    b[i] = a[i] * a[i - 1];
                else    
                    b[i] = a[i - 1] * a[i + 1];
            }
        }
        void xuat(){
            for(int i = 0; i < n; i++)
                cout << b[i] << " ";
            cout << endl;
        }
};

class KhoangCachBangX: public MangSo{
    public:
        int n, x;
        map <int, int> mp;
        int l = -1;
        void nhap(){
            cin >> n >> x;
            for(int i = 0; i < n; i++){
                cin >> a[i];
                mp[a[i]] = 1;
            }
        }
        void solve(){
            for(int i = 0; i < n; i++){
                if(mp[x + a[i]] == 1){
                    l = 1;
                    break;
                }
            }
        }
        void xuat(){
            cout << l << endl;
        }
};

class TamGiacVuong: public MangSo{
    private:
        ll n;
        vector <ll> vt;
    public:
        int l = 0;
        void nhap(){
            for(int i = 0; i < n; i++){
                ll x;
                cin >> x;
                vt.push_back(x * x);
            }
        }

        int check(vector <ll> a, ll i, ll x){
            int l = 0, r = i - 1;
            while(l <= r){
                if(a[l] + a[r] == x)
                    return 1;
                if(a[l] + a[r] < x)
                    l++;
                else    
                    r--;
            }
            return 0;
        }

        void solve(){
            sort(vt.begin(), vt.end());
            for(int i = vt.size(); i >= 2; i--){
                if(check(vt, i, vt[i])){
                    l = 1;
                    break;
                }
            }
        }
        void xuat(){
            if(l) 
                cout << "YES" << endl;
            else    
                cout << "NO" << endl;
        }
};

class SapXepTheoSoLanXuatHien: public MangSo{
    private:
        int n;
        map <int, int> mp;
        vector<pair<int, int>> vt;
    public:
        void nhap(){
            cin >> n;
            for(int i = 0; i < n; i++){
                int x; cin >> x;
                mp[x] ++;
            }
        }

        bool cmp(pair<int, int> a, pair<int, int> b) {
            if(a.second != b.second) return a.second > b.second;
            return a.first < b.first;
        }

        void solve(){
            for(auto x : mp)
                vt.push_back(make_pair(x.first, x.second));
            sort(vt.begin(), vt.end(), cmp);
        }

        void xuat(){
            for(auto x : vt){
                for(int i = 1; i <= x.second; i++){
                    cout << x.first << " ";
                }
            }
            cout << endl;
        }
};

class SoNhoNhatLonHonA_i: public MangSo{
    private:
        int n;
        int a[100005] = {};
        int b[100005] = {};
    public:
        void nhap(){
            cin >> n;
            for (int i = 0; i < n; ++i) {
                cin >> a[i];
                b[i] = a[i];
            }
        }
        void xuat(){
            sort(b, b + n);
            for (int i = 0; i < n; ++i) {
                int p = lower_bound(b, b + n, a[i] + 1) - b;
                if (p == n)
                    cout << "_ ";
                else
                    cout << b[p] << " ";
            }
            cout << endl;
        }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        ThongKePhanTu m;
        m.nhap();
        m.solve();
        m.xuat();
    }
    return 0;
}

//to_string(a);
//stoi(a);