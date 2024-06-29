#include<stdio.h>
#include<string.h>

int check(char* n) {
    int l = strlen(n);
    for (int i = 0; i < l / 2; i++) {
        if (n[i] != n[l - 1 - i]) {
            return 0;
        }
    }
    return 1;
}


int main(){
	int t;
	scanf("%d", &t);
	getchar();
	while(t--){
		char s[51];
		gets(s);
		if (check(s)) printf("YES\n");
		else printf("NO\n");
	}
}
