#include <stdio.h>
#include <stdlib.h>
double a, b, c,d,e;
int main(void)
{
	printf("請輸入每天行駛里程:");
	scanf("%lf.2", &a);
	printf("請輸入每加侖汽油的價格:");
	scanf("%lf.2", &b);
	printf("請輸入每加侖汽油行駛里程數:");
	scanf("%lf.2", &c);
	printf("請輸入每天的停車費:");
	scanf("%lf.2", &d);
	printf("請輸入每天的過路費:");
	scanf("%lf.2", &e);
	printf("每日開車(節省)費用:%.2lf元\n",a/c*b+d+e);
	system("pause");
	return 0;
}