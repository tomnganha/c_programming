
#pragma warning(disable:6031)
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

//int sum_hang(int a[][100], int n, int m, int pos) {
//	int sum = 0;
//	for (int j = 0; j < m; j++) {
//		sum += a[pos][j];
//	}
//	return sum;
//}
//int sum_cot(int a[][100], int n, int m, int pos) {
//	int sum = 0;
//	for (int i = 0; i < n; i++) {
//		sum += a[i][pos];
//	}
//	return sum;
//}
void nhap(int a[][100], int n, int m) {
	for (int i = 0; i < n; i++) {
		for(int j = 0;j < m; j++){
			scanf("%d", &a[i][j]);
		}
	}
}
void xuat(int a[][100], int n, int m) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
}
int nt(int n) {
	if (n == 2) return 1;
	if (n < 2) return 0;
	for (int i = 2; i <= sqrt(n); i++) {
		if (n % i == 0) 
			return 0;
	}
	return 1;
}
int a[100][100];
int main() {
	int n, m;
	scanf("%d%d", &n, &m);
	nhap(a, n, m);
	xuat(a, n, m);
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (nt(a[i][j])) {
				printf("%d ", a[i][j]);
			}
		}
		printf("\n");
	}
	
	return 0;
}