#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    cin.ignore();
    while(t--){
        string s;
        cin>>s;
        int n=s.length();
        int sum=0;
        for(int i=0;i<n;i++){
            sum= sum*10 + s[i]-'0';
            sum%=11;
        }
        cout<< (sum==0) ?"1":"0";
        cout<<endl;
    }
}