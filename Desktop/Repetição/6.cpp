#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	float alt, peso, imc, altu;
	int resp;

printf("Deseja calcular seu IMC? \n");
       printf("1 � para Sim ou 2 � para N�o: \n");
		scanf("%d",&resp);
while(resp==1){
			
	printf("\n Digite seu peso: ");
	scanf("%f", &peso);
	
	printf("\n Digite sua altura: ");
	scanf("%f", &altu);
	
	alt= altu*altu;
	imc=(peso/alt);
	
printf ("Seu imc � de: %.2f ", imc);
	if (imc < 18){
		printf ("Voc� est� em estado de magreza \n");
	}
	else{
		if(imc = 18 && imc < 25){
			printf("Voc� est� saud�vel \n");
			}
			else{
				if(imc = 25 && imc < 30){
					printf ("Voc� est� com sobrepeso \n");
				}
				else{
					if(imc >= 30){
						printf ("Voc� est� obeso \n");
					}
				}
			}
	}
printf("Deseja calcular seu IMC? \n");
       printf("1 � para Sim ou 2 � para N�o: \n");
		scanf("%d",&resp);
}
	return 0;
}
