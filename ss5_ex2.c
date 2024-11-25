#include <stdio.h>

int main()
{
	int i;
	printf("nhap vao so nguyen duong bat ki : ");
	scanf("%d", &i);
	while(i<1){
		printf("so khong hop le!!!\n");
		printf("nhap vao so nguyen duong bat ki : ");
		scanf("%d", &i);
	}
	int sum = (i * (i+1)) / 2;
	printf("tong tu 1 den %d la %d", i, sum);
	return 0;
}

