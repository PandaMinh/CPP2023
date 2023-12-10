#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
// by sunmin

void rev(int a[], int l, int r){
    for(int i = l; i <= l + (r - l) / 2; i++){
        swap(a[i], a[r - i + l]);
    }
}

void out(int a[], int n){
    for(int i = 1; i <= n; i++){
        cout << a[i] << " ";
    }
    cout << endl;
}

void pre(int a[], int n){
    int p, max, pmax;
    for(int i = n - 1; i > 0; i--){
        if(a[i] > a[i + 1]){
            p = i;
            break;
        }
    }
    max = 0;
    for(int i = n; i > p; i--){
        if(a[i] > a[p])
            continue;
        if(a[i] >= max){
            max = a[i];
            pmax = i;
        }
    }
    swap(a[p], a[pmax]);
    rev(a, p + 1, n);
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n + 1] = {};
        for(int i = 1; i <= n; i++){
            cin >> arr[i];
        }
        pre(arr, n);
        out(arr, n);
    }
    return 0;
}