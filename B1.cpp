#include<stdio.h>
#include<string.h>
 
int main (){
	int t;
	scanf("%d", &t);
	getchar();
	while(t--){
		char s[501];
		gets(s);
		int sum = 0;
		int l = strlen(s);
		for(int i=0; i<l; i++){
			sum +=s[i]-'0';
		}
		if (sum%3==0) printf("YES\n");
		else printf("NO\n");
	} 
} 
