#include <stdio.h>
#include <math.h>

int main(void)
{
	int i;
	int j;
	int text[15];
	int sayi, rakam, toplam = 0;
	char y[5];
	
	for (i = 0; i < 15; ++i)
  	{
  		scanf("%d", &text[i]);
  	}

	FILE *dosya = fopen("sayilar.txt","w");
	
	for (i = 0; i < 15; ++i)
  	{
  		itoa(text[i],y,10);
	 	fprintf(dosya, y);
	 	fprintf(dosya,"\n");
  	}
	
	fclose(dosya);
	return 0;
}
