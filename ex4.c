#include <stdio.h>
#include <stdlib.h>


int main() {
	int n;long long sum=0;
	printf("enter N:");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)sum +=i;
	printf("sum=%||d\n",sum);
	return 0;
}