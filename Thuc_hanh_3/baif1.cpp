#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
// by sunmin

map <string, string> mp;

int num = 1;

class Type{
    public:
        string ma, ten;
        friend istream& operator >>(istream& is, Type& a){
            a.ma = "TL";
            a.ma += string(3 - to_string(num).length(), '0') + to_string(num);
            getline(is, a.ten);
            mp[a.ma] = a.ten;
            num++;
            return is;
        }
};

int j = 1;

int cv(string& s){
    int res = 0;
    for(int i : s)
        res = res * 10 + (i - '0');
    return res;
}

class Film{
    public:
        string ma, ten, nc, tap, tl, m;
        int ngay, thang, nam, sotap;
        friend istream& operator >> (istream& is, Film& a){
            a.m = "P";
            a.m += string(3 - to_string(j).length(), '0') + to_string(j);
            j++;
            string s1, s2;
            getline(is, a.ma);
            a.tl = 
            getline(is, a.nc);

        }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    
    return 0;
}