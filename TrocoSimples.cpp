#include <stdio.h>

int main() {
	
	int Q, n1=0, n2=0, n5=0, n10=0, n20=0, n50=0, n100=0;
	
	printf("Insira a quantia em dinheiro (apenas valores inteiros): \n");
	scanf("%d", &Q);
	
	while(Q>0) {
		if (Q>=100) { Q=Q-100; n100=n100+1; }
		else if (Q>=50) { Q=Q-50; n50=n50+1; }
		else if (Q>=20) { Q=Q-20; n20=n20+1; }
		else if (Q>=10) { Q=Q-10; n10=n10+1; }
		else if (Q>=5) { Q=Q-5; n5=n5+1; }
		else if (Q>=2) { Q=Q-2; n2=n2+1; }
		else { Q=Q-1; n1=n1+1; }
	}
	
	printf("\n");
	printf("%d Nota(s) de 100 \n", n100);
	printf("%d Nota(s) de 50 \n", n50);
	printf("%d Nota(s) de 20 \n", n20);
	printf("%d Nota(s) de 10 \n", n10);
	printf("%d Nota(s) de 5 \n", n5);
	printf("%d Nota(s) de 2 \n", n2);
	printf("%d Nota(s) de 1 \n", n1);
	
	return 0;

}
