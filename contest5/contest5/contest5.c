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

//Bai 11



//int check(int n) {
//	for (int i = 0; i < n; i++) {
//		if (F[i] == n) return 1;
//	}
//	return 0;
//}
//void find(int a[], int n) {
//	int min=a[0];
//	int max=a[0];
//	int lo_min=0;
//	int lo_max=0;
//	for (int i = 0; i < n; i++) {
//		if (a[i] > max) {
//			max = a[i];
//			lo_max == i;
//		}
//		if (a[i] <= min) {
//			min = a[i];
//			lo_min = i;
//		};
//	}
//	printf("%d %d", lo_min, lo_max);
//}

//ll gcd(long long a, long long b) {
//	if (b == 0) {
//		return a;
//	}
//	else {
//		return gcd(b, a % b);
//	}
//}
//int nt(int n) {
//	if (n < 2) return 0;
//	if (n == 2) return 1;
//	for (int i = 2; i <= sqrt(n); i++) {
//		if (n % i == 0) return 0;
//	}
//	return 1;
//}
//int thuan_nghich(int n) {
//	int temp = 0;
//	int temp1 = n;
//	while (n != 0)
//	{
//		temp = temp * 10 + n % 10; n /= 10;
//	}
//	return temp == temp1;
//}
//int chinh_phuong(int n) {
//	return (sqrt(n) * sqrt(n)) == n;
//}
//
//int yc4(int n) {
//	int sum = 0;
//	while (n!=0)
//	{
//		sum += n % 10; n /= 10;
//	}
//	return nt(sum);
//}

//int dem[1000001];
//int main() {
//	int n;
//	int max = dem[0];
//	scanf("%d", &n);
//	int a[100];
//	for (int i = 0; i < n; i++) {
//		scanf("%d", &a[i]);
//	}
//	for (int i = 0; i < n; i++) {
//		dem[a[i]]++;
//	}
//	
//	for (int i =1; i < 1000001; i++) {
//		if (max < dem[i]) {
//			max = dem[i];
//		}
//	}
//	return 0;
//}

//SANG SO NGUYEN TO
//int n = 1000000;
//int prime[1000001];
//void sang() {
//	for (int i = 0; i <= n; i++) {
//		prime[i] = 1;
//	}
//	prime[0] = prime[1] = 0;
//	for (int i = 2; i <= sqrt(n); i++) {
//		if (prime[i] == 1) {
//			for (int j = i*i ; j <= n; j += i) {
//				prime[j] = 0;
//			}
//		}
//	}
//}
//int main() {
//	sang();
//	for (int i = 0; i <= 20; i++) {
//		if (prime[i] == 1) {
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}
