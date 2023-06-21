#include <stdio.h>
int main()
{
	int a;
	
	printf("(1-3) arasi rakam giriniz:");
	scanf("%d",&a);
	
	switch(a){
		
		case 1:
			printf("Bir \n");
			break;
		
		case 2:
			printf("iki \n");
			break;
		
		case 3:
			printf("Uc \n");
			break;
			
			default:
				printf("Yanlis deger girdiniz!");
		
	}	
	
	      system("pause");
	      
	      return 0;
	
}	
	






