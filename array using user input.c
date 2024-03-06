
#include <stdio.h>
#include <stdlib.h>

void main(){
	int a[100];
	int i,n;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("Enter the values\n");
	for(i=0;i<n;i++){
		printf("%d\n",a[i]);
	}
}
