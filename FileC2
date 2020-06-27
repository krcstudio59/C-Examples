#include <stdio.h>
#include <stdlib.h>


int main() {
	
	
	FILE *dosya = fopen("sayilar.txt", "r+");
	if(dosya == NULL){
		printf("sayilar.txt bulunamadi");
		return 0;
	}
	int asd[40];
	int i;
	int j;
	int k;
	char y[5];
	for(i = 0; i < 15; i++)
	{
		fscanf(dosya, "%d", &asd[i]);
	}
	for (k = 15; k < 40; k++)
  	{
  		scanf("%d", &asd[k]);
  	}
  	fclose(dosya);
  	
  	FILE *dosya2 = fopen("sayilar.txt", "w");
	for(j = 0; j < 40; j++)
	{
		itoa(asd[j],y,10);
	 	fprintf(dosya2, y);
	 	fprintf(dosya2,"\n");
	 	
		
	}
	printf("\nEklenenler : \n");
	for(j = 15; j < 40; j++)
	{
		
	 	printf("%d-",asd[j]);
		
	}
	fclose(dosya);
	return 0;
}
