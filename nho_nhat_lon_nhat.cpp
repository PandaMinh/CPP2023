#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
// by sunmin

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int m, s;
    cin >> m >> s;
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
    return 0;
}