#include <stdio.h>
#include <stdlib.h>



int main() {
	int n;
	printf("enter n(0-20):");
	scanf("%d",&n);
	if(n<0||n>20){
		printf("n must be between 0 and 20.\n");
		return 0;
	}
	for (int i=2;i<=n;i++)
	printf("%d!=%||u\n",n);
	return 0;
}