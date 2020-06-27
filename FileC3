#include <stdio.h>
#include <stdlib.h>

int main() {
	FILE *dosya = fopen("sayilar.txt", "r");
	if(dosya == NULL)
	{
		printf("sayilar.txt bulunamadi");
		return 0;
	}
	int asd[40];
	int i,j;
	int x;
	int sayiasal = 0;
	int sayi = 0;
	int sayac = 0;
	
	for(i = 0; i < 40; i++)
	{
		fscanf(dosya, "%d", &asd[i]);
	}
	for(j = 0; j<40; j++)
	{
		//asal
		if(asd[j]>1)
		{
			for(x=2;x<asd[j];x++)
    		{
       			if(asd[j]%x==0)
       			{
           		sayac++;
       			}    
   			}     
       		if(sayac==0)
    		{
        		printf("%d\n",asd[j]);    
				sayiasal++;
    		}
    		else
    		{
        	printf("%d",asd[j]);
			printf("\n"); 
    		}
		}
		
	}
	printf("\ntoplam asal sayi sayisi : %d",sayiasal);
	
	return 0;
}
