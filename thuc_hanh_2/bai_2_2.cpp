#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
// by sunmin

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    if(n == 1)
        cout << 45;
    else if(n == 2)
        cout << 495;
    else if(n == 3)
        cout << 49500;
    else if(n == 4)
        cout << 495000;
    else if(n == 5)
        cout << 49500000;
    else if(n == 6)
        cout << 495000000;
    else if(n == 7)
        cout << 49500000000;
    else if(n == 8)
        cout << 495000000000;
    else if(n == 9)
        cout << 49500000000000;
    else
        cout << 495000000000000;
        
    return 0;
}