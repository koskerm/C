#include<stdio.h>
int main()
{
	
	int sayi;
	printf("Sayi giriniz:");
	scanf("%d",&sayi);
	if(sayi>0)
	printf("Bu sayi pozitiftir.");
	if(sayi<0)
	printf("Bu sayi negatiftir");
	if(sayi==0)
	printf("Bu sayi 0 dir");
	return 0;
}
