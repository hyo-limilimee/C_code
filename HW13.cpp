#include <stdio.h>
#include <string.h>
#pragma warning(disable:4996)

int main()
{
	char f_name[100], name[100];

	printf("#���� �Է��Ͻÿ� : ");
	scanf("%s", f_name);
	printf("#�̸��� �Է��Ͻÿ� :");
	scanf("%s", name);

	printf("% s % s\n", f_name, name);
	printf("%*d", strlen(f_name), strlen(f_name));
	printf(" %*d", strlen(name), strlen(name));

	return 0;
}
