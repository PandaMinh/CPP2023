#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
// by sunmin

class Matrix{
    protected:
        int n, m, a[1005][505] = {}, b[505][505] = {};
    public:
        void nhap(){
            cin >> n >> m;
            for(int i = 0; i < n; i++){
                for(int j = 0; j < m; j++){
                    cin >> a[i][j];
                }
            }
        }
        void solve(){
            cout << "";
        }
        void xuat(){
            for(int i = 0; i < n; i++){
                for(int j = 0; j < m; j++){
                    cout << a[i][j] << " ";
                }
                cout << endl;
            }
            cout << endl;
        }
};

class BienDoiNhiPhan: Matrix{
    public:
        void solve(){
            for(int i = 0; i < n; i++){
                for(int j = 0; j < m; j++){
                    if(a[i][j] == 1){
                        for(int k = 0; k < n; k++){
                            b[k][j] = 1;
                        }
                        for(int k = 0; k < m; k++){
                            b[i][k] = 1;
                        }
                    }
                }
            }
            for(int i = 0; i < n; i++){
                for(int j = 0; j < m; j++){
                    a[i][j] = b[i][j];
                }
            }
        }
};

class BienCuaMaTran: Matrix{
    public:
        void nhap(){
            cin >> n;
            for(int i = 0; i < n; i++){
                for(int j = 0; j < n; j++){
                    cin >> a[i][j];
                }
            }
        }
        void xuat(){
            for(int i = 0; i < n; i++){
                if(i == 0 || i == n - 1)
                    for(int j = 0; j < n; j++){
                        cout << a[i][j] << " ";
                    }
                else{
                    cout << a[i][0] << " ";
                    for(int j = 1; j < n - 1; j++){
                        cout << " " << " ";
                    }
                    cout << a[i][n - 1];
                }
                cout << endl;
            }
        }
};

class InMaTran1: Matrix{
    public:
        void nhap(){
            cin >> n;
            for(int i = 0; i < n; i++){
                for(int j = 0; j < n; j++){
                    cin >> a[i][j];
                }
            }
        }
        void xuat(){
            for(int i = 0; i < n; i++){
                if(i % 2 == 0){
                    for(int j = 0; j < n; j++){
                        cout << a[i][j] << " ";
                    }
                }
                else{
                    for(int j = n - 1; j >= 0; j--){
                        cout << a[i][j] << " ";
                    }
                }
            }
            cout << endl;
        }
};

class InMaTran2: InMaTran1{
    public:
        void nhap(){
            cin >> n;
        }
        void xuat(){
            int m = 8 * n * n;
            int c[m];
            c[0] = 8 * n * n + 2 * n;
            int tmp = c[0], f = 1, st = 2, pos = 1;
            while(pos < m){
                for(int i = 0; i < st; i++){
                    tmp -= 4 * f * n;
                    c[pos] = tmp;
                    pos++;
                    if(pos >= m) break;
                }
                if(pos >= m) break;
                for(int i = 0; i < st; i++){
                    tmp += f;
                    c[pos] = tmp; pos++;
                    if(pos >= m) break;
                }
                f *= -1; 
                st += 2;
            }
            int c2[m];
            for(int i = 0; i < m; i++) 
                c2[i] = 16 * n * n + 1 - c[i];
            for(int i = 0; i < m; i++) 
                cout << c[i] << " ";
            cout << endl;
            for(int i = 0; i < m; i++) 
                cout << c2[i] << " ";
            cout << endl;
        }
};

