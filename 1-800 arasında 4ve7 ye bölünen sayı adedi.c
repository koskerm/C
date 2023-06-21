#include <stdio.h>
int main()
{
	
	int sayac=1,adet=0;
	
	while(sayac<=800){
		if(sayac%4==0 && sayac%7==0)
		  
		  {
		  	adet++;
		  }
		    
		    sayac=sayac+1;
		    
	}
		   
		   printf("Sayi adeti=%d \n",adet);
		   
		    return 0;
		
		
}
