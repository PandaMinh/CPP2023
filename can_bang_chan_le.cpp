#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
// by Minh

int check(int n){
    int chan = 0, le = 0;
    while(n > 0){
        if((n % 10) % 2 == 0)
            chan++;
        else 
            le++;
        n /= 10;
    }
    if(chan == le) 
        return 1;
    return 0;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    int m = 1;
    for(int i = pow(10, n - 1); i <= pow(10, n) - 1;i++){
        if(check(i) == 1 && m <= 9){
            cout << i << ' ';
            m++;
        }
        else if(check(i) == 1 && m == 10){
            cout << i << endl;
            m = 1;
        }
    }
    return 0;
}