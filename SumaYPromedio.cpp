#include <stdio.h>

int main()
{
	int n1, n2, n3, suma, promedio;
	
	printf("Introduzca el primer numero: ");
	scanf("%d", &n1);
	
	printf("Introduzca el segundo numero: ");
	scanf("%d", &n2);
	
	printf("Introduzca el tercer numero: ");
	scanf("%d", &n3);
	
	suma = n1 + n2 + n3;
	promedio = suma / 3;
	
	printf("\nEl resultado de la suma es: %d", suma);
	printf("\nEl promedio es: %d", promedio);
	
	return 0;
}