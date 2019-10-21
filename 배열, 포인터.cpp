#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
#define SIZE 6

int main() {
	int ary[SIZE] = {0};

	srand((unsigned)time(NULL));

	for (int i = 0; i < 1000; i++) {
		++ary[rand() % 6];
	}

	for (int i = 0; i < SIZE; i++) {
		printf("%3d    %3d\n", i, ary[i]);
	}

	return 0;
}
*/

/*
#define SIZE 10

int main() {

	int ary[SIZE] = {};

	srand((unsigned)time(NULL));

	for (int i = 0; i < SIZE; i++) {
		ary[i] = rand() % 100;

		printf("%d\n", ary[i]);
	}

	int first = ary[0];

	for (int i = 0; i < SIZE; i++) {
		if (ary[i] > first) { // <: 최소, >: 최대
			first = ary[i];
		}
	}

	printf("%d", first);

	return 0;
}
*/

/*
void print_array(const int array[]) { // const: 원본 배열 수정 금지
	for (int i = 0; i < 5; i++) {
		printf("%d", array[i]);
	}
}

int main() {
	int ary[5] = {1, 2, 3, 4, 5};

	print_array(ary);

	return 0;
}
*/

/*
int main(void)
{
	int a[] = { 10, 20, 30, 40, 50 };
	printf("a = %u\n", a);
	printf("a + 1 = %u\n", a + 1);
	printf("*a = %d\n", *a);
	printf("*(a + 1) = %d\n", *(a + 1));

	int ArraySize = 0;

	
	for (int i = 0; i < 5; i++) {
		ArraySize += sizeof(a[i]);

		printf("%d\n", ArraySize);
	}
	

	return 0;
}
*/

/*
int main(void)
{
	int i = 10;
	int *pd = NULL;

	pd = &i;

	printf("%d\n", pd);

	*pd++;

	printf("%d", *pd);

	return 0;
}
*/

int main(void)
{
	int i = 10;
	int *pi = &i;

	printf("i = %d,  pi = %p\n", i, pi);
	(*pi)++; // == ++*p
	printf("i = %d,  pi = %p\n", i, pi);

	printf("i = %d,  pi = %p\n", i, pi);
	*pi++; // == *++pi
	printf("i = %d,  pi = %p\n", i, pi);

	printf("%d\n", *(pi + 2));

	long a;
	printf("%d", sizeof(a));

	return 0;
}
