#include<stdio.h>
int main()
{
	int taban,yukseklik;
	float alan;
	printf("ucgenin tabani=");
	scanf("%d",&taban);
	printf("ucgenin yuksekligi=");
	scanf("%d",&yukseklik);
	alan=(taban*yukseklik)/2.0;
	printf("\n\n ucgenin alani=%.2f dir\n",alan);
	return 0;
}
