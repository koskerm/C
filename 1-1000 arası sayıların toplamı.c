#include <stdio.h>
int main()
{
	
	int sayac=1,toplam=0;
	
	while(sayac<=1000){
		toplam=sayac+toplam;
		sayac=sayac+1;
	}
	
	printf("Toplam=%d \n dir.",toplam);
	
	return 0;
}
