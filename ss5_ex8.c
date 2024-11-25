#include <stdio.h>

int main() {
    int a, b;
    printf("Nhap 2 so nguyen duong bat ki : ");
    scanf("%d %d", &a, &b);
    int A = a;
    int B = b;
    while (b != 0)
	{
        int temp = b;
        b = a % b;
        a = temp;
    }
    int BCNN = (A * B) / a;
    printf("BCNN cua %d va %d là : %d ", A, B, BCNN);
    return 0;
}

