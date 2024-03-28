#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
//BAI 1
//int nt(int n) {
//	if (n == 2) return 1;
//	if (n < 2) return 0;
//	if (n > 2) {
//		for (int i = 2; i < sqrt(n); i++) {
//			if (n % i == 0) {
//				return 1;
//			}
//		}
//	}
//}



int main() {
	int n;
	int A[1000];
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &A[i]);
	}
	for (int i = 0; i < n; i = i + 2) {
		if (A[i] % 2 == 0) printf("%d ", A[i]);
	}
	
	
	return 0;
}