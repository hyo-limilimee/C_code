#include<stdio.h>
#pragma warning(disable:4996)

int main()
{
	int time, sec, min, hour;

	printf("�ʸ� �Է��ϼ��� : ");
	 scanf("%d", &time);
	
	sec = time;
	min = sec / 60;
	hour = min / 60;
	min = min % 60;
	sec = sec % 60;
	
	printf("%d�ʴ� %d�ð� %d�� %d�� �Դϴ�.", time, hour, min, sec);
	
	return 0;
}
