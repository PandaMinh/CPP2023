#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
// by sunmin

class String{
    public:
        string s, s1, s2, ss, tmp;
        int cnt = 0;
        vector <string> vt;
    public:
        void nhap(){
            getline(cin, s);
        }

        // chuẩn hóa tên nguyen thi minh
        string ChuanHoa(string s){
            for(int i = 0; i < s.length(); i++){
                s[i] = tolower(s[i]);
            }
            string res = "";
            stringstream ss(s);
            string token;
            while(ss >> token){
                vt.push_back(token);
                res += token;
                res += " ";
            }
            res.erase(res.length() - 1);
            return res;
        }

        string ChuThuong(string s){
            string tmp = "";
            for(int i = 0; i < s.length(); i++) {
                tmp += tolower(s[i]);
            }
            return tmp;
        }

        string ChuHoa(string s){
            string tmp = "";
            for(int i = 0; i < s.length(); i++) {
                tmp += toupper(s[i]);
            }
            return tmp;
        }

        void TachTu(string s){
            stringstream ss(s);
            string token;
            while(ss >> token){
                cnt++;
            }
        }

        int DoiXung(string s){
            for(int i = 0; i <= s.length() / 2; i++){
                if(s[i] != s[s.length() - 1 - i]){
                    return 0;
                }
            }
            return 1; 
        }

        int ThuanNghichChan(string s){
            int n = s.length();
            for(int i = 0; i <= n / 2; i++){
                if((s[i] - '0') % 2 != 0 || s[i] != s[n - i - 1])
                    return 0;
            }
            return 1;
        }
        void solve(){
            //s = ChuanHoa(s);
        }
        void xuat(){
            cout << s << endl;
        };
};

class KyTuKhongLap: public String{
    public:
        void xuat(){
            int a[10005] = {};
            for(int i = 0; i < s.length(); i++){
                a[s[i]]++;
            }
            for(int i = 0; i < s.length(); i++){
                if(a[s[i]] == 1)
                    cout << s[i];
            }
            cout << endl;
            }
};

class DemTu: public String{
    public:
        void solve(){
            TachTu(s);
        }
        void xuat(){
            cout << cnt << endl;
        }
};

class XauPangram: public String{
    public:
        int k;
        set <char> st;
        void nhap(){
            getline(cin, s);
            cin >> k;
        }
        void solve(){
            for(int i = 0; i < s.length(); i++){
                st.insert(s[i]);
            }
            if(26 - st.size() <= k)
                cout << "1" << endl;
            else 
                cout << "0" << endl;
        }
        void xuat(){

        }
};

class LoaiBoTuTrongXau: public String{
    public:
        string a;
        void nhap(){
            getline(cin, s);
            getline(cin, a);
        }
        void solve(){
            stringstream ss(s);
            string tmp;
            while(ss >> tmp){
                if(tmp != a)
                    cout << tmp << " ";
            }
        }
        void xuat(){}
};

class ChucMungNamMoi: public String{
    public:
        set <string> st;
        void nhap(){
            int t;
            cin >> t;
            cin.ignore();
            while(t--){
                getline(cin, s);
                st.insert(s);
            }
        }
        void xuat(){
            cout << st.size();
        }
};

class DiaChiEmail1: public String{
    public:
        void xuat(){
            s = ChuanHoa(s);
            cout << vt[vt.size() - 1];
            for(int i = 0; i < vt.size() - 1; i++){
                    vt[i][0] = tolower(vt[i][0]);
                    cout << vt[i][0];
            }
            cout << "@ptit.edu.vn";
        }
};

