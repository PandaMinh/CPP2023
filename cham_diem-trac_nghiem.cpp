#include<iostream>
#include<string>
#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        double sum = 0;
        int m = 0;
        if(n == 101){
            char s[15] = {'A','B','B','A','D','C','C','A','B','D','C','C','A','B','D'};
            for(int i = 0; i < 15; i++){
                char x;
                cin >> x;
                if(x == s[i]) 
                    m++;
            }
        }
        else if(n == 102){
            char s[15] = {'A','C','C','A','B','C','D','D','B','B','C','D','D','B','B'};
            for(int i = 0; i < 15; i++){
                char x;
                cin >> x;
                if(x == s[i]) 
                    m++;
            }
        }
        cout << fixed << setprecision(2) << m * 10. / 15 << endl;
    }
}