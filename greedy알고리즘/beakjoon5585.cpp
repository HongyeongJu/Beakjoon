#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

using namespace std;

int main() {
	// 입력값을 받을 n과 1000원으로 거스름돈을 계산할 변수 money 생성
	int n, money;
	// 동전의 개수 변수 생성
	int count = 0;
	// 동전의 종류 K 개
	int coins[6] = { 500, 100, 50, 10, 5, 1 };
	scanf("%d", &n);
	money = 1000 - n;
	// 거스름돈 money 를 코인으로 나눠서 개수 계산
	for (int i = 0; i < 6; i++) {
		count += money / coins[i];
		money %= coins[i];
	}

	printf("%d", count);
	return 0;
}
