#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
// by sunmin

int check(int arr[], int n){
    int i, j;
    int *a = new int[n];
    for (i = 0; i < n; i++)
        a[i] = 1;
    for (i = 1; i < n; i++)
        for (j = 0; j < i; j++)
            if (arr[i] > arr[j] && a[i] < a[j] + 1)
                a[i] = a[j] + 1;
    int *b = new int[n];
    for (i = 0; i < n; i++)
        b[i] = 1;
    for (i = n - 2; i >= 0; i--)
        for (j = n - 1; j > i; j--)
            if (arr[i] > arr[j] && b[i] < b[j] + 1)
                b[i] = b[j] + 1;
    int maz = a[0] + b[0] - 1;
    for (i = 1; i < n; i++)
        if (a[i] + b[i] - 1 > maz)
            maz = a[i] + b[i] - 1;
    return maz;
}

void slove(){
    int n;
    cin >> n;
    int a[100005];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cout << check(a, n);
}

int main(){
    int t; 
    cin >> t;
    while (t--){
        slove();
        cout << endl;
    }
}