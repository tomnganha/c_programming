#define _CRT_SECURE_NO_WARNINGS
//BAI 1:
//#include<stdio.h>
//#include<math.h>
//#include<time.h>
//int main() {
//	clock_t start, end;
//	double time_spu_used;
//	int n;
//	scanf("%d", &n);
//	long long sum = 0;
//	int m = sqrt(n);
//	start = clock();
//	for (int i = 1; i <= m; i++) {
//		if (n % i == 0) {
//			sum += i;
//			if (n != n / i) {
//				sum += n / i;
//			}
//		}
//	}
//	end = clock();
//	time_spu_used = (double)(end - start)/CLOCKS_PER_SEC;
//	printf("%lld\n", sum);
//	//printf("%lf", time_spu_used);
//	
//	return 0;
//}
//BAI 7:
//#include<stdio.h>
//#include<math.h>
//int main() {
//	int n;
//	int count = 0;
//	scanf("%d", &n);
//	for (int i = 1; i <= n; i++) {
//		if (n % i == 0) {
//			if (i == n) {
//				printf("%d.", i);
//				count++;
//				break;
//			}
//			printf("%d, ", i);
//			
//			count++;   
//		}
//	}
//	printf("\n%d", count);
//}

//bai 8: LIET KE SO CHINH PHUONG NHO HON N
//#include<stdio.h>
//#include<math.h>
//int main() {
//	int n;
//	scanf("%d", &n);
//	int m = sqrt(n);
//	for (int i =1; i <= m; i++) {
//		if (i * i <= n) {
//			printf("%d, ", i * i);
//		}
//	}
//	return 0;
//}
//BAI 11
//#include<stdio.h>
//#include<math.h>
//int main() {
//	int n;
//	long long res = 0;
//	scanf("%d", &n);
//	for (int i = 0; i <= n; i++)
//	{
//		if (i % 2 == 0) {
//			res += 1.0 * i;
//		}
//		else {
//			res -= 1.0 * i;
//		}
//	}
//	printf("%lld", res);
//	return 0;
//}

//BAI 12
//#include<stdio.h>
//#include<math.h>
//int main() {
//	int n;
//	long long res = 0;
//	scanf("%d", &n);
//	for (int i = 0; i <= n; i = i + 2) {
//		res += i;
//	}
//	printf("%lld", res);
//	return 0;}

//BAI 13
//#include<stdio.h>
//int main() {
//	int n;
//	scanf("%d", &n);
//	long long res = 0;
//	for (int i = 1; i <= n; i++) {
//		res += 2 * i - 1;
//	}
//	printf("%lld", res);
//	return 0;
//}

//BAI 16
//#include<stdio.h>
//int main() {
//	long long n;
//	scanf("%lld", &n);
//	if (n == 0) {
//		printf("%d", 0);
//		return 0;
//	}
//	int sum = 0;
//	while (n) {
//		sum += n%10;
//		n /= 10;
//	}
//	printf("%d", sum);
//	return 0;
//}

//BAI 19
//#include<stdio.h>
//int main() {
//	int n;
//	scanf("%d", &n);
//	int count = n / 28;
//	n /= 28;
//	if (count == 0) {
//		printf("%d", 0);
//		return 0;
//	}
//	while (n) {
//		count += n / 3;
//		n /= 3;
//	}
//	printf("%d", count);
//	return 0;
//}

//#include<stdio.h>
//int main() {
//	int n;
//	scanf("%d", &n);
//	int count = 0;
//	if (n < 2) {
//		printf("%d", -1);
//
//	}
//	else {
//		count = n / 2;
//		printf("\n%d\n", count);
//		for (int i = 1; i < count; i++) {
//			printf("%d + ", 2);
//		}
//		if(n%2==0){
//			printf("%d", 2);
//		}
//		else {
//			printf("%d", 3);
//		}
//	}
//}
//
//#include<stdio.h>
//int main() {
//	int n;
//	scanf("%d", &n);
////in hinh 1
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			printf("*");
//		}
//		printf("\n");
//	}
//	printf("\n");
//	//in hinh 2
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			if (i == 0 || i == n - 1) {
//				printf("*");
//				
//			}
//			else if(j==0||j==n-1) {
//				printf("*");
//			}
//			else {
//				printf(" ");
//			}
//			
//		}
//		printf("\n");
//	}
//	printf("\n");
//
//	//ve hinh 3
//
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			if (i == 0 || i == n - 1) {
//				printf("*");
//
//			}
//			else if (j == 0 || j == n - 1) {
//				printf("*");
//			}
//			else {
//				printf("#");
//			}
//
//		}
//		printf("\n");
//	}
//	printf("\n");
//	//ve hinh 4
//
//	for (int i = 0; i < n; i++) {
//		for (int j = 0; j < n; j++) {
//			if (i == 0 || i == n - 1) {
//				printf("%d",i+1);
//
//			}
//			else if (j == 0 || j == n - 1) {
//				printf("%d",i+1);
//			}
//			else {
//				printf(" ");
//			}
//
//		}
//		printf("\n");
//	}
//	printf("\n");
//
//	//ve hinih 5
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= n; j++) {
//			if (j <= i) {
//				printf("*");
//			}
//			else {
//				printf(" ");
//			}
//		}
//		printf("\n");
//	}
//	printf("\n");
//
//	//ve hinh 6
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= n; j++) {
//			if (i <= n-j+1) {
//				printf("*");
//			}
//			else {
//				printf(" ");
//			}
//		}
//		printf("\n");
//	}
//	printf("\n");
//
//	//Ve hinh 7
//	for (int i = 1; i <= n; i++) {
//		for (int j = 1; j <= n; j++) {
//			if (n-i+1 <= j) {
//				printf("*");
//			}
//			else {
//				printf(" ");
//			}
//		}
//		printf("\n");
//	}
//	printf("\n");
//	//ve hinh 
//
//	return 0;
//}

//Bai 26

//#include<stdio.h>
//int main() {
//	int a, b, n;
//	int y = 0;
//	scanf("%d%d%d", &a, &b, &n);
//	while ((n - b * y)/a>=0) {
//
//		if ((n - b * y) % a == 0) {
//			printf("YES");
//			return 0;
//			break;
//		}
//		y++;
//	}
//	printf("NO");
//	return 0;
//}

//BAi 27
//#include<stdio.h>
//int main() {
//	long long n;
//	scanf("%lld", &n);
//	int templ = 0;
//	while (n > 9) {
//		templ = 0;
//		while (n) {
//			templ += n % 10;
//			n /= 10;
//		}
//		n = templ;
//	}
//	printf("%lld", n);
//	return 0;
//
// }

#include<stdio.h>
int main() {
	int n;

}