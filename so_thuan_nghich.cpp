#include<iostream>

using namespace std;

int check(long long n){
    int a[20] = {};
    int m = 0;
    while(n > 0){
        a[m++] = n % 10;
        n /= 10;
    }
    for(int i = 0; i < m; i++){
        if(a[i] != a[m - i - 1]) return 0;
    }
    return 1;
}

int main(){
    long long t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        if(check(n) == 1) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}