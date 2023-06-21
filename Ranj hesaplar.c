#include <stdio.h>
#include <conio.h>
int main()
{
	
	int sayi,max,min,ranj;
	
	printf("sayi");
	scanf("%d",&sayi);
	
	max=sayi;
	min=sayi;
	
	while(sayi!=-1){
		if(sayi>max)
		      max=sayi;
		      
		if(sayi<min)
		      min=sayi;
		      
		    ranj=max-min;
		    
		    printf("sayi");
		    scanf("%d",&sayi);
	}
	         printf("\n");
	         printf("Girilen sayilarin en buyugu=%d\n",max);
	         printf("Girilen sayilarin en kucugu=%d\n",min);
	         printf("Ranj=%d",ranj);
	         
	         return 0;
	         
}
