#include <stdio.h>
#include <stdlib.h>
double a, b, c,d,e;
int main(void)
{
	printf("�п�J�C�Ѧ�p���{:");
	scanf("%lf.2", &a);
	printf("�п�J�C�[�ڨT�o������:");
	scanf("%lf.2", &b);
	printf("�п�J�C�[�ڨT�o��p���{��:");
	scanf("%lf.2", &c);
	printf("�п�J�C�Ѫ������O:");
	scanf("%lf.2", &d);
	printf("�п�J�C�Ѫ��L���O:");
	scanf("%lf.2", &e);
	printf("�C��}��(�`��)�O��:%.2lf��\n",a/c*b+d+e);
	system("pause");
	return 0;
}