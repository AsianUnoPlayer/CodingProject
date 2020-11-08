#include <stdio.h>

int main()
{
	int sum;

	for (int num = 0; num < 1000; num++) {
		if (num % 3 == 0 || num % 5 == 0){
			sum = sum + num;
		}
	}
	printf("%d\n", sum);
}	
