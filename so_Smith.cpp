#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
#define lmt 1000006
// by sunmin

int a[lmt + 1] = {};

void Erathone(){
    a[0] = a[1] = 1;
    for(int i = 2; i <= sqrt(lmt); i++){
        if(a[i] == 0){
            for(int j = i * i; j <= lmt; j += i){
                a[j] = 1;
            }
        }
    }
}

int sumCs(int n){
    int sum = 0;
    while(n != 0){
        sum += n%10;
        n /= 10;
    }
    return sum;
}

int uocCs(int n){
    int s = 0;
    for(int i = 2; i <= sqrt(n); i++){
        while(n % i == 0){
            s += sumCs(i);
            n /= i;
        }
    }
    if(n != 1) 
        s += sumCs(n);
    return s;
}

int main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    Erathone();
    int t; 
    cin >> t;
    while(t--)	{
        int n; 
        cin >> n;
        if(a[n] == 0){
            cout << "NO" << endl;
        } 
        else{
            if(sumCs(n) == uocCs(n)) 
                cout << "YES" << endl;
            else 
                cout << "NO" << endl;
        }
    }
    return 0;
}