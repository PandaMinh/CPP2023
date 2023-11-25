#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
// by sunmin

int n, k;
int a[20] = {};

void display(){
    for(int i = 1; i <= k; i++){
        cout << a[i];
    }
    cout << " ";
}

void back_track(int pos){
    for(int i = a[pos - 1] + 1; i <= n + pos - k; i++){
        a[pos] = i;
        if(pos == k)
            display();
        else    
            back_track(pos + 1);
    }
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        cin >> n >> k;
        back_track(1);
        cout << endl;
    }
    return 0;
}