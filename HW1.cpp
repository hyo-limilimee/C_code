#include<stdio.h>

void printAge(int);        //printAge() �Լ��� �����
void printHeight(double); //printHeight() �Լ��� �����


int main()
{
	char name[20] = "��ȿ��";
	int age = 21;
	double height = 165.8;

	printf("���� : %s\n", name);
	printAge(age);
	printHeight(height);

	return 0;
}

//printAge() �Լ��� ���Ǻ�
void printAge(int age)
{
	printf("���� : %d\n", age);
	return;

}

//printHeight() �Լ��� ���Ǻ�
void printHeight(double height)
{
	printf("Ű : %.1lf", height);
	return;
}
