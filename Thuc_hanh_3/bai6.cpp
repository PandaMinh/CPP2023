#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
// by sunmin

int n = 0;
int a[30] = {};

void display(){
    for(int i = 1; i <= n; i++){
        cout << a[i];
    }
    cout << " ";
}

void back_track(int pos){
    for(int i = 0; i < 2; i++){
        a[pos] = i;
        if(pos == n)
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
        cin >> n;
        back_track(1);
        cout << endl;
    }
    return 0;
}