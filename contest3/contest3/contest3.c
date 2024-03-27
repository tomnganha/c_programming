#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
//bai 1
//int nt(int n) {
//	if (n < 2) {
//		return 0;
//	}
//	else {
//		for (int i = 2; i <= sqrt(n); i++) {
//			if (n % i == 0) {
//				return 0;
//			}
//		}
//		return 1;
//	}
//	
//}
//bai 2
//int sphenic(int n) {
//	int count = 0;
//	for (int i = 2; i <= sqrt(n); i++) {
//		if (n % i == 0) {
//			int mu = 0;
//			while (n % i == 0) {
//				++mu;
//				n /= i;
//			}
//			if (mu >= 2) return 0;
//			count++;
//		}
//	}
//	if (n > 1) count++;
//	if (count == 3) return 1; else
//	{
//		return 0;
//	}
//}

//BAI 3: phan tich thua so nguyen to
//void bai3(long long n) {
//	int m = sqrt(n);
//	if (n < 2) {
//		return;
//	}
//	else {
//		for (int i = 2; i <= m; i++) {
//			if (n % i == 0) {
//				int mu = 0;
//				while (n % i == 0) {
//					mu++;
//					n /= i;
//				}
//				printf("%d^%d", i, mu);
//				if (n != 1) printf(" * ");
//			}
//		}
//		if (n > 1)printf("%lld^1", n);
//	}
//}
//BAI 4: uoc so nguyen to lon nhat
//int nt(int n) {
//	if (n < 2) {
//		return 0;
//	}
//	else {
//		for (int i = 2; i <= sqrt(n); i++) {
//			if (n % i == 0) return 0;
//		}
//	}
//	return 1;
//}
//int find(int n) {
//	int res;
//	for (int i = 2; i <= sqrt(n); i++) {
//		if (n % i == 0) {
//			while (n % i == 0) {
//				res = i; 
//				n /= i;
//			}
//		}
//	}
//	if (n > 1) res = n;
//	return res;
//}

//BAi 5:so smith
//int tong_chu_so(int n) {
//	int sum = 0;
//	while (n != 0) {
//		sum += n % 10;
//		n /= 10;
//	}
//	return sum;
//}
//
//int nt(int n)
//{
//	if (n < 2) {
//		return 0;
//	}
//	else {
//		for (int i = 2; i <= sqrt(n); i++) {
//			if (n % i == 0) return 0;
//		}
//	}
//	return 1;
//}
//int smith(int n) {
//	int res = 0;
//	int temp=n;
//	int sum1 = tong_chu_so(n);
//	if (n < 2) {
//		return 0;
//	}
//	else {
//		for (int i = 2; i <= sqrt(n); i++) {
//			if (n % i == 0 ){
//				while (n % i == 0) {
//					res += tong_chu_so(i);
//					n /= i;
//				}
//			}
//		}
//		if (n > 1) res += tong_chu_so(n);
//		if (temp == n) return 0;
//		return res==sum1;
//	}
//	
//}

//BAI 6:TONG UOC SO
//int tong_uoc(int  n) {
//	int sum=0;
//	for (int i = 1; i <= n; i++) {
//		if (n % i == 0) {
//			sum += i;
//		}
//	}
//	return sum;
//}


//BAI &:KIEM TRA SO CHINH PHUONG
//int chinh_phuong(int n) {
//	if (n == 0) return 1;
//	if (n < 0) return 0;
//	int a = sqrt(n);
//	if (a * a == n)return 1;
//	return 0;
//}

//BAI 7: SO CHINH PHUONG TRONG DOAN
//void chinh_phuong(int a, int b) {
//	int can=sqrt(a);
//	if (can*can)
//	for (int i = ceil(sqrt(a)); i <= sqrt(b); i++) {
//		printf("%d ", i * i);
//	}
//}

//BAI 8
//int chinh_phuong_3(int a, int b) {
//	int cana = ceil(sqrt(a));
//	int canb = floor(sqrt(b));
//	int count = 0;
//	for (int i = cana; i <= canb; i++) {
//		count++;
//	}
//	return count;
//}

//BAI 9:so uoc le
//int so_uoc_le(long long n) {
//	int count = 0;
//	if (n == 0) return 0;
//	for (int i = 1; i <= sqrt(n); i++) {
//		if (n % i == 0) {
//			if (i * i != n) {
//				count = count + 2;
//			}
//			else {
//				count++;
//			}
//			
//
//		}
//	}
//	return count%2;
//}
//BAI 11:SO THUAN NGUYEN TO
//int nt(int n) {
//	if (n < 2) return 0;
//	for (int i = 2; i <= sqrt(n); i++) {
//		if (n % i == 0) return 0;
//	}
//	return 1;
//}
//int thuan_nt(int n) {
//	if (nt(n) == 0) {
//		return 0;
//	}
//	else {
//		
//		int sum = 0;
//		while (n != 0) {
//			if (n % 10 != 2 && n % 10 != 3 && n % 10 != 5 && n % 10 != 7) {
//				return 0;
//			}
//			else {
//				sum += (n % 10);
//			}
//			n /= 10;
//		}
//		
//		return nt(sum);
//	}
//}

