#include <stdio.h>
int main()
{
	
	int sayac=1;
	
	while(sayac<=800){
		if(sayac%4==0 || sayac%7==0)
		printf("%d \n",sayac);
		
		sayac=sayac+1;
	}	
		return 0;
	
}
