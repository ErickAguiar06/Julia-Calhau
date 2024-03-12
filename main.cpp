#include <stdio.h>
int main()
{
	int x, y, z;
    printf("Digite o primeiro numero x:");
    scanf("%d" ,&x);

    printf("Digite o segundo numero y:");
    scanf("%d" ,&y);
    z = (x +y);
    
    printf("A soma de x + y é igual a = ");
	printf("%d" ,z);
	return 0;
}