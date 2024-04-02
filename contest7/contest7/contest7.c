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
//int comp1(const void* a, const void* b) {
//	int* x = (int*)a;
//	int* y = (int*)b;
//	return *x - *y;
//}
//int slove(int a[], int n) {
//	int distance = 1000000;
//	for (int i = 0; i < n; i++) {
//		if ((a[i + 1] - a[i]) > distance) {
//			distance = a[i + 1] - a[i];
//		}
//	}
//	return distance;
//}
//void selection_sort(int a[], int n) {
//	for (int i = 0; i < n - 1; i++) {
//		int min = i;
//		for (int j = i + 1; j < n; j++) {
//			if (a[min] > a[j]) {
//				min = j;
//			}
//		}
//		int temp = a[i]; a[i] = a[min]; a[min] = temp;
//	}
//}

//void insert_sort(int a[], int n) {
//	for (int i = 0; i < n-1; i++) {
//		for (int j = i; j > 0;j--) {
//			if (a[i + 1] > a[j]) {
//				
//			}
//		}
//	}
//}

//void bublle_sort(int a[], int n) {
//	for (int i = 0; i < n - 1; i++) {
//		for (int j = i + 1; j < n; j++) {
//			if (a[i] > a[j]) {
//				int temp = a[i];
//				a[i] = a[j];
//				a[j] = temp;
//			}
//		}
//	}
//}
//int bs(int a[], int n, int x) {
//	int l = 0, r = n - 1;
//	while (l <= r) {
//		int m = (l + r) / 2;
//		if (a[m] == x) {
//			return 1;
//		}
//		else if (a[m] < x) {
//			r = m - 1;
//		}
//		else {
//			l = m + 1;
//		}
//	}
//	return 0;
//}
//BAi 10
int comp(const void* a, const void* b) {
	int* x = (int*)a;
	int* y = (int*)b;
	return *x - *y;
}
int first(int a[], int n, int x) {
	int l = 0, r = n - 1;
	int res=-1;
	while (l <= r) {
		int m = (l + r) / 2;
		if (a[m] = x) {
			res = m;
			r = m - 1;
		}
		else if(a[m]<x) {
			l = m + 1;
		}
		else {
			r = m - 1;
		}
	}
	return res;
}

int final(int a[], int n, int x) {
	int l = 0, r = n - 1;
	int res = -1;
	while (l <= r) {
		int m = (l + r) / 2;
		if (a[m] = x) {
			res = m;
			l = m + 1;
		}
		else if (a[m] < x) {
			l = m + 1;
		}
		else {
			r = m - 1;
		}
	}
	return res;
}
int ham3(int a[], int n, int x) {
	int l = 0, r = n - 1;
	int res = -1;
	while (l <= r) {
		int m = (l + r) / 2;
		if (a[m] >= x) {
			res = m;
			r = m + 1;
		}
		else {
			l = m + 1;
		}
	}
	return res;
}
int main()
{
	int n;
	scanf("%d", &n);
	int a[100];
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	//selection_sort(a, n);
	//bublle_sort(a, n);
	qsort(a, n, sizeof(int), comp);
	for (int i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}
}