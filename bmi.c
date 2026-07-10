#include <stdio.h>

int peso;
int altura;
float IMC;

int main(void)
{
	printf ("inserte peso ");
	scanf("%d", &peso);
	printf("inserte altura en cm ");
	scanf("%d", &altura);
	IMC = (float)peso/((altura*altura)/100);
    printf("tu IMC es: %f " , IMC*100);
	printf("valores iMC \t\n");
	printf("bajo peso: menor 18.5 \t\n");
	printf("normal:18.5 - 24.9 \t\n");
	printf("sobrepeso: 25 - 30 \t\n");
	return 0;
}
