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
        int d, m;
        cin >> d >> m;
        switch (m)
        {
        case 1:
            if(d > 0 && d < 20)
                cout << "Ma Ket" << endl;
            else    
                cout << "Bao Binh" << endl;
            break;
        case 2:
            if(d > 0 && d < 19)
                cout << "Bao Binh" << endl;
            else    
                cout << "Song Ngu" << endl;
            break;
        case 3:
            if(d > 0 && d < 21)
                cout << "Song Ngu" << endl;
            else    
                cout << "Bach Duong" << endl;
            break;
        case 4:
            if(d > 0 && d < 20)
                cout << "Bach Duong" << endl;
            else    
                cout << "Kim Nguu" << endl;
            break;
        case 5:
            if(d > 0 && d < 21)
                cout << "Kim Nguu" << endl;
            else    
                cout << "Song Tu" << endl;
            break;
        case 6:
            if(d > 0 && d < 21)
                cout << "Song Tu" << endl;
            else    
                cout << "Cu Giai" << endl;
            break;
        case 7:
            if(d > 0 && d < 23)
                cout << "Cu Giai" << endl;
            else    
                cout << "Su Tu" << endl;
            break;
        case 8:
            if(d > 0 && d < 23)
                cout << "Su Tu" << endl;
            else    
                cout << "Xu Nu" << endl;
            break;
        case 9:
            if(d > 0 && d < 23)
                cout << "Xu Nu" << endl;
            else    
                cout << "Thien Binh" << endl;
            break;
        case 10:
            if(d > 0 && d < 23)
                cout << "Thien Binh" << endl;
            else    
                cout << "Thien Yet" << endl;
            break;
        case 11:
            if(d > 0 && d < 23)
                cout << "Thien Yet" << endl;
            else    
                cout << "Nhan Ma" << endl;
            break;
        default:
            if(d > 0 && d < 22)
                cout << "Nhan Ma" << endl;
            else    
                cout << "Ma Ket" << endl;
            break;
        }
    }
    return 0;
}

