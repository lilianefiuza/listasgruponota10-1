#include <stdio.h>
#include <stdlib.h>

void main(){
	struct ponto{
		float x;
		float y;
	};

	struct ponto v;
	scanf("%f", &v.x);
	scanf("%f", &v.y);

	printf("%f\n", v.x);
	printf("%f\n", v.y);

}
