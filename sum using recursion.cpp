#include<stdio.h>
#include<math.h>
int sumofdigits(int num);
int main()
{
	int num,sum;
	printf("enter number to find of sum of digits");
	scanf("%d",&num);
	sum = sumofdigits(num);
	printf("sum of digits of %d=%d ",num,sum);
	return 0;
}
int sumofdigits(int num)
{
	if(num == 0)
	return 0;
	return((num % 10) + sumofdigits(num / 10));
		}