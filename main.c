#include <stdio.h>

int main() {
	char c = 1;
	int i = 1;
	long l = 1;
	
	printf ("Hex: %p, Decimal: %lu\n", &c, &c);
	printf ("Hex: %p, Decimal: %lu\n", &i, &i);
	printf ("Hex: %p, Decimal: %lu\n\n", &l, &l);
	//char is one byte above the int
	//the int is 4 bytes above the long
	
	char *cp = &c;
	int *ip = &i;
	long *lp = &l;
	
	printf ("cp: %p\n", cp);
	printf ("ip: %p\n", ip);
	printf ("lp: %p\n\n", lp);
	
	*cp = 5;
	*ip = 10;
	*lp = 15;
	
	printf ("New c: %d\n", c);
	printf ("New i: %d\n", i);
	printf ("New l: %d\n\n", l);
	
	unsigned int ui = 50;
	int *uip = &ui;
	char *ucp = &ui;
	
	printf ("uip: %p, uip points to: %d\n", uip, *uip);
	printf ("ucp: %p, ucp points to: %d\n\n", ucp, *ucp);
	
	printf ("Hex: %x, Decimal: %u\n\n", ui, ui);
	
	int x;
	for(x = 0; x < 4; x++) {
		printf("d[%d]: %hhx, %hhu\n", x, ucp[x], ucp[x]);
	}
	
	printf ("\n");
	
	for (x = 0; x < 4; x++) {
		ucp[x] += 1;
		printf("d[%d]: %x, %u\n", x, ui, ui);
	}
	
	printf ("\n");
	
	for(x = 0; x < 4; x++) {
		printf("d[%d]: %hhx, %hhu\n", x, ucp[x], ucp[x]);
	}
	
	printf ("\n");
	
	for (x = 0; x < 4; x++) {
		ucp[x] += 16;
		printf("d[%d]: %x, %u\n", x, ui, ui);
	}
	
	printf ("\n");
	
	for(x = 0; x < 4; x++) {
		printf("d[%d]: %hhx, %hhu\n", x, ucp[x], ucp[x]);
	}
     
	return 0;
}



