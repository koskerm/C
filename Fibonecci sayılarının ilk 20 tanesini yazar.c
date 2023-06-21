#include <stdio.h>
int main()
{
	int sayac=1,s1=1,s2=1,s3;
	
	printf("%d \n",s1);
	printf("%d \n",s2);
	
	   while(sayac<=18){
	   	
	   	  s3=s1+s2;
	   	   
	   	     printf("%d \n",s3);
	   	     
	   	       s1=s2;
	   	       s2=s3;
	   	       sayac++;
	   }
	         return 0;
}