class InMaTran3: Matrix{
    public:
    void solve(){
        cout << "";
    }
    void xuat(){
        int row = 0, col = 0;
        bool row_inc = 0;
        int mn = min(m, n);
        for(int len = 1; len <= mn; ++len){
            for(int i = 0; i < len; ++i){
                cout << a[row][col] << " ";
    
                if(i + 1 == len)
                    break;
                if(row_inc){
                    row++;
                    col--;
                }
                else{
                    row--;
                    col++;
                }
            }
    
            if(len == mn)
                break;
            if(row_inc){
                row++;
                row_inc = false;
            }
            else{
                col++;
                row_inc = true;
            }
        }
        if(row == 0){
            if(col == m - 1)
                row++;
            else
                col++;
            row_inc = 1;
        }
        else{
            if(row == n - 1)
                col++;
            else
                row++;
            row_inc = 0;
        }
        int MAX = max(m, n) - 1;
        for(int len, diag = MAX; diag > 0; diag--){
    
            if(diag > mn)
                len = mn;
            else
                len = diag;
    
            for(int i = 0; i < len; ++i){
                cout << a[row][col] << " ";
    
                if(i + 1 == len)
                    break;
                if(row_inc){
                    row++;
                    col--;
                }
                else{
                    col++;
                    row--;
                }
            }
            if(row == 0 || col == m - 1){
                if(col == m - 1)
                    row++;
                else
                    col++;
                row_inc = true;
            }
    
            else if(col == 0 || row == n - 1){
                if(row == n - 1)
                    col++;
                else
                    row++;
    
                row_inc = false;
            }
        }
        cout << endl;
    }
};

class MaTranXoanOc1: Matrix{
public:
    int cnt = 0, k;
    void solve(){
        int c1 = 0, c2 = m - 1;
        int h1 = 0, h2 = n - 1;
        int b[10001] = {};
        while(h1 <= h2 && c1 <= c2){
            for(int i = c1; i <= c2; i++){
                b[cnt++] = a[h1][i];
            }
            h1++;
            for(int i = h1; i <= h2; i++){
                b[cnt++] = a[i][c2];
            }
            c2--;
            if(h1 <= h2){
                for(int i = c2; i >= c1; i--){
                    b[cnt++] = a[h2][i];
                }
                h2--;
            }
            if(c1 <= c2){
                for(int i = h2; i >= h1; i--){
                    b[cnt++] = a[i][c1];
                }
                c1++;
            }
        }
    }
    void xuat(){
        for(int i = 0; i < cnt; i++){
            cout << b[i] << " ";
        }
        cout << endl;
    }
};

class MaTranXoanOc2: MaTranXoanOc1{
    public:
        void xuat(){
            for(int i = cnt - 1; i >= 0; i--){
                cout << b[i] << " ";
            }
            cout << endl;
        }
};

class MaTranXoanOc3: MaTranXoanOc1{
    public:
        void nhap(){
            cin >> n >> m >> k;
            for(int i = 0; i < n; i++){
                for(int j = 0; j < m; j++){
                    cin >> a[i][j];
                }
            }
        }
        void xuat(){
            cout << b[k - 1] << endl;
        }
};

class MaTranXoanOc4: MaTranXoanOc1{
    public:
        int arr[10005] = {};
        int brr[105][105] = {};
    public:
        void nhap(){
            cin >> n;
            for(int i = 0; i < n * n; i++){
                cin >> arr[i];
            }
            sort(arr, arr + n*n);
        }
        void solve(){
            int c1 = 0, c2 = n - 1;
            int h1 = 0, h2 = n - 1;
            int res = 0;
            while(h1 <= h2 && c1 <= c2){
                for(int i = c1; i <= c2; i++){
                    brr[h1][i] = arr[res++]; 
                }
                h1++;
                for(int i = h1; i <= h2; i++){
                    brr[i][c2] = arr[res++]; 
                }
                c2--;
                if(h1 <= h2) {
                    for(int i = c2; i >= c1; i--){
                        brr[h2][i] = arr[res++];
                    }
                    h2--;
                }
                if(c1 <= c2) {
                    for(int i = h2; i >= h1; i--){
                        brr[i][c1] = arr[res++];
                    }
                    c1++;
                }
            }
        }
        void xuat(){
            for(int i = 0; i < n; i++){
                for(int j = 0; j < n; j++){
                    cout << brr[i][j] << " ";
                }
                cout << endl;
            }
        }
};

