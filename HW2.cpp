#include<stdio.h>


int main()
{
	int money = 278970;
	int m50000, m10000, m5000, m1000, m500, m100, m50, m10;

	m50000 = money / 50000;
	money = money % 50000;

	m10000 = money / 10000;
	money = money % 10000;

	m5000 = money / 5000;
	money = money % 5000;

	m1000 = money / 1000;
	money = money % 1000;

	m500 = money / 500;
	money = money % 500;

	m100 = money / 100;
	money = money % 100;

	m50 = money / 50;
	money = money % 50;

	m10 = money / 10;
	money = money % 10;

	printf("50000���� => %d��\n10000���� => %d��\n5000���� => %d��\n1000���� => %d��\n500���� => %d��\n100���� => %d��\n50���� => %d��\n10���� => %d��", m50000, m10000, m5000, m1000, m500, m100, m50, m10);

	return 0;
}