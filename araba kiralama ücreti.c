#include <stdio.h>
int main()
{
	int gunsayisi,km,ucret;
	char tip;
	
	printf("Aracin tipini giriniz:");
	scanf("%c",&tip);
	
	printf("Gun sayisi giriniz:");
	scanf("%d",&gunsayisi);
	
	printf("Km giriniz:");
	scanf("%d",&km);
	
	switch(tip){
		case 'a':
		case 'A':
			ucret=(20*gunsayisi)+(km*18);
			break;
		
		case 'b':
		case 'B':
			ucret=(32*gunsayisi)+(km*22);
			break;
			
		case 'p':
		case 'P':
			ucret=(51*gunsayisi)+(km*36);
			break;
	 
	    case 's':
	    case 'S':
	    	ucret=(43*gunsayisi)+(km*28);
	    	break;
	    	
	    	default:
	    		printf("Yanlis deger girdiniz!");
	    }		
	        
	        printf("Odemeniz gereken tutar=%d $ dir. \n",ucret);
	        
	        return 0;
		
}
