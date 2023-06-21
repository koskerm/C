#include <stdio.h>
int main()
{
	
	int kenar_uzun,a,b;
	
	    printf("Lutfen kenar uzunlugu giriniz:");
	    scanf("%d",&kenar_uzun);
	    
	        for(a=1;a<=kenar_uzun;a++){
	        	
	        	for(b=1;b<=a;b++)
	        	   
	        	     printf("*");
	        	     printf("\n");
			}
			      
			      return 0;
}