//BAI 12: SO THUAN NGHICH CO BA UOC NGUYEN TO
//int thuan_nghich(int n) {
//	if (n < 10 && n >= 0) return 1;
//	int so_thuan = n;
//	int so_nghich = 0;
//	while (n != 0) {
//		so_nghich = so_nghich * 10 + (n % 10);
//		n /= 10;
//	}
//	return so_thuan == so_nghich;
//}
//int nt(int n) {
//	if (n < 2) return 0;
//	if (n = 2) return 1;
//	if (n > 2) {
//		for (int i = 0; i <= sqrt(n); i++)
//			if (n % i == 0) return 0;
//	}
//	return 1;
//}
//int so_dep(int n) {
//	int count = 0;
//	for (int i = 2; i <= sqrt(n); i++) {
//		if (n % i == 0) {
//			if (nt(i)) {
//				if (i * i == n) {
//					count++;
//				}
//				else {
//					if (nt(n / i)) {
//						count++;
//					}
//					count++;
//				}
//			}
//		}
//	}
//	return count >= 3;
//}
//int check(int n) {
//	int count = 0;
//	for (int i = 2; i <= sqrt(n); i++) {
//		if (n % i == 0) {
//			count++;
//			while (n%i!=0)
//			{
//				n /= i;
//			}
//		}
//	}
//	if (n > 1) {
//		count++;
//	}
//	return count >= 3;
//}

//BAI 13:SO LOC PHAT
//int so_loc_phat(long long n) {
//	if (n == 0) return 1;
//	while (n != 0) {
//		if (n % 10 != 0 && n % 10 != 6 && n % 10 != 8)
//			return 0;
//		n /= 10;
//		}
//	return 1;
//	
//	}
//BAI 14: SO THUAN NGHICH LOC PHAT
//int thuan_nghich(int n) {
//	int so_thuan = n;
//	int so_nghich = 0;
//	if (n == 0) return 1;
//	while (n != 0) {
//		so_nghich = so_nghich * 10 + n % 10;
//		n /= 10;
//	}
//	return so_thuan == so_nghich;
//}
//int check(int n) {
//	int count = 0;
//	int sum = 0;
//	if (n == 0)return 0;
//	while (n != 0) {
//		if (n % 10 == 6) {
//			count++;
//		}
//		sum += n % 10;
//		n /= 10;
//	}
//	return count > 0 && sum % 10 == 8;
//}

//BAI 15
//int nt(int n) {
//	if (n < 2) return 0;
//	if (n == 2) return 1;
//	for (int i = 2; i <= sqrt(n); i++) {
//		if (n % i == 0) return 0;
//	}
//	return 1;
//}
//int endmax(int n) {
//	int temp = n%10;
//	while (n != 0) {
//		if (temp < n % 10) return 0;
//		n /= 10;
//	}
//	return 1;
//}

//BAI 16
//int thuan_nghich(long long n) {
//	int so_thuan = n;
//	int so_nghich = 0;
//	while (n!=0)
//	{
//		so_nghich = so_nghich * 10 + n % 10;
//		n /= 10;
//	}
//	return so_thuan == so_nghich;
//}
//int check(long long n) {
//	int temp=0;
//	int start=0;
//	int end = n % 10;
//	n /= 10;
//	if (n == 0) return 0;
//	while (n>9) {
//		if (n / 10 < 10) {
//			start = n / 10;
//		}
//		temp = temp * 10 + n % 10;
//		n /= 10;
//	}
//	return thuan_nghich(temp) && ((end == start * 2)||(start==2*end));
//}

//BAI 16:TIM UCLN VA BCNN
//int ucln(long long a,long long b) {
//	int r=1;
//	while (r != 0) {
//		r = a % b;
//		a = b; b = r;
//	}
//	return a;
//	
//}
//long long bcnn(long long a, long long b) {
//	return a / ucln(a, b)*b;
//}

//BAi 17:BIEU DIEN SO
//int bieu_dien_so(int n) {
//
//}

//BAI 18: BIEU DIEN SO HOAN HAO
//int nt(long long n) {
//	if (n < 2) return 0;
//	if (n == 2) return 1;
//	if (n > 2) {
//		for (int i = 2; i <= sqrt(n); i++) {
//			if (n % i == 0) return 0;
//		}
//	}
//	return 1;
//}
//void hoanhao() {
//	for (long long i = 0; i <= 29; i++) {
//		if (nt(i) && nt(pow(2, i)-1)) {
//			//if ((1ll*pow(2, i - 1) * (pow(2, i) - 1) )== n) return 1;
//			printf("%lf\n",(long)pow(2, i - 1) * (pow(2, i) - 1));
//		}
//	}
//	//return 0;
//}

