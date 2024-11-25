#include <stdio.h>

int main()
{
	int a, b;
	printf("nhap 2 so nguyen duong bat ki : ");
	scanf("%d %d", &a, &b);
	int A = a; 
    int B = b; 
    while (b!=0)
	{
        int temp = b;
        b = a % b;
        a = temp;
    }
	 printf("UCLN cua %d va %d la : %d", A, B, a);
	return 0;
}

