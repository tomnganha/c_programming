#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
//BAI 1
//int sum(int n) {
//	if (n == 0) return 0;
//	return n+sum(n - 1);
//}
//int sum(int n) {
//	if (n == 1) {
//		return 1;
//	}
//	else {
//		return n * n + sum(n - 1);
//	}
//}
//int sum(int n) {
//	if (n == 1) {
//		return 1;
//	}
//	else {
//		return n * n * n + sum(n - 1);
//	}
//}
//long long sum(int n) {
//	if (n == 1) {
//		return -1;
//	}else {
//		return (long long)(pow(-1, n) * n)+sum(n-1);
//	}
//}
//long long giaithua(int n) {
//	if (n == 0) {
//		return 1;
//	}
//	else {
//		return n * giaithua(n - 1);
//	}
//}
//BAI 6
//int fibo(int n) {
//	if (n == 1) {
//		return 0;
//	}
//	else if (n == 2) {
//		return 1;
//	}
//	else {
//		return fibo(n - 1) + fibo(n - 2);
//	}
//}

//int to_hop_chap_k(int n,int k) {
//	if (k == 0||n==k) {
//		return 1;
//	}
//	else {
//		if (k > n / 2) {
//			k = n - k;
//		}
//		return to_hop_chap_k(n - 1, k - 1) + to_hop_chap_k(n - 1, k);
//	}
//}
#define ll long long
//ll ucln(ll a, ll b) {
//	if (b == 0) {
//		return a;
//	}
//	else {
//		return ucln(b, a % b);
//	}
//}
//ll luythua(int a, int b) {
//	if (b == 0) {
//		return 1;
//	}
//	else if (b % 2 == 0) {
//		return 1ll*luythua(a, b / 2) * luythua(a, b / 2);
//	}
//	else {
//		return 1ll * luythua(a, b / 2) * luythua(a, b / 2)*a;
//	}
//}
//double s(int n) {
//	if (n == 1) {
//		return 1;
//	}
//	else {
//		return 1.0/n+s(n-1);
//	}
//}

//BAI 11
//void bieu_dien_nhi_phan(int n) {
//	if (n == 0) {
//		printf("0");
//	}
//	else {
//		bieu_dien_nhi_phan(n / 2);
//		printf("%d", n % 2);
//	}
//}
//BAI 12
//void he_16(ll n) {
//	if (n == 0) {
//		printf("0");
//	}
//	else
//	{
//		he_16(n / 16);
//		switch (n%16)
//		{
//		case 15:
//			printf("F");
//			break;
//		case 14:
//			printf("E");
//			break;
//		case 13:
//			printf("D");
//			break;
//		case 12:
//			printf("C");
//			break;
//		case 11:
//			printf("B");
//			break;
//		case 10:
//			printf("A");
//			break;
//		default:
//			printf("%lld", n % 16);
//			break;
//		}
//	}
//
//}
//BAI 13
//ll sum(long long n) {
//	if (n == 0) {
//		return 0;
//	}
//	else {
//		return n % 10 + sum(n/10);
//	}
//}

//BAi 14
//int c(ll n) {
//	if (n == 0) {
//		return 0;
//	}
//	else {
//		return 1 + c(n / 10);
//	}
// }
//BAI 15
//void bai19(ll n)
//{
//	if (n < 10) {
//		printf("%lld", n);
//		return;
//	}
//	else {
//		bai19(n / 10);
//	}
//}
//Bai
void mm(ll n,int min,int max) {
	if (n == 0) {
		printf("%d %d", min, max);
	}
	else {
		if (min > n % 10) min = n % 10;
		if (max < n % 10) max = n % 10;
		mm(n / 10, min, max);
	}
}
int main() {
	ll n;
	int min=9;
	int max=0;
	scanf("%lld",&n);
	mm(n,min,max);
	return 0;
}