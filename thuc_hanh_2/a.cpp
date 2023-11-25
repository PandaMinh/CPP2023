#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
// by sunmin

bool cmp(double a, double b){
    return a > b;
}

bool cmp1(int a, int b){
    return a < b;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n;
    cin >> n;
    double s[100005] = {};
    double a[100005] = {};
    for(ll i = 0; i < n; i++){
        int k;
        cin >> k;
        double x, y;
        cin >> x >> y;
        s[i] = 0.7 * x + 0.3 * y;
        a[i] = s[i];
    }
    sort(s, s+n, cmp);
    if(n >= 7){
    int cnt = 0;
    for(int i = 0; i < 7; i++){
        if(s[i] != s[i + 1])
            cnt++;
    }
    int b[10] = {};
    int h = 0;
    // cout << endl;
    int tmp;
    for(int i = 0; i < n; i++){
        //if((a[i] == s[0] || a[i] == s[1] || a[i] == s[2] || a[i] == s[3] || a[i] == s[4] || a[i] == s[5] || a[i] == s[6]) && cnt < 7){
        //     cout << i + 1 << " ";
        //     cnt++;
        // }
        if(a[i] == s[0]){
            b[h++] = i + 1;
            tmp = i + 1;
            break;
        }
    }
    if(s[0] != s[1]){
        for(int i = 0; i < n; i++){
            if(a[i] == s[1]){
                b[h++] = i + 1;
                tmp = i + 1;
                break;
            }
        }
    }
    else if(s[0] == s[1]){
        for(int i = tmp; i < n; i++){
            if(a[i] == s[1]){
                b[h++] = i + 1;
                tmp = i + 1;
                break;
            }
        }
    }
    if(s[1] != s[2]){
        for(int i = 0; i < n; i++){
            if(a[i] == s[2]){
                b[h++] = i + 1;
                tmp = i + 1;
                break;
            }
        }
    }
    else if(s[1] == s[2]){
        for(int i = tmp; i < n; i++){
            if(a[i] == s[2]){
                b[h++] = i + 1;
                tmp = i + 1;
                break;
            }
        }
    }
    if(s[2] != s[3]){
        for(int i = 0; i < n; i++){
            if(a[i] == s[3]){
                b[h++] = i + 1;
                tmp = i + 1;
                break;
            }
        }
    }
    else if(s[2] == s[3]){
        for(int i = tmp; i < n; i++){
            if(a[i] == s[3]){
                b[h++] = i + 1;
                tmp = i + 1;
                break;
            }
        }
    }
    if(s[3] != s[4]){
        for(int i = 0; i < n; i++){
            if(a[i] == s[4]){
                b[h++] = i + 1;
                tmp = i + 1;
                break;
            }
        }
    }
    else if(s[3] == s[4]){
        for(int i = tmp; i < n; i++){
            if(a[i] == s[4]){
                b[h++] = i + 1;
                tmp = i + 1;
                break;
            }
        }
    }
    if(s[4] != s[5]){
        for(int i = 0; i < n; i++){
            if(a[i] == s[5]){
                b[h++] = i + 1;
                tmp = i + 1;
                break;
            }
        }
    }
    else if(s[5] == s[4]){
        for(int i = tmp; i < n; i++){
            if(a[i] == s[5]){
                b[h++] = i + 1;
                tmp = i + 1;
                break;
            }
        }
    }
    if(s[5] != s[6]){
        for(int i = 0; i < n; i++){
            if(a[i] == s[6]){
                b[h++] = i + 1;
                tmp = i + 1;
                break;
            }
        }
    }
    else if(s[1] == s[2]){
        for(int i = tmp; i < n; i++){
            if(a[i] == s[6]){
                b[h++] = i + 1;
                tmp = i + 1;
                break;
            }
        }
    }
    sort(b, b+h, cmp1);
    for(int i = 0; i < 7; i++){
        cout << b[i] << " ";
    }
    }
    else{
        for(int i = 0; i < n; i++){
            cout << i + 1 << " ";
        }
    }
    return 0;
}