#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	system("color 7c");
	int n1, n2,r;
	
	printf("Vamos fazer uma soma, ");
	puts("Digite o valor para n1\n");
	scanf("%d, &n1");
	
	puts("Digite o valor para n2\n");
	scanf("%d, &n2");
	
	r = n1+n2;
	printf("Valor da soma = %d\n",r);
	
	return 0;
}
