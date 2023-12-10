#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
// by sunmin

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        map <int, int> mp2;
        map <int, int> mp3;
        map <int, int> mp4;
        map <int, int> mp5;
        map <int, int> mp6;
        map <int, int> mp7;
        map <int, int> mp8;
        for(int i = 0; i < n; i++){
            int thu;
            string tiet, tuan;
            cin >> thu;
            cin.ignore();
            getline(cin, tiet);
            getline(cin, tuan);
            if(thu <= 10)
                cout << 1;
        }
    }
    return 0;
}