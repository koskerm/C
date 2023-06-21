#include<stdio.h>

struct zaman{
	int saniye;
	int dakika;
	int saat;
};

void farkBul(struct zaman z1,struct zaman z2,struct zaman *fark);

int main()
{
	struct zaman birinciZaman, ikinciZaman, fark;
	
	printf("Birinci zamani giriniz:\n");
	
	scanf("%d%d%d",&birinciZaman.saat, &birinciZaman.dakika, &birinciZaman.saniye);
	
	printf("Ýkinci zamani giriniz:\n");
	
	scanf("%d%d%d",&ikinciZaman.saat, ikinciZaman.dakika, &ikinciZaman.saniye);
	
	farkBul(birinciZaman,ikinciZaman, &fark);
	printf("\n Ýkisi arasindaki fark:%d%d%d",birinciZaman.saat, birinciZaman.dakika, birinciZaman.saniye);
    printf("\n %d:%d:%d",ikinciZaman.saat, ikinciZaman.dakika, ikinciZaman.saniye);
	printf("\n %d:%d:%d",fark.saat, fark.dakika, fark.saniye);
	return 0;
}  

void farkBul(struct zaman birinci, struct zaman ikinci, struct zaman *fark)
{
	while(ikinci.saniye>birinci.saniye){
		birinci.saniye+=60;
	}
	fark->saniye=birinci.saniye-ikinci.saniye;
	while(ikinci.dakika>birinci.dakika){
		birinci.dakika+=60;
	}
	fark->dakika=birinci.dakika-ikinci.dakika;
	fark->saat=birinci.saat-ikinci.saat;
}
