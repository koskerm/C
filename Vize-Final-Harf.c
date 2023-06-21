#include<stdio.h>
int main()
{
	
	
	int vize;
	int final;
	float ortalama;
	char harf;
	
	printf("\nOgrencinin vize notunu giriniz:");
	scanf("%d",&vize);
	
	printf("\nOgrencinin final notunu giriniz:");
	scanf("%d",&final);
	
	ortalama=(vize*0.4)+(final*0.6);
	
	if(ortalama<50)
	harf='F';
	else if(ortalama<60)
	harf='D';
	else if(ortalama<70)
	harf='C';
	else if(ortalama<80)
	harf='B';
	else
	harf='A';
	
	printf("Basari ortalamasi=%.2f \n",ortalama);
	printf("Ogrencinin harf notu=%c \n",harf);
	return 0;
}
