#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
//billed sort
//void bulled_sort(int a[], int n) {
//	for (int i = 0; i < n  - 1; i++) {
//		for (int j = 0; j < n - 1 - i; j++) {
//			if (a[j] > a[j + 1]) {
//				int temp = a[j];
//				a[j] = a[j + 1];
//				a[j + 1] = temp;
//			}
//		}
//	}
//}
//int main() {
//	int n;
//	scanf("%d", &n);
//	int a[100];
//	for (int i = 0; i < n; i++) {
//		scanf("%d", &a[i]);
//	}
//	for (int i = 0; i < n; i++) {
//		printf("%d ", a[i]);
//	}
//	printf("\n");
//	bulled_sort(a, n);
//	for (int i = 0; i < n; i++) {
//		printf("%d ", a[i]);
//	}
//	return 0;
//}

//Sap xep chen: insert sort
void insert_sort(int a[], int n) {
	for (int i = 1; i < n; i++) {
		for (int j = 0; j<i; j++) {
			if (a[i] <a[j]) {
				int temp = a[i]; a[i] = a[j]; a[j] = temp;
			}
		}
	}
}
int main() {
	int n;
	scanf("%d", &n);
	int a[100];
		for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	for (int i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}
	printf("\n");
	insert_sort(a, n);
	for (int i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}
	return 0;
}