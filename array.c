#include <stdio.h>
#include <stdlib.h>
#include<conio.h>

int main(void) {
	int a[5];
	int i;
	for(i=0;i<5;i++){
		scanf("%d",&a[i]);
	}
	printf("Entered values are\n");
	for(i=0;i<5;i++){
		printf("%d\n",a[i]);
	}
	return EXIT_SUCCESS;
}

