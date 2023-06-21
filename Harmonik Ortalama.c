#include<stdio.h>
int main()
{
	int sayi1;
	int sayi2;
	float harmonikOrt;
	
	printf("ilk sayiyi giriniz:");
	scanf("%d",&sayi1);
	printf("ikinci sayiyi giriniz:");
	scanf("%d",&sayi2);
	harmonikOrt=(2.0*sayi1*sayi2)/(sayi1+sayi2);
	printf("\nHarmonik ortalama=%.2f",harmonikOrt);
	return 0;
}
