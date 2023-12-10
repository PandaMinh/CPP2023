#include <stdio.h>

int main(){
    int T;
    scanf("%d", &T);
    while(T--){
		int n;
		scanf("%d", &n);
		int a[100005];
		for(int i = 0; i < n; i++){
			scanf("%d", &a[i]);
		}
		int check = 1;
		int mod = a[0] % 6;
		for(int i = 1; i < n; i++){
			if(a[i] % 6 != mod){
				check = 0;
				break;
			}
		}
		if(check) printf("YES\n"); else printf("NO\n");
    }
    return 0;
}