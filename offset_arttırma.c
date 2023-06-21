#include <stdio.h>
 
 int main( )
{
  int b[ ] = { 10, 20, 30, 40 };
   /* bPtr b dizisini göstersin */
   int *bPtr = b; 
   int i, offset;
 
       printf( "\nDizi Eleman Adresleri\n" );	
 	 for ( i = 0; i < 4; i++ )
 	     printf("b[%d] adresi= %p \n",i,&b[i]);
 	printf( "\nDizi belirtecleri yontemi\n" );	 
 	   for ( i = 0; i < 4; i++ )
 	      printf( "b[ %d ] = %d\n", i, b[ i ] );
  	 printf( "\nGosterici/offset yöntemi,\n");
 	    for ( offset = 0; offset < 4; offset++ )
	        printf( "*( b + %d ) = %d\n", offset, *( b + offset ) );
  	  printf( "\nGosterici belirtec yontemi\n" );
 	    for ( i = 0; i < 4; i++ )
 	       printf( " bPtr[ %d ] = %d\n", i, bPtr[ i ] );
 	   printf( "\nGosterici/offset yontemi\n" );
 	for ( offset = 0; offset < 4; offset++ )
          printf( "*( bPtr + %d ) = %d\n", offset, *( bPtr + offset ) );
 
	return 0;
 }
