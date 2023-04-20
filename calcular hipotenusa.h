#include <stdio.h>
#include <math.h>

main(void){
	float cateto1, cateto2, mult;
	printf("Digite valor do cateto1: ");
	scanf("%f",&cateto1);
	printf("Digite valor do cateto2: ");
	scanf("%f",&cateto2);
	
	mult = cateto1*cateto1+cateto2*cateto2;
	
	printf("A hipotenusa eh:%f",sqrt(mult));
	
}