class MaTranNhiPhan: Matrix{
public:
    int ans = 0;
    void nhap(){
        cin >> n;
        int chan = 0, le = 0; 
        for(int i = 0; i < n; i++){
            chan = 0; 
            le = 0;
            for(int j = 0; j < 3; j++){
                cin >> a[i][j];
                if(a[i][j] == 1)
                    le++;
                else  
                    chan++;
            }
            if(le > chan) 
                ans++;
        }
    }
    void xuat(){
        cout << ans;
    }
};

class TichMaTran: Matrix{
    public:
        int n, m, p;
        int a[55][55] = {0}, b[55][55] = {0}, c[55][55] = {0};
    public:
        void nhap(){
            cin >> n >> m >> p;
            for(int i = 0; i < n; i++){
                for(int j = 0; j < m; j++){
                    cin >> a[i][j];
                }
            }
            for(int i = 0; i < m; i++){
                for(int j = 0; j < p; j++){
                    cin >> b[i][j];
                }
            }
        }
        void solve(){
            for(int i = 0; i < n; i++){
                for(int j = 0; j < p; j++){
                    for(int k = 0; k < m; k++){
                        c[i][j] += a[i][k] * b[k][j];
                    }
                }
            }
        }
        void xuat(){
            for(int i = 0; i < n; i++){
                for(int j = 0; j < p; j++){
                    cout << c[i][j] << " ";
                }
                cout << endl;
            }
        }
};

class PhanTuNhoNhatThuKCuaMaTran: Matrix{
    public:
        int h[10005] = {};
        void nhap(){
            cin >> n >> m;
            for(int i = 0; i < n * n; i++){
                cin >> h[i];
            }
        }
        void solve(){
            sort(h, h + n * n);
        }
        void xuat(){
            cout << h[m - 1] << endl;
        }
};

class QuayMaTran: Matrix{
    public:
        void solve(){
            int h1 = 0, h2 = n - 1;
            int c1 = 0, c2 = m - 1;
            while(c1 < c2 || h1 < h2){
                int tmp = a[h1][c1];
                for(int i = c1 + 1; i <= c2; i++){
                    int res =  a[h1][i];
                    a[h1][i] = tmp;
                    tmp = res;
                }
                for(int i = h1 + 1; i <= h2; i++){
                    int res =  a[i][c2];
                    a[i][c2] = tmp;
                    tmp = res;
                }
                for(int i = c2 - 1; i >= c1; i--){
                    int res =  a[h2][i];
                    a[h2][i] = tmp;
                    tmp = res;
                }
                for(int i = h2 - 1; i >= h1; i--){
                    int res =  a[i][c1];
                    a[i][c1] = tmp;
                    tmp = res;
                }
                c1++; h1++; c2--; h2--;
            }
        }
        void xuat(){
            for(int i = 0; i < n; i++) {
                for(int j = 0; j < m; j++) {
                    cout << a[i][j] << " ";
                }
            }
            cout << endl;
        }
};

class DemPhanTuGiongNhau: BienCuaMaTran{
    public:
        set <int> st;
        void solve(){
            int cnt = 0;
            for(int i = 0; i < n; i++){
                int cnt2 = 0;
                for(int j = 1; j < n; j++){
                    for(int k = 0; k < n; k++){
                        if(a[j][k] == a[0][i]){
                            cnt2++;
                            break;
                        }
                    }
                }
                if(cnt2 == n - 1){
                    st.insert(a[0][i]);
                }
            }
        }
        void xuat(){
            cout << st.size() << endl;
        }
};

class DemSoMienMaTran: Matrix{
    public:
        pair <int, int> pa[8] = {{-1, -1}, {-1, 0}, {-1, 1}, {0, -1}, {0, 1}, {1, -1}, {1, 0}, {1, 1}};
        int cnt = 0;
        void dfs(int i, int j){
            a[i][j] = 0;
            for(int k = 0; k < 8; k++){
                int i1 = i + pa[k].first;
                int j1 = j + pa[k].second;
                if(i1 >= 0 && i1 < n && j1 >= 0 && j1 < m && a[i1][j1]){
                    dfs(i1, j1);
                }
            }
        }
        void solve(){
            for(int i = 0; i < n; i++) {
                for(int j = 0; j < m; j++) {
                    if(a[i][j]) {
                        dfs(i, j);
                        cnt++;
                    }
                }
            }
        }
        void xuat(){
            cout << cnt << endl;
        }

};

