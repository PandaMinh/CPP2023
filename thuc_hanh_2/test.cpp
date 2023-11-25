#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
// by sunmin

struct bc{
    int y, stt;
};

bool cmp(bc a, bc b){
    if(a.y == b.y)
        return a.stt > b.stt;
    return a.y < b.y;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, m, k;
    cin >> m >> n;
    struct bc a[n + 1];
    for(int i = 0; i <= n; i++){
        a[i].stt = i;
        a[i].y = 0;
    }
    for(int i = 0; i < m; i++){
        cin >> k;
        a[k].y++;
    }
    sort(a+1, a+n+1, cmp);
    int x = n;
    while(a[x].y == a[n].y && x > 0)
        x--;
    if(x == 0 || a[x].y == 0)
        cout << "NONE";
    else    
        cout << a[x].stt;
    return 0;
}