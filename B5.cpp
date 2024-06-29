#include<stdio.h>
#include<string.h>

struct sub{
	char id[20];
	char name[50];
	char how[20];
}; 
void arr  (struct sub ds[], int n){
	struct sub temp;
	for (int i=0; i<n-1; i++){
		for (int j=0; j<n-1-i; j++){
			if (strcmp(ds[j].name, ds[j+1].name) > 0){
				temp = ds[j];
				ds[j] = ds[j+1];
				ds[j+1] =temp;
			} 
		} 
	} 
}
int main (){
	int n;
	scanf ("%d",&n);
	struct sub ds[n];
	for (int i=0; i<n; i++){
		scanf ("%s", ds[i].id);
		scanf ("%s", ds[i].name) ;
		scanf ("%s", ds[i].how);
	}
	arr (ds,n);
	for (int i=0; i<n; i++){
		 printf("%s, %s, %s\n", ds[i].id, ds[i].name, ds[i].how);
	}
}
