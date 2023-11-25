#include<iostream>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        char n;
        cin >> n;
        if('A' <= n && n <= 'Z')
            cout << static_cast<char>(n + 'a' - 'A') << endl;
        else
            cout << static_cast<char>(n - 'a' + 'A') << endl;
    }
    return 0;
}