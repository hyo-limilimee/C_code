#include<stdio.h>

int main()
{
	char name[100];

	printf("�̸��� �Է��Ͻÿ� : ");
	gets_s(name);
	printf("\"%s\"\n\"%20s\"\n\"%-20s\"", name, name, name);

	return 0;
}