#include<stdio.h>
#include<math.h>

int cnt (int n){
	int dem = 0;
	while(n)
	{
		dem++;
		n /= 10;
	}
	return dem;
}
int UCLN(int a, int  b){
	int r = a % b;
	while(r != 0)
	{
		a = b;
		b = r;
		if(b == 0)
		{
			return b;
		}
		r = a % b;
	}
	return b;
}

int main(){
	int n;
	scanf("%lld", &n);
	int x, y;
	if(cnt(n) % 2 == 0)
	{
		int k = cnt(n) / 2;
		int l = pow(10, k);
		x = n / l;
		y = n % l;
	}
	else 
	{
		int k = cnt(n) - cnt(n) / 2; 
		int p = pow(10, k+1), q = pow(10, k);
		x = n / p;
		y = n % q;
	}	
	printf("%d", UCLN(x, y));
}
