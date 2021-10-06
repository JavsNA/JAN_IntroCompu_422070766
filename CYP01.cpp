#include <stdio.h>

int main()
{
	
	int Ancho;
	int Alto;
	float PorcentajeX;
	float PorcentajeY;
	float Porcentaje_Ancho;
	float Porcentaje_Alto;
	int X;
	int Y;
	int X2;
	int Y2;

	scanf_s("%i", &Ancho);
 
	scanf_s("%i", &Alto);

	scanf_s("%f", &PorcentajeX);

	scanf_s("%f", &PorcentajeY);

	scanf_s("%f", &Porcentaje_Ancho);

	scanf_s("%f", &Porcentaje_Alto);


	X = Ancho * PorcentajeX;
	Y = Alto * PorcentajeY;
	X2 = X + Ancho * Porcentaje_Ancho;
	Y2 = Y + Alto * Porcentaje_Alto;


	printf("%i " "%i " "%5.2f " "%5.2f " "%5.2f " "%5.2f " "%i " "%i " "%i " "%i", Ancho, Alto, PorcentajeX, PorcentajeY, Porcentaje_Ancho, Porcentaje_Alto, X, Y, X2, Y2);

	return 0;
}
