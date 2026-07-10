#include <stdio.h>

int peso;
int altura;
float IMC;

int main(void)
{

	do

	{
		printf("Inserte peso (no negativo): ");
		scanf("%d", &peso);
		if (peso < 0)
		{
			printf("Error: el peso no puede ser negativo. Intente de nuevo.\n");
		}
	}

	while (peso < 0);

	do

	{
		printf("Inserte altura en cm (no negativa): ");
		scanf("%d", &altura);
		if (altura < 0)

		{
			printf("Error: la altura no puede ser negativa. Intente de nuevo.\n");
		}

	}

	while (altura < 0);

	IMC = (float)peso / ((altura * altura) / 10000.0);
	printf("Tu IMC es: %.2f\n", IMC);

	printf("Valores IMC:\n");
	printf("Bajo peso: menor a 18.5\n");
	printf("Normal: 18.5 - 24.9\n");
	printf("Sobrepeso: 25 - 30\n");

	return 0;
}
