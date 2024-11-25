#include <stdio.h>

int main()
{
	int num, i;
	for(num=1;num<10;num++){
			while(num > 0 && num < 10){
		printf("bang cuu chuong cua %d là :\n", num);
		for(i=1;i<=10;i++){
			printf("%d * %d = %d\n", num, i, num*i);
		}break;
	}
	}

	return 0;
}

