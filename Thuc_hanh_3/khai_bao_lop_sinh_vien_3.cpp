#include <bits/stdc++.h>

using namespace std;

class SinhVien{
    private:
        string msv, name, lop, date;
        float gpa;
    public:
        SinhVien() {};
        friend istream& operator >> (istream& in, SinhVien &a); 
        friend ostream& operator << (ostream& out, SinhVien a); 
};
vector<string> v;
istream& operator >> (istream& in, SinhVien &a){
    string tmp;
    a.msv = "B20DCCN001";
    getline(in, a.name);
    for(int i = 0; i < a.name.size(); i++) 
        a.name[i] = tolower(a.name[i]);
    stringstream ss(a.name);
    while(ss >> tmp) 
        v.push_back(tmp);
    for(int i = 0; i < v.size(); i++) 
        v[i][0] = toupper(v[i][0]);
    in >> a.lop;
    in >> a.date;
    if(a.date[1] == '/') a.date.insert(0, "0");
    if(a.date[4] == '/') a.date.insert(3, "0");
    in >> a.gpa;
    return in;
}

ostream& operator << (ostream& out, SinhVien a){
    cout << a.msv << " ";
    for(int i = 0; i < v.size(); i++) 
        cout << v[i] << " ";
    cout << a.lop << " " << a.date << " " << fixed << setprecision(2) << a.gpa;
    return out;
}

int main(){
    SinhVien a;
    cin >> a;
    cout << a;
    return 0;
}