class BienDoiMaTran: Matrix{
    public:
        void nhap(){
            cin >> n;
            for(int i = 1; i <= n; i++){
                for(int j = 1; j <= n; j++){
                    cin >> a[i][j];
                }
            }
        }
        void xuat(){
            int y = INT_MIN;
            int x = INT_MIN;
            for(int i = 1; i <= n; i++){
                for(int j = 1; j <= n; j++){
                    a[i][0] += a[i][j];
                    a[0][i] += a[j][i];
                }
                y = max(y, a[i][0]);
                x = max(x, a[0][i]);
            }
            int cnt = 0;
            if(y > x){
                for(int i = 1; i <= n; i++){
                    cnt += y - a[i][0];
                }
                cout << cnt << endl;
            } 
            else{
                for(int i = 1; i <= n; i++){
                    cnt += x - a[0][i];
                }
                cout << cnt << endl;
            }
        }
};

class HinhChuNhatLonNhat: Matrix{
    public:
        int dp[105][105] = {};
        int s = 0;
        void nhap(){
            cin >> n >> m;
            for(int i = 1; i <= n; i++){
                for(int j = 1; j <= m ; j++){
                    cin >> a[i][j];
                    if(a[i][j]) 
                        dp[i][j] = a[i][j] + dp[i - 1][j];
                }   
            }
        }
        void solve(){
            for(int i = 1; i <= n; i++){
                int d[105] = {};
                for(int j = 1; j <= m; j++){
                    d[j] = dp[i][j];   
                }
                sort(d + 1, d + m + 1);
                for(int j = 1; j <= m; j++){
                    s = max(s, d[j] * (m + 1 - j));
                }
            }
        }
        void xuat(){
            cout << s << endl;
        }
};

class MaTranVuongLonNhat: Matrix{
    public:
        char a[1001][1001];
        int max = 0;
        void nhap(){
            cin >> n;
            for(int i = 0; i < n; i++)
                for(int j = 0; j < n; j++) 
                    cin >> a[i][j];
        }
        void solve(){
            int ngang[n][n], doc[n][n];
            ngang[0][0] = doc[0][0] = (a[0][0] == 'X');
            for(int i = 0; i < n; i++){
                for(int j = 0; j < n; j++){
                    if(a[i][j] == 'O') 
                        ngang[i][j] = doc[i][j] = 0;
                    else{
                        ngang[i][j] = (j == 0) ? 1 : ngang[i][j-1] + 1;
                        doc[i][j] = (i == 0) ? 1 : doc[i-1][j] + 1;
                    }
                }
            }
            for(int i = n - 1; i >= 1; i--){
                for(int j = n - 1; j >= 1; j--){
                    int small = min(ngang[i][j], doc[i][j]);
                    while(small > max){
                        if(doc[i][j - small + 1] >= small&& ngang[i - small + 1][j] >= small) 
                            max = small;
                        small--;
                    }
                }
            }
        }
        void xuat(){
            cout << max << endl;
        }
};

class ThayTheXO: Matrix{

};

class CuaSoTruot: Matrix{
    public:
        void nhap(){
            cin >> n;
            for(int i = 0; i < n; i++) {
                for(int j = 0; j < n; j++) {
                    cin >> a[i][j];
                }
            }
            cin >> m;
            for(int i = 0; i < m; i++) {
                for(int j = 0; j < m; j++) {
                    cin >> b[i][j];
                }
            }
        }
        void solve(){
            for(int i = 0; i < n; i++) {
                for(int j = 0; j < n; j++) {
                    a[i][j] *= b[i % m][j % m];
                }
            }
        }
        void xuat(){
            for(int i = 0; i < n; i++) {
                for(int j = 0; j < n; j++) {
                    cout << a[i][j] << " ";
                }
                cout << endl;
            }
        }
};