class ChuanHoaHoTen: public String{
    public:
        void xuat(){
            s = ChuanHoa(s);
            for(int i = 0; i < vt.size() - 1; i++){
                vt[i][0] = toupper(vt[i][0]);
                cout << vt[i];
                if(i != vt.size() - 2)
                    cout << " ";
                else
                    cout << ", ";
            }
            for(int i = 0; i < vt[vt.size() - 1].length(); i++){
                vt[vt.size() - 1][i] = toupper(vt[vt.size() - 1][i]);
                cout << vt[vt.size() - 1][i];   
            }
        }
};
//lỗi
class ChuanHoaHoTen2: public String{
    public:
        int n;
        void nhap(){
            cin >> n;
            cin.ignore();
            getline(cin, s);
        }
        void solve(){
            s = ChuanHoa(s);
            for(int i = 0; i < vt.size(); i++){
                vt[i][0] = toupper(vt[i][0]);
            }
        }
        void xuat(){
            if(n == 1) {
                cout << *vt.rbegin() << " ";
                for(auto i = 0; i < vt.size() - 1; i++) {
                    cout << vt[i] << " ";
                }
            }
            if(n == 2) {
                for(auto i = 1; i < vt.size(); i++) {
                    cout << vt[i] << " ";
                }
                cout << vt[0];
            }
        }
};

class HieuHaiTapTu: public String{
    public:
        void nhap(){
            getline(cin, s1);
            getline(cin, s2);
        }
        set <string> st1;
        void solve(){
            stringstream ss2(s2);
            string token2;
            set <string> st2;
            while(ss2 >> token2) {
                st2.insert(token2);
            }
            stringstream ss1(s1);
            string token1;
            while(ss1 >> token1) {
                if(st2.find(token1) == st2.end()) {
                    st1.insert(token1);
                }
            }
        }
        void xuat(){
            for(auto x : st1) cout << x << " ";
            cout << endl;
        }
};

class XuLyVanBan: public String{
    public:
        void nhap(){
            while(cin >> s){
                vt.push_back(s);
            }
        }
        bool caps = 1;
        bool isEndl(string s){
            char c = s.back();
            return (c == '.' || c == '?' || c == '!');
        } 
        void xuat(){
            for (auto x : vt){
                transform(x.begin(), x.end(), x.begin(), ::tolower);
                if(caps){
                    x[0] = toupper(x[0]);
                    caps = 0;
                }
                
                if(isEndl(x)){
                    x.pop_back();
                    cout << x << endl;
                    caps = 1;
                }
                else
                    cout << x << " ";
            }
        }
};

class DauCuoiGiongNhau: public String{
    public:
        void xuat(){
            int ans = s.length();
            for(int i = 0; i < s.length(); i++){
                for(int j = i + 1; j < s.length(); j++){
                    if(s[i] == s[j])
                        ans++;
                }
            }
            cout << ans << endl;
        }
};

class DemXauCon: public String{
    public:
        int k, ans;
        set <char> st;
        void nhap(){
            cin >> s >> k;
        }
        void solve(){
            for(int i = 0; i < s.length(); i++){
                for(int j = 1; j < s.length(); j++){
                    st.insert(s[j]);
                    if(st.size() > k) {
                        break;
                    }
                    if(st.size() == k) {
                        ans++;
                    } 
                }
                st.clear();
            }
        }
        void xuat(){
            cout << ans << endl;
        }
};

class MaHoa: public String{
    public:
        void xuat(){
            int cnt = 1;
            for(int i = 0; i < s.length(); i++){
                if(s[i] == s[i+1])
                    cnt++;
                else{
                    cout << s[i] << cnt;
                    cnt = 1;
                }
            }
            cout << endl;
        }
};

