#include <stdio.h>
int main()
{
	float s1,s2,s3,yedek;
	
	printf("Sayilari giriniz:");
	scanf("%f%f%f",&s1,&s2,&s3);
	
	  if(s1<s2){
	    yedek=s1;
	    s1=s2;
	    s2=yedek;
	  }
	  
	  if(s2<s3){
	  	yedek=s2;
	  	s2=s3;
	  	s3=yedek;
	  }
	  
	 if(s1<s2){
	 	yedek=s1;
	 	s1=s2;
	 	s2=yedek;
	 }
	 
	 printf("%.2f,%.2f,%.2f",s1,s2,s3);
	 
	 return 0;
	 
	 
	}  
	
	    
	    
	
	
	
	
	
	
	
	
	
	
	
	

