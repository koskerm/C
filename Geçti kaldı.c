#include<stdio.h>
int main()
{
	
	int vize;
	int final;
	float Notu;
	
	printf("Vize notunu giriniz:");
	scanf("%d",&vize);
	
	printf("Final notunu giriniz:");
	scanf("%d",&final);
	
	Notu=(vize*0.4)+(final*0.6);
	
	if(Notu>=60)
	printf("Gecti");
	if(Notu<60)
	printf("Kaldi");
	
	printf("---------------- \n\n");
	
	printf("Notu=%.2f \n",Notu);
	
	return 0;
}