class LoaiBoNguyenAm: public String{
    public:
        void xuat(){
            for(int i = 0; i < s.length(); i++){
                s[i] = tolower(s[i]);
                if(s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u' && s[i] != 'y')
                    cout << "." << s[i];
            }
        }
};

class BienDoiAB: public String{
    public:
        int A = 0, B = 0;
        void xuat(){
            for(int i = 0; i < s.length(); i++){
                if(s[i] == 'A')
                    B = min(A, B) + 1;
                else    
                    A = min(A, B) + 1;
            }
            cout << A;
        }
};

class SapDatXauKyTu: public String{
    public:
        void xuat(){
            map <char, int> mp;
            for(int i = 0; i < s.length(); i++){
                mp[s[i]]++;
            }
            vector <int> vt;
            for(auto i : mp){
                vt.push_back(i.second);
            }
            sort(vt.begin(), vt.end(), greater<int>());
            if(vt[0] - 1 <= s.size() - vt[0])
                cout << "1" << endl;
            else cout << "0" << endl;
        }
};

class DienThoaiCucGach: public String{
    public:
        void solve(){
            s = ChuHoa(s);
            for(int i = 0; i < s.length(); i++) {
                if(s[i] >= 'A' && s[i] <= 'C')
                    s[i] = '2';
                if(s[i] >= 'D' && s[i] <= 'F')
                    s[i] = '3';
                if(s[i] >= 'G' && s[i] <= 'I')
                    s[i] = '4';
                if(s[i] >= 'J' && s[i] <= 'L')
                    s[i] = '5';
                if(s[i] >= 'M' && s[i] <= 'O')
                    s[i] = '6';
                if(s[i] >= 'P' && s[i] <= 'S')
                    s[i] = '7';
                if(s[i] >= 'T' && s[i] <= 'V')
                    s[i] = '8';
                if(s[i] >= 'W' && s[i] <= 'Z')
                    s[i] = '9';
            }
        }
        void xuat(){
            if(DoiXung(s))
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
};

class TachChuSo: public String{
    public:
        multiset <char> st;
        int sum = 0;
        void solve(){
            for(int i = 0; i < s.length(); i++){
                if(isdigit(s[i]))
                    sum += s[i] - '0';
                else
                    st.insert(s[i]);
            }
        }
        void xuat(){
            for(auto x : st) 
                cout << x;
            cout << sum << endl; 
        }
};

class SoDep: public String{
    public:
        void xuat(){
            if(ThuanNghichChan(s))
                cout << "YES";
            else    
                cout << "NO";
            cout << endl;
        }
};

class DoiChoChuSo: public String{
    public:
        void solve(){
            int i = s.length()-2;
            while(i >= 0 && s[i] <= s[i + 1])
                i--;
            if(i == -1){
                cout << -1 << endl; 
                return;
            }
            int j = s.length() - 1;
            while(s[i] <= s[j] || (s[i] > s[j] && s[j] == s[j - 1])) 
                j--;
            swap(s[i], s[j]);
        }
        void xuat(){
            if(s[0] == '0') 
                cout << "-1\n";
            else 
                cout << s << endl;
        }
};

class SoDayDu: public String{
    public:
        int lc = 0;
        set <int> st;
        void solve(){
            if(s[0] == '0')
                cout << "INVALID" << endl;
            else{    
                for(int i = 0; i < s.length(); i++) {
                    if(!isdigit(s[i])){
                        cout << "INVALID" << endl;
                        lc = 0;
                        break;
                    }
                    else{
                        lc = 1;
                        st.insert(s[i] - '0');
                    }
                }
            }
        }
        void xuat(){
            if(lc == 1){
                if(st.size() == 10) 
                    cout << "YES" << endl;
                else 
                    cout << "NO" << endl;
            }
        }   
};

class TongCacSoTrongXau: public String{
    public:
        ll sum = 0;
        set <int> st;
        void solve(){
            s += "a";
            string ans = "0";
            for(int i = 0; i < s.length(); i++) {
                if(isdigit(s[i])) {
                    ans += s[i];
                }
                else{
                    int x = stoi(ans);
                    sum += x;
                    st.insert(x);
                    ans = "0";
                }
            }
        }
        void xuat(){
            cout << sum << endl;
        } 
};

class SoLonNhatTrongXau: public TongCacSoTrongXau{
    public:
        void xuat(){
            cout << *st.rbegin() << endl;
        }
};

class BienSoDep: public String{
    public:
        bool checkBang(string s){
            // check 3 so dau
            for(int i = 1; i < 3; i++){
                if(s[i] != s[i - 1]) 
                    return false;
            }
            if(s[3] != s[4]) 
                return false;
            return true;
        }

        bool checkLocPhat(string s){
            for(int i = 0; i < s.length(); i++){
                if(s[i] != '6' && s[i] != '8') 
                    return false;
            }
            return true;
        }

