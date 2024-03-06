#include <stdio.h>
#include <stdlib.h>

int main(){
	int n,i,c,sum=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%d",&c);
		sum=sum+c;
	}
	printf("%d",sum);
	return 0;
}
