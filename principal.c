#include "pi.h"
#include <stdio.h>

int main() {
	float ray;
	printf("Rayon !");
	scanf("%f",&ray);
	printf("%f %f",circ(ray),surf(ray));
	return 0;
}