        bool checkTang(string s){
            for(int i = 1; i < s.length(); i++){
                if(s[i] <= s[i - 1]) 
                    return false;
            }
            return true;
        }

        void xuat(){
            s.erase(8, 1);
            string kt = s.substr(5, 5);
            if(checkBang(kt) || checkLocPhat(kt) || checkTang(kt)) 
                cout << "YES" << endl;
            else 
                cout << "NO" << endl;
        }
};

//
class NhoNhatLonNhat: public String{
    public:
        int m, s;
        void nhap(){
            cin >> m >> s;
        }
        void xuat(){
            int tmp = s;
            if(9 * m < s || (s == 0 && m > 1))
                cout << "-1 -1";
            else if(s == 0 && m == 1)
                cout << "0 0";
            else{
                int a[105] = {};
                int tmp = s;
                a[0] = 1;
                s--;
                int i = m - 1;
                while(s > 0){
                    if(s >= 9){
                        a[i--] += 9;
                        s -= 9;
                    }
                    else{
                        a[i--] += s;
                        s = 0;
                    }
                }
                int b[105] = {};
                int j = 0;
                while(tmp > 0){
                    if(tmp >= 9){
                        b[j++] += 9;
                        tmp -= 9;
                    }
                    else{
                        b[j++] += tmp;
                        tmp = 0;
                    }
                }
                for(int i = 0; i < m; i++){
                    cout << a[i];
                }
                cout << " ";
                for(int i = 0; i < m; i++){
                    cout << b[i];
                }
            }
        }
};

//
class TongLonNhatVaNhoNhat: public String{
    public:
        void nhap(){
            cin >> s1 >> s2;
        }

        ll ChuyenNam(string s) {
            for(int i = 0; i < s.length(); i++) {
                if(s[i] == '6') s[i] = '5';
            }
            return stoll(s);
        }

        ll ChuyenSau(string s) {
            for(int i = 0; i < s.length(); i++) {
                if(s[i] == '5') s[i] = '6';
            }
            return stoll(s);
        }

        void xuat(){
            cout << ChuyenNam(s1) + ChuyenNam(s2) << " ";
            cout << ChuyenSau(s1) + ChuyenSau(s2) << endl;
        }
};

// Xau con nhỏ nhất 1 2, Sum String, Mật khẩu

class PhepChiaDuCuaSoNguyenLon: public String{
    public:
        ll m;
        void nhap(){
            cin >> s >> m;
        }
        ll ChiaDu(string s, ll m){
            ll ans = 0;
            for(int i = 0; i < s.length(); i++) {
                ans = ans * 10 + (s[i] - '0');
                ans %= m;
            }
            return ans;
        }
        void xuat(){
            ll ans = ChiaDu(s, m);
            cout << ans << endl;
        }
};

class PhepChiaDuCuaLuyThuaSoNguyenLon: public PhepChiaDuCuaSoNguyenLon{
    public:
        ll b, m;
        ll du = 0;
        void nhap(){
            cin >> s >> b >> m;
            du = ChiaDu(s, m);
        }
        ll Power(ll a, ll b, ll x){
            if(b == 0) return 1;
            if(b == 1) return a % x;
            if(b % 2 == 0)
                return Power(a * a % x, b / 2, x) % x;
            else
                return a * Power(a * a % x, b / 2, x) % x;
        }
        void xuat(){
            cout << Power(du, b, m) << endl;
        }
};

class ChiaHetcho11: public String{
    public:
        int sum = 0;
        void solve(){
            for(int i = 0; i < s.length(); i++){
                sum = sum * 10 + s[i] - '0';
                sum %= 11;
            }
        }
        void xuat(){
            cout<< (sum == 0) ? "1" : "0";
        }
};

class ChiaHetCho5: public String{
    public:
        int n = 0;
        void solve(){
            int tmp = 1;
            for(int i = s.length() - 1; i >= 0; i--){
                n += (s[i] - '0') * tmp;
                tmp *= 2;
                tmp = tmp % 10;
                n = n % 10;
            }
        }
        void xuat(){
            if(n % 5 == 0)
                cout << "Yes";
            else 
                cout << "No";
            cout << endl;
        }
};

class ChiaHetcho8: public String{
    public:
        void nhap(){
            cin >> s;
        }
        int ans = 0;
        void solve(){
            for(int i = 0; i < s.length(); i++){
                ll num8 = 0;
                ll num3 = 0;
                for(int j = i; j < s.length(); j++){
                    num8 = (num8 * 10 + s[j] - '0') % 8;
                    num3 = (num3 * 10 + s[j] - '0') % 3;
                    if(num8 == 0 && num3 != 0) 
                        ans++;
                }
            }
        }
        void xuat(){
            cout << ans << endl;
        }
};

class DayUuThe: public String{
    public:
        void xuat(){
            stringstream ss(s);
            string tmp;
            int cnt = 0;
            int chan = 0, le = 0;
            while(ss >> tmp){
                cnt++;
                if((int)(tmp[tmp.length() - 1] - '0') % 2 == 0)
                    chan++;
                else  
                    le++;
            }
            if((chan > le && cnt % 2 == 0) || (le > chan && cnt % 2 != 0))
                cout << "YES" << endl;
            else 
                cout << "NO" << endl;
        }
};

class SoMayMan: public String{
    public:
        void solve(){
            while(s.length() != 1) {
                ll sum = 0;
                for(int i = 0; i < s.length(); i++) {
                    sum += s[i] - '0';
                }
                s = to_string(sum);
            }
        }
        void xuat(){
            if(s == "9") cout << "1" << endl;
            else cout << "0" << endl;
        }
};

class TongHaiSoNguyenLon: public String{
    public:
        int x[1005] = {};
        int y[1005] = {};
        int z[1005] = {};
        int n = 0;
        void Swap(int a[], int n){
            int l = 0, r = n - 1;
            while(l < r){
                swap(a[l], a[r]);
                l++; r--;
            }
        }
        int XauLon(string a, string b){
            if(a.length() == b.length()){
                int n = a.length();
                for(int i = 0; i < n; i++) {
                    if(a[i] > b[i]) return 1;
                    if(a[i] < b[i]) return 0;
                }
                return 0;
            }
            else if(a.length() > b.length())
                return 1;
            return 0;
        }

        void Bosung0(string a, string b){
            int n1 = a.length();
            int n2 = b.length();
            for(int i = 0; i < n1; i++) x[i] = a[i] - '0';
            for(int i = 0; i < n2; i++) y[i] = b[i] - '0';
            Swap(x, n1); Swap(y, n2);
            for(int i = n2; i < n1; i++) y[i] = 0;
        }

        void Tong(string a, string b){
            Bosung0(a, b);
            int nho = 0;
            for(int i = 0; i < a.length(); i++){
                z[n++] = (x[i] + y[i] + nho) % 10;
                nho = (x[i] + y[i] + nho) / 10;
            }
            if(nho != 0) {
                z[n++] = nho;
            }
        }

        void nhap(){
            cin >> s1 >> s2;
        }

        void solve(){
            if(XauLon(s1, s2))
                Tong(s1, s2);
            else    
                Tong(s2, s1);
        }
        void xuat(){
            for(int i = n - 1; i >= 0; i--){
                cout << z[i];
            }
            cout << endl;
        }
};

class HieuHaiSoNguyenLon: public TongHaiSoNguyenLon{
    public:
        void Hieu(string a, string b){
            Bosung0(a, b);
            int nho = 0;
            for(int i = 0; i < a.length(); i++){
                if(x[i] < y[i] + nho){
                    z[n++] = x[i] + 10 - (y[i] + nho);
                    nho = 1;
                } 
                else{
                    z[n++] = x[i] - y[i] - nho;
                    nho = 0;
                }
            }
        }
        void solve(){
            if(XauLon(s1, s2))
                Hieu(s1, s2);
            else    
                Hieu(s2, s1);
        }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        cin.ignore();
        ChiaHetcho8 s;
        s.nhap();
        s.solve();
        s.xuat();
    }
    return 0;
}