class TichChap: Matrix{
    public:
        pair <int, int> p[8] = {{0, 0}, {0, 1}, {0, 2}, {1, 2}, {2, 2}, {2, 1}, {2, 0}, {1, 0}};
        pair <int, int> pa[8] = {{-1, -1}, {-1, 0}, {-1, 1}, {0, 1}, {1, 1}, {1, 0}, {1, -1}, {0, -1}};
        int k[305][305] = {};
        ll sum = 0;
        void nhap(){
            cin >> n >> m;
            for(int i = 0; i < n; i++) {
                for(int j = 0; j < m; j++) 
                    cin >> a[i][j];
            }
            for(int i = 0; i < 3; i++){
                for(int j = 0; j < 3; j++){
                    cin >> k[i][j];
                }
            }
        }

        void solve(){
            for(int i = 1; i < n - 1; i++){
                for(int j = 1; j < m - 1; j++){
                    int tmp = k[1][1] * a[i][j];
                    for(int x = 0; x < 8; x++){
                        tmp += k[p[x].first][p[x].second] * a[i + pa[x].first][j + pa[x].second];
                    }
                    sum += tmp;
                }
            }
        }

        void xuat(){
            cout << sum << endl;
        }
};

class LamMinAnh: Matrix{
    public:
        int l;
        void nhap(){
            cin >> n >> m >> l;
            for(int i = 1; i < n + 1; i++){
                for(int j = 1; j < m + 1; j++){
                    cin >> a[i][j];
                }
            }
        }
        void solve(){
            int k = (l - 1) / 2;
            int prefix[n + 1][m + 1];
            memset(prefix, 0, sizeof(prefix));
            for(int i = 1; i <= n; i++){
                for(int j = 1; j <= m; j++){
                    prefix[i][j] = prefix[i - 1][j] + prefix[i][j - 1] - prefix[i - 1][j - 1] + a[i][j];
                }
            }
            for(int i = 1 ; i <= n - l + 1; i++){
                for(int j = 1; j <= m -l + 1; j++){
                    int h1 = i, h2 = i + l - 1, c1 = j, c2 = j + l - 1;
                    int sum = prefix[h2][c2] - prefix[h1-1][c2] - prefix[h2][c1-1] + prefix[h1-1][c1-1];
                    b[i][j] = sum / (l * l);
                }
            }
        }
        void xuat(){
            for(int i = 1 ; i <= n - l + 1; i++){
                for(int j = 1; j <= m - l + 1; j++){
                    cout << b[i][j] << " ";
                }
                cout << endl;
            }
        }
};

class TinhHangCuaMaTran: Matrix{
    public:
        void nhap(){
            int n, m; 
            cin >> n >> m;
            int a[n][m];
            for(int i = 0; i < n;i++)
                for(int j = 0; j < m;j++) 
                    cin >> a[i][j];
        }
        int rank = m;   
        void solve(){
            for(int i = 0; i < rank; i++){
                if(a[i][i]){
                    for(int j = 0; j < n; j++){
                        if(i != j){
                            double mult = (double) a[j][i] / a[i][i];
                            for(int k = 0; k < rank; k++){
                                a[j][k] -= mult * a[i][k];
                            }
                        }
                    }
                }
                else{
                    bool reduce = true;
                    for(int j = i + 1; j < n; j++){
                        if(a[j][i]){
                            for(int k = 0; k < rank; k++){
                                swap(a[i][k], a[j][k]);
                            }
                            reduce = false;
                            break;
                        }
                    }
                    if(reduce){
                        rank--;
                        for(int j = 0; j < n; j++){
                            a[j][i] = a[j][rank];
                        }
                    }
                    i--;
                }
            }
        }
        void xuat(){
            cout << rank << endl;
        }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        TinhHangCuaMaTran m;
        m.nhap();
        m.solve();
        m.xuat();
    }
    return 0;
}