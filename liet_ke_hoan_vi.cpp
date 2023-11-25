#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
// by sunmin

int n;
int a[20] = {};
int b[20] = {};

void display(){
    for(int i = 1; i <= n; i++){
        cout << a[i];
    }
    cout << " ";
}

void back_track(int pos){
    for(int i = 1; i <= n; i++){
        if(b[i] == 0){
            a[pos] = i;
            b[i] = 1;
            if(pos == n)
                display();
            else    
                back_track(pos + 1);
            b[i] = 0;
        }
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