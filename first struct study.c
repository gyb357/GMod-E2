#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

/*
// 문자열 암호화
void encrypt(char cipher[], int shift);

int main() {
	char cipher[50];

	int shift = 3;

	printf("문자열을 입력하시오: ");

	gets(cipher);

	encrypt(cipher, shift);

	return 0;
}

void encrypt(char cipher[], int shift) {
	int i = 0;

	while (cipher[i] != '\0') {
		if (cipher[i] >= 'a' && cipher[i] <= 'Z') {
			cipher[i] += shift;

			if (cipher[i] > 'z') {
				cipher[i] -= 26;
			}
		}

		i++;
	}

	printf("암호화된 문자열: %s", cipher);
}
*/

/*
// 학생의 정보
struct student {
	int number;
	char name[10];
	double grade;
};

int main() {
	struct student s;

	system("Color 0B");

	s.number = 20190001;
	strcpy(s.name, "홍길동");
	s.grade = 4.3;

	printf("학번: %d\n", s.number);
	printf("이름: %s\n", s.name);
	printf("학점: %d\n", s.grade);

	return 0;
}
*/

/*
// 학생의 정보 정하기
#define SIZE 3

struct student {
	int number;
	char name[20];
	double grade;
};
int main(void)
{
	struct student list[SIZE];
	int i;

	for (i = 0; i < SIZE; i++)
	{
		printf("학번을 입력하시오: ");
		scanf("%d", &list[i].number);
		printf("이름을 입력하시오: ");
		scanf("%s", list[i].name);
		printf("학점을 입력하시오(실수): ");
		scanf("%lf", &list[i].grade);
	}

	for (i = 0; i < SIZE; i++)
		printf("학번: %d, 이름: %s,  학점: %f\n", list[i].number, list[i].name, list[i].grade);
	return 0;
}
*/

/*
// 두 좌표의 거리 구하기
struct point {
	int x;
	int y;
};

int main(void)
{
	struct point p1, p2;
	int xdiff, ydiff;
	double dist;

	printf("점의 좌표를 입력하시오(x  y): ");
	scanf("%d %d", &p1.x, &p1.y);

	printf("점의 좌표를 입력하시오(x  y): ");
	scanf("%d %d", &p2.x, &p2.y);

	xdiff = p1.x - p2.x;
	ydiff = p1.y - p2.y;

	dist = sqrt((double)(xdiff * xdiff + ydiff * ydiff));

	printf("두 점사이의 거리는 %f입니다.\n", dist);
	return 0;
}
*/

/*
// 사각형 크기 구하기
struct point {
	int x;
	int y;
};

struct rect {
	struct point p1;
	struct point p2;
};

int main() {
	struct rect r;
	int w, h, area, peri;

	printf("왼쪽 상단의 좌표를 입력하시오: ");
	scanf("%d %d", &r.p1.x, &r.p1.y);

	printf("오른쪽 상단의 좌표를 입력하시오: ");
	scanf("%d %d", &r.p2.x, &r.p2.y);

	w = r.p2.x - r.p1.x;
	h = r.p2.y - r.p1.y;

	area = w * h;
	peri = 2 * w + 2 * h;

	printf("면적은 %d이고 둘레는 %d입니다.", area, peri);

	return 0;
}
*/

