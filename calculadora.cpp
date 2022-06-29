#include <stdio.h>

int main() {
	
	int quantia, cedula1 = 0, cedula2 = 0, cedula5 = 0, cedula10 = 0, cedula20 = 0, cedula50 = 0, cedula100 = 0;
	
	printf("Insira a quantia em dinheiro a ser calculada (apenas valores inteiros): ");
	scanf("%d", &quantia);
	
	while (quantia > 0) {
	    if (quantia >= 100) {
            quantia = quantia - 100;
            cedula100 = cedula100 + 1;
        } else if (quantia >= 50) {
            quantia = quantia - 50;
            cedula50 = cedula50 + 1;
        } else if (quantia >= 20) { 
            quantia = quantia - 20;
            cedula20 = cedula20 + 1;
        } else if (quantia >= 10) { 
            quantia = quantia - 10;
            cedula10 = cedula10 + 1;
        } else if (quantia >= 5) {
            quantia = quantia - 5;
            cedula5 = cedula5 + 1;
        } else if (quantia >= 2) {
            quantia = quantia - 2;
            cedula2 = cedula2 + 1;
        } else {
            quantia = quantia - 1;
            cedula1 = cedula1 + 1;
        }
	}
	
	printf("\n");

	printf("%d cédula(s) de 100 \n", cedula100);
	printf("%d cédula(s) de 50 \n", cedula50);
	printf("%d cédula(s) de 20 \n", cedula20);
	printf("%d cédula(s) de 10 \n", cedula10);
	printf("%d cédula(s) de 5 \n", cedula5);
	printf("%d cédula(s) de 2 \n", cedula2);
	printf("%d cédula(s) de 1 \n", cedula1);
	
	return 0;
}
