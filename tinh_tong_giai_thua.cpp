#include<bits/stdc++.h>

using namespace std;

int main(){
    long long n;
    cin >> n;
    long long sum = 0;
    long long x = 1;
    for(int i = 1; i <= n; i++){
        x = x * i;
        sum += x; 
    }
    cout << sum;
}