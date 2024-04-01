//CONTEST7: THUAT TOAN SAP XEP VA TIM KIEM
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<stdlib.h>

//int comp1(const void* a, void* b) {
//	int* x = (int*)a;
//	int* y = (int*)b;
//	return *x - *y;
//}int comp2(const void* a, void* b) {
//	int* x = (int*)a;
//	int* y = (int*)b;
//	return *y - *x;
//}
//int dem_so_phan_tu(int a[], int n) {
//	int count = 1;
//	for (int i = 0; i < n-1;i++) {
//		if (a[i] != a[i + 1]) {
//			count++;
//		}
//	}
//	return count;
//}
int tong_chu_so(int n) {
	int res = 0;
	while (n != 0) {
		res += n % 10;
		n /= 10;
	}
	return res;
}
//int comp1(const void* a, void* b) {
//	int* x = (int*)a;
//	int* y = (int*)b;
//	if (tong_chu_so(*x) != tong_chu_so(*y)) {
//		return tong_chu_so(*x) - tong_chu_so(*y);
//	}
//	else {
//		return *x - *y;
//	}
//}
int comp1(const void* a, const void* b) {
	int* x = (int*)a;
	int* y = (int*)b;
	return *x - *y;
}
int slove(int a[], int n) {
	int distance = 1000000;
	for (int i = 0; i < n; i++) {
		if ((a[i + 1] - a[i]) > distance) {
			distance = a[i + 1] - a[i];
		}
	}
	return distance;
}
int main()
{
	int n;
	scanf("%d", &n);
	int a[100];
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	qsort(a, n, sizeof(int), comp1);
	for (int i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");
	printf("%d", slove(a, n));
	return 0;
}