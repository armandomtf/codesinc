#include <stdio.h>


int main() {
	float comissao, bruto, liquido, resto, limpeza=40;
	int noites;
	
	printf("Valor total da reserva:\n");
	scanf("%f",&bruto);
	printf("Numero de noites:\n");
	scanf("%d",&noites);
	
	liquido=bruto - limpeza;
	comissao = (liquido*0.2)+limpeza;
	resto= bruto-comissao;
	
	printf("\nA comissao para a reserva de %d noites eh: R$%.1f\n",noites,comissao);
	printf("Sobram: R$%.1f",resto);
	return 0;
}
