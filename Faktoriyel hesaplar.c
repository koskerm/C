#include <stdio.h>
int main()
{
	
	int sayi,sayac=2;
	long sonuc=1;
	
	printf("Bir pozitif tamsayi giriniz:");
	scanf("%d",&sayi);
	
	while(sayi<=0){
		printf("Yanlis sayi,lutfen pozitif tamsayi giriniz:");
		scanf("%d",&sayi);
	}
	
    while(sayac<=sayi){
    	sonuc=sonuc*sayac;
    	sayac=sayac+1;
	}
	
	    printf("\n %d!=%ld \n",sayi,sonuc);
	    
	    return 0;
}
