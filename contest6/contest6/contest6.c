#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
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
//void insert_sort(int a[], int n) {
//	for (int i = 1; i < n; i++) {
//		for (int j = 0; j<i; j++) {
//			if (a[i] <a[j]) {
//				int temp = a[i]; a[i] = a[j]; a[j] = temp;
//				
//			}
//		}
//	}
//}
//int main() {
//	int n;
//	scanf("%d", &n);
//	int a[100];
//		for (int i = 0; i < n; i++) {
//		scanf("%d", &a[i]);
//	}
//	for (int i = 0; i < n; i++) {
//		printf("%d ", a[i]);
//	}
//	printf("\n");
//	insert_sort(a, n);
//	for (int i = 0; i < n; i++) {
//		printf("%d ", a[i]);
//	}
//	return 0;
//}

//SAP XEP dem phan phoi
//void couting_sort(int a[], int n) {
//	int dem[100001];
//	for (int i = 0; i < 100001; i++) {
//		dem[i] = 0;
//	}
//	for (int i = 0; i < n; i++) {
//		dem[a[i]]++;
//	}
//	
//	for (int i = 0; i < 100001; i++) {
//		if (dem[i] != 0) {
//			for (int j = 1; j <= dem[i]; j++) {
//				printf("%d ", i);
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
//	couting_sort(a, n);
//}
//trn hai day tang dan tao thanh day tang dan

//int main() {
//	int m,n;
//	scanf("%d%d", &m, &n);
//	int a[100];
//	int b[100];
//	for (int i = 0; i < m; i++){
//		scanf("%d", &a[i]);
//	}
//	for (int i = 0; i < n; i++) {
//		scanf("%d", &b[i]);
//	}
//	int i = 0;int  j = 0;
//	while (i < m && j < n) {
//		if (a[i] <= b[j]) {
//			printf("%d ", a[i]); ++i;
//		}
//		else {
//			printf("%d ", b[j]); ++j;
//		}
//		
//	}
//	while (i < m) {
//		printf("%d ", a[i]); i++;
//	}
//	while (j <n) {
//		printf("%d ", b[j]); j++;
//	}
//	return 0;
//}

//TIM KIEM NHI PHAN VA TIM KIEM TUYEN TINH
//int binary_search(int a[], int n,int k) {
//	int left = 0, right = n - 1;
//	int mid;
//	while (left<=right) {
//		mid = (left + right) / 2;
//		if (a[mid] > k) {
//			right = mid - 1;
//		}
//		else if (a[mid] < k) {
//			left = mid + 1;
//		}
//		else {
//			return 1;
//		}
//	}
//	return 0;
//	
//}

//tim kiem nhi phan phan tu dau tien trong mang
//int first(int a[], int n, int k) {
//	int left = 0, right = n - 1;
//	int mid,res=-1;
//	while (left <= right) {
//		mid = (left + right) / 2;
//		if (a[mid] == k) {
//			res = mid;
//			right = mid - 1;
//		}
//		else if (a[mid] < k) {
//			left = mid + 1;
//		}
//		else {
//			right = mid - 1;
//		}
//	}
//	return res;
//}
//int last(int a[], int n, int k) {
//	int left = 0, right = n - 1;
//	int mid, res = -1;
//	while (left <= right) {
//		mid = (left + right) / 2;
//		if (a[mid] == k) {
//			res = mid;
//			left = mid + 1;
//		}
//		else if (a[mid] < k) {
//			left = mid + 1;
//		}
//		else {
//			right = mid - 1;
//		}
//	}
//	return res;
//}
//tim phan tu cuoi cung trong day tang dan nho hon hoac bang x
//int last(int a[], int n, int x) {
//	int l = 0, r = 0;
//	int mid, res=-1;
//	while (l <= r) {
//		mid = (l+r)/2;
//		if (a[mid] <= x) {
//			res = mid;
//			l = mid + 1;
//		}
//		else {
//			r = mid - 1;
//		}
//	}
//	return res;
//}
//int main() {
//	int n, k;
//	scanf("%d%d", &n, &k);
//	int a[100];
//	for (int i = 0; i < n; i++) {
//		scanf("%d", &a[i]);
//	}
//	printf("%d", last(a, n, k));
//	return 0;
//}

//int prime[1000000];
//void sang() {
//	for (int i = 0; i < 1000000; i++) {
//		prime[i] = 1;
//
//	}
//	prime[0] = prime[1] = 0;
//	for (int i = 2; i < 1000000; i++) {
//		if (prime[i]) {
//			for (int j = i * i; i < 1000000; j += i) {
//				prime[j] = 0;
//			}
//		}
//	}
//	
//}
//int main() {
//	sang();
//	int t;
//	scanf("%d", &t);
//	while (t--)
//	{
//		int n; scanf("%d", &n);
//		if (prime[n]) {
//			printf("YES\n");
//		}
//		else {
//			printf("NO\n");
//		}
//	}
//	return 0;
//}

//Su dung ham quitsort va xay dung comparator

int comp(const void* a, const void* b) {
	int* x = (int*)a;
	int* y = (int*)b;
	/*if (*x < *y) {
		return -1;
	}
	else {
		return 1;
	}*/
	return *y - *x;
}
int main() {
	int n;
	scanf("%d", &n);
	int a[100];
	for (int i = 0; i < n; i++) {
		scanf("%d" ,&a[i]);
	}
	qsort(a, n, sizeof(int), comp);
	for (int i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}
	return 0;
}