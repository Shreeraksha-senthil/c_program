#include <stdio.h>
#include <stdlib.h>

void main(){
	int a[100],n,i,sum=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	printf("Enter the values\n");
	for(i=0;i<n;i++){
		sum=sum+a[i];
	}
	printf("%d",sum);
}
