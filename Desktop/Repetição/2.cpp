#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{ 	
	float a,b,area;
	int i;
	 i=1;
			
	printf ("Digite a base do ret�ngulo: ");
	scanf ("%f", &b);
	
	printf ("Digite a altura do ret�ngulo: ");
	scanf ("%f", &a);
	
	area = b * a;
	printf("A �rea do seu ret�ngulo e de: %f \n",area);

	i=i+1;
}
	system ("PAUSE");
	return 0;
}
