#include<stdio.h>
int main()
{
	
	int gun;
	int yevmiye;
	float maas;
	
	printf("Gun sayisi giriniz:");
	scanf("%d",&gun);
	
	printf("Yevmiye giriniz:");
	scanf("%d",&yevmiye);
	
	maas=(gun*yevmiye);
	
	printf("\n\n maas=%.2f TL dir",maas);
	return 0;
}
