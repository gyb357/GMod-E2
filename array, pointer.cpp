#include <stdio.h>

// 배열[행][열]
// 행렬에 완전히 초기화 되지 않으면 나머지는 0이 됨
/*
#define YEARS 3 // 행
#define PRODUCTS 5 // 열

int sum(int grade[][PRODUCTS]);

int main() {
	int sales[YEARS][PRODUCTS] = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} };
	int total_sale;

	total_sale = sum(sales);

	printf("총 매출은 %d 입니다.\n", total_sale);

	return 0;
}

int sum(int grade[][PRODUCTS]) {
	int y, p;
	int total = 0;

	for (y = 0; y < YEARS; y++) {
		for (p = 0; p < PRODUCTS; p++) {
			total += grade[y][p];
		}
	}

	return total;
}
*/

/*
void display(int image[8][16]) {
	for (int r = 0; r < 8; r++) {
		for (int c = 0; c < 16; c++) {
			if (image[r][c] == 0) {
				printf("*");
			} else {
				printf("_");
			}
		}

		printf("\n");
	}
}

void inverse(int img[8][16]) {
	for (int r = 0; r < 8; r++) {
		for (int c = 0; c < 16; c++) {
			if (img[r][c] == 0) {
				img[r][c] = 1;
			} else {
				img[r][c] = 0;
			}
		}
	}
}

int main() {
	int image[8][16] = {
		{1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
		{1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
		{1, 1, 1, 0, 0, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
		{1, 1, 1, 0, 0, 0, 1 ,1, 0, 0, 1, 1, 1, 1, 1, 1},
		{1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1, 1, 1},
		{1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1, 1},
		{1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 1, 1},
		{1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1},
	};

	printf("변환 전 이미지\n");

	display(image);
	inverse(image);

	printf("\n\n 변환 후 이미지\n");

	display(image);

	return 0;
}
*/

// 포인터는 주소값을 가지고 있는 변수
// 변수의 형에 따라 메모리 공간이 달라진다
// 포인터 변수는 변수앞에 *를 붙혀준다
// 포인터 변수 자체 크기는 4바이트로 일정하다
/*
	int i = 10;
	int *p;
	p = &i;
*/
/*
int main() {
	int i = 10;
	char c = 69;
	float f = 12.3;

	printf("i의 주소= %u\n", &i);
	printf("c의 주소= %u\n", &c);
	printf("f의 주소= %u\n", &f);

	return 0;
}
*/

/*
int main() {
	int i = 10;
	double f = 12.3;

	int *pi = NULL;
	double *pf = NULL;

	pi = &i;
	pf = &f;

	printf("%u %u\n", pi, &i);
	printf("%u %u\n", pf, &f);

	return 0;
}
*/

// 간접 참조 연산자: 포인터가 가르키고 있는 값을 가져오는 연산자, 지정된 위치에서 포인터의 타잎에 따ㅏ라
/*
int i = 10;
int *p;
p = &i;
printf("%u", *p)
*/

int main() {

	int i = 3000;
	int *p = NULL;

	p = &i;

	printf("i = $d\n", i); // 변수 값 출력
	printf("&i = %u\n\n", &i); // 변수의 주소 출력

	printf("p = %u\n", p); // 포인터의 값 출력
	printf("p = %d\n", *p); // 포인터를 통한 간접 참조 값 출력

	return 0;
}