//BAI 20:
//void phantich(int n,int k) {
//	int count=0;
//	for (int i = 2; i <= sqrt(n); i++) {
//		if (n % i == 0) {
//			while (n % i == 0) {
//				count++;
//				if (count == k) {
//					printf("%d", i);
//					return;
//				}
//				n /= i;
//			}
//		}
//	}
//	if (count + 1 == k) {
//		printf("%d", n);
//	}
//	else {
//		printf("%d", -1);
//	}
//}

//BAI 21:BINH PHUONG SO NGUYEN TO 1
//void check(int n) {
//	int temp = n;
//	for (int i = 2; i <= sqrt(n); i++) {
//		if (n % i == 0) {
//			int mu = 0;
//			while (n%i==0)
//			{
//				mu++;
//				if (mu == 2) {
//					printf("%d ", temp);
//					return;
//				}
//				n /= i;
//			}
//		}
//	}
//}

//BAI 22:BINH PHUONG SO NGUYEN TO 2
//int check(int n) {
//	int temp = 0;
//	for (int i=2; i <= sqrt(n); i++) {
//		if (n % i == 0) {
//			int mu = 0;
//			temp = 0;
//			while (n%i==0)
//			{
//				mu++;
//				if (mu == 2) {
//					temp = 1;
//				}
//				if (mu == 1) temp = 0;
//				n/= i;
//			}
//			if (temp == 0) return 0;
//		}
//	}
//	return n==1&&temp;
//}
//BAI 23: SO NGUYEN DUONG NHO NHAT CHIA HET CHO X, Y, Z
//int ucln(int a, int b) {
//	int r=1;
//	while (r != 0) {
//		r = a % b;
//		a = b;
//		b = r;
//	}
//	return a;
//}
//int bcnn(int a, int b) {
//	return a * b / ucln(a, b);
//}

//BAI 24:HAI SO NGUYEN TO CUNG NHAU
//int ucln(int a, int b) {
//	int r = 1;
//	while (r != 0) {
//		r = a % b;
//		a = b;
//		b = r;
//	}
//	return a;
//
//}
//int bcnn(int a, int b) {
//	return a / ucln(a,b) * b;
//}

//BAi 26:fibonancci 1

//void fb(int n) {
//	if (n == 1) { 
//		printf("1");
//	}
//	else if (n == 2) {
//		printf("1 1");
//	}
//	else {
//		int a = 1; int b = 1;
//		int temp = 0;
//		printf("%d %d ", a, b);
//		for (int i = 3; i <= n; i++) {
//			temp = a + b;
//			a = b;
//			b = temp;
//			printf("%d ", temp);
//			}
//	}
//}
//BAI 27 FIBONANCCI 2
//int check(int n) {
//	if (n == 1) {
//		return 1;
//	}
//	else if (n < 1) {
//		return 0;
//	}
//	else {
//		int a = 1; int b = 1;
//		int temp = 1;
//		while (temp <= n) {
//			temp = a + b;
//			b = temp;
//			a = b;
//			if (temp == n) return 1;
//			
//		}
//		return 0;
//	}
//}
//BAI 28:FIBONANCCI 3
//void find(long long n) {
//	if (n == 1) {
//		printf("1");
//	}
//	else {
//		long long a = 1; long long b = 1;
//		long long temp = 1;
//		while(temp < n) {
//			temp = a + b;
//			a = b;
//			b = temp;
//			
//		}
//		//printf("%lld %lld %lld", a, b, temp);
//		printf("%lld", temp);
//	}
//}

//BAI 29: FIBONANCCI 4
int nt(long long n) {
	if (n == 2) {
		return 1;
	}
	else if (n < 2) {
		return 0;
	}
	else {
		for (int i = 2; i <= sqrt(n); i++) {
			if (n % i == 0) {
				return 0;
			}
		}
		return 1;
	}
}

int sum(long long n) {
	int res = 0;
	if (n == 0) res = 0;
	while (n != 0) {
		res += n % 10; n /= 10;
	}
	return res;
}
int check(long long n) {
	int a = 1; int b = 1; int temp = 1;
	if (a == 1) {
		return 1;
	}
	else {
		for (int i = 0; i <= 92; i++) {
			temp = a + n;
			if (temp == n) {
				return 1;
			}
			a = b;
			b = temp;
		}
	}
	
}
int main() {
	long long n;
	scanf("%d", &n);
	for (long long i = 1; i <= n; i++) {
		if (nt(i) && check(sum(i))) {
			printf("%lld ",i);
		}
	}
	return 0;
}