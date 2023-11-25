#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
// by sunmin

int b[1000005];

int main(){
    vector<int> a;
    char x = ' ';
    while(x != '\n'){
        int z;
        cin >> z;
        a.push_back(z);
        b[z]++;
        x = getchar();
    } 
    for(int i = 0; i < a.size(); i++){
        if(b[a[i]]){
            cout << a[i] << " " << b[a[i]] << endl;
            b[a[i]] = 0;
        }
    }
    return 0;
}