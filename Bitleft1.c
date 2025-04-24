#include <stdio.h>

int main()
{
	int num = 15; // 00000000 00000000 00000000 000011111

	int result1 = num << 1;
	int result2 = num << 2;
	int result3 = num << 3;

	printf("1칸 이동 결과: %d \n", result1);//num의 비트 열을 왼쪽으로 1칸식 이동
	printf("2칸 이동 결과: %d \n", result2);//num의 비트 열을 왼쪽으로 2칸식 이동
	printf("3칸 이동 결과: %d \n", result3);//num의 비트 열을 왼쪽으로 3칸식 이동
	return 0;
}
