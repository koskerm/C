#include <stdio.h>
int main()
{
	int a,b;
	int toplam;
	
	printf("Bir tamsayi giriniz:");
	scanf("%d",&a);
	
	for(b=1;b<=a;b++){
		
		   toplam=0;
		   
		   if(a%b==0)
		        toplam+=b;
		}	
		   
		   if(toplam<a)
		      printf("Bu sayi noksandir. \n\n");
		    
		    else
		      printf("Bu sayi noksan degildir. \n\n");
		      
		        return 0;
		

	
	
}
