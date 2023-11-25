#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
// by sunmin

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n, m; 
        cin >> n >> m;
        int a[n][m];
        for(int i = 0; i < n;i++)
            for(int j = 0; j < m;j++) 
                cin >> a[i][j];
        int rank = m;
        for(int i = 0; i < rank; i++){
            if(a[i][i]){
                for(int j = 0; j < n; j++){
                    if(i != j){
                        double mult = (double) a[j][i] / a[i][i];
                        for(int k = 0; k < rank; k++){
                            a[j][k] -= mult * a[i][k];
                        }
                    }
                }
            }
            else{
                bool reduce = true;
                for(int j = i + 1; j < n; j++){
                    if(a[j][i]){
                        for(int k = 0; k < rank; k++){
                            swap(a[i][k], a[j][k]);
                        }
                        reduce = false;
                        break;
                    }
                }
                if(reduce){
                    rank--;
                    for(int j = 0; j < n; j++){
                        a[j][i] = a[j][rank];
                    }
                }
                i--;
            }
        }
        cout << rank << endl;
    }
    return 0;
}