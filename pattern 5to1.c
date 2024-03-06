#include <stdio.h>
#include <stdlib.h>

void main(){
	int i,j,n;
	scanf("%d",&n);
	for(i=5;i>=n;i--){
		for(j=0;j<i;j++){
			printf("* ");
		}
		printf("\n");
	}
}
