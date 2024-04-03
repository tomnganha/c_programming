
#pragma warning(disable:6031)
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>

int sum_hang(int a[][100], int n, int m, int pos) {
	int sum = 0;
	for (int j = 0; j < m; j++) {
		sum += a[pos][j];
	}
	return sum;
}
int sum_cot(int a[][100], int n, int m, int pos) {
	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += a[i][pos];
	}
	return sum;
}
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
int a[100][100];
int main() {
	int n, m;
	scanf("%d%d", &n, &m);
	
	nhap(a, n, m);
	xuat(a, n, m);
	int max = a[0][0], min = a[0][0];
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (max < a[i][j]) {
				max = a[i][j];
			}
			if (min > a[i][j]) {
				min = a[i][j];
			}
			
		}
	}
	printf("\nmax= %d, min=%d", max, min);
	printf("\nsum hang 1 %d", sum_hang(a, n, m, 1));
	printf("\nsum cot 1 %d", sum_cot(a, n, m, 1));
	return 0;
}