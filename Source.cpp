#include <stdio.h>
#include <conio.h>
#include <locale.h>

void check_bring_triangl(float, float, float, float, float, float, float, float);
void check_triangln(float, float, float, float, float, float);

int main()
{
	setlocale(LC_ALL, "Rus");
	float Ax, Ay, Bx, By, Cx, Cy, Dx, Dy;
	printf("¬ведите координаты точек треугольника\n");
	printf("Ax Ay: ");
	scanf_s("%f%f", &Ax, &Ay);
	printf("Bx By: ");
	scanf_s("%f%f", &Bx, &By);
	printf("Cx Cy: ");
	scanf_s("%f%f", &Cx, &Cy);
	check_triangln(Ax, Ay, Bx, By, Cx, Cy);
	printf("¬ведите координаты точки D\n");
	printf("Dx Dy: ");
	scanf_s("%f%f", &Dx, &Dy);
	check_bring_triangl(Ax, Ay, Bx, By, Cx, Cy, Dx, Dy);
	_getch();
	return 0;
}


