#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
// by sunmin

string truxau(string a,string b){
    string c = "";
    int n1 = a.size(), n2 = b.size(), muon = 0, hieu;
    if(n1 > n2) 
        b.insert(0, n1 - n2, '0');
    if(n2 > n1) 
        a.insert(0, n2 - n1, '0');
    if(a < b) 
        swap(a, b);
    for(int i = a.size() - 1; i >= 0; i--){
        hieu=(a[i] - 48) - (b[i] - 48) - muon;
        if(hieu < 0){
            hieu += 10;
            muon = 1;
        }
        else 
            muon=0;
        c = char(hieu + 48) + c;
    }
    while(c.size() > 1 && c[0] == '0')
        c.erase(0, 1);
    return c;
}

string chiaxau(string a,string b){
    string div = "", tg = "", tg1 ="";
    string luu;
    int i, n1, n2, dem;
    n1 = a.size();
    n2 = b.size();
    if((n1 < n2)||(n1 == n2) && (a < b)){
        return "0";
    }
    tg = a.substr(0, n2);
    for(i = n2 - 1; i < a.size(); i++){
        dem = 0;
        if(i == n2 - 1) tg = tg;
        else tg = tg + a[i];
        while(tg.size() > 1 && tg[0] == '0') 
            tg.erase(0, 1);
        while(tg.size() > n2 || tg.size() == n2 && tg >= b){
            dem++;
            tg = truxau(tg, b);
        }
        luu = char(dem + 48);
        div = div + luu;
    }
    return div;
}

int main(){
    ios_base::sync_with_stdio(0); 
    cin.tie(NULL); cout.tie(NULL);
    int t; 
    cin>>t;
    cin.ignore();
    while(t--) {
        string a, b, c;
        cin >> a >> b;
        c = chiaxau(a, b);
        if(c[0] == '0' && c.size() > 1)
            c.erase(0, 1);
        cout << c << endl;;
    }
}