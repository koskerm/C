#include <stdio.h>
int main()
{
	int dogru,yanlis;
	float net;
	
	printf("Dogru sayisini giriniz:");
	scanf("%d",&dogru);
	
	printf("Yanlis sayisini giriniz:");
	scanf("%d",&yanlis);
	
	net=dogru-(yanlis/4.0);
	
	if(net<10)
	   printf("Beginner \n");
	   
	else if(net>=10 && net<30)
	   printf("Elemantary \n");
	   
	else if(net>=30 && net<50)
	   printf("Pre-intermediate \n");
	   
	else if(net>=50 && net<80)
	   printf("intermediate \n");
	   
	else
	   printf("Upper \n");
	   
	   return 0;
	
	
	
	
	
	
}
