#include <stdio.h>
int main()
{
	
	int sayi,i,test=0;
	
	printf("Bir tamsayi giriniz:");
	scanf("%d",&sayi);
	
	for(i=2;i<sayi;i++)
	{
		 if(sayi%i==0)
		  {
		  
		     test=1;
		     break;
		   }  
	}
	     if(test==1)
	        printf("Asal sayi degildir. \n");
	    else
	        printf("Asal sayidir. \n");
	        
	        return 0;
}
