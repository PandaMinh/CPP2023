#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
// by sunmin

class File{
    private:
        ifstream f1;
        ofstream f2;
    public:
        void xuat(){}
};

class SaoChepTepTin: File{
    private:
        ifstream f1;
        ofstream f2;
    public:
        void xuat(){
            f1.open("PTIT.in");
            f2.open("PTIT.out");
            while(!f1.eof()){
                string s;
                getline(f1, s);
                f2 << s << endl;
            }
            f2.close();
            f1.close();
        }
};

class TinhTong: File{
    private:
        ifstream file;
        string s;
        ll sum = 0;
    public:
        ll Sum(string s){
            if(s.length() >= 10) return 0;
            for(int i = 0; i < s.length(); i++){
                if(s[0] == '-') continue;
                if(s[i] < '0' || s[i] > '9') return 0;
            }
            ll res = 0;
            res += stoi(s);
            return res;
        }
        void xuat(){
            file.open("DATA.in");
            while(file >> s){
                sum += Sum(s);
            }
            cout << sum << endl;
        }
};

class SoKhacNhauTrongFile: File{
    private:
        ifstream file;
    public:
        void xuat(){
            file.open("DATA.in");
            int n;
            map <int, int> mp;
            while(file >> n){
                mp[n]++;
            }
            for(auto x : mp){
                cout << x.first << " " << x.second << endl;
            }
        }
};

class LietKeTuKhacNhau: File{
    private:
        ifstream file;
    public:
        void xuat(){
            file.open("VANBAN.in");
            string s;
            set <string> st;
            while(file >> s){
                for(int i = 0; i < s.length(); i++){
                    s[i] = tolower(s[i]);
                }
                st.insert(s);
            }
            for(auto x : st){
                cout << x << endl;
            }
        }
};

class HopVaGiao2File: File{
    private:
        ifstream file1;
        ifstream file2;
        set <string> st1, st2;
        map <string, int> mp;
    public:
        void xuat(){
            file1.open("DATA1.in");
            while(file1 >> s){
                transform(s.begin(), s.end(), s.begin(), ::tolower);
                st1.insert(s);
                }
            file1.close();
            file2.open("DATA2.in");
            while(file2 >> s){
                transform(s.begin(), s.end(), s.begin(), ::tolower);    
                st2.insert(s);
            }
            file2.close();
            //Hợp
            for(auto x : st1) mp[x]++;
            for(auto x : st2) mp[x]++;
            for(auto x : mp)
                cout << x.first << " ";
            cout << endl;

            //Giao
            for(auto x : mp){
                if(x.second > 1) {
                    cout << x.first << " ";
                } 
            }
        }
};

class LopIntset: File{
    private:
        ifstream file;
        int n, m;
        set <int> st1, st2;
        map <int, int> mp;
    public:
        void xuat(){
            file.open("DATA.in");
            file >> n >> m;
            int x;
            for(int i = 0; i < n; i++){
                file >> x;
                st1.insert(x);
            }
            for(int i = 0; i < m; i++){
                file >> x;
                st2.insert(x);
            }
            
            //Hợp
            // for(auto x : st1) mp[x]++;
            // for(auto x : st2) mp[x]++;
            // for(auto x : mp)
            //     cout << x.first << " ";
            // cout << endl;

            //Giao
            for(auto x : mp){
                if(x.second > 1) {
                    cout << x.first << " ";
                } 
            }
        }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    SaoChepTepTin a;
    return 0;
}