#include <stdio.h>
#include <conio.h>
#include <locale.h>

void check_bring_triangl(float, float, float, float, float, float, float, float);
void check_triangln(float, float, float, float, float, float);

int main()
{
	setlocale(LC_ALL, "Rus");
	float Ax, Ay, Bx, By, Cx, Cy, Dx, Dy;
	printf("Введите координаты точек треугольника\n");
	printf("Ax Ay: ");
	scanf_s("%f%f", &Ax, &Ay);
	printf("Bx By: ");
	scanf_s("%f%f", &Bx, &By);
	printf("Cx Cy: ");
	scanf_s("%f%f", &Cx, &Cy);
	check_triangln(Ax, Ay, Bx, By, Cx, Cy);
	printf("Введите координаты точки D\n");
	printf("Dx Dy: ");
	scanf_s("%f%f", &Dx, &Dy);
	check_bring_triangl(Ax, Ay, Bx, By, Cx, Cy, Dx, Dy);
	_getch();
	return 0;
}
void check_triangln(float Ax, float Ay, float Bx, float By, float Cx, float Cy)
{
	if (Ax == Bx == Cx || Ay == By == Cy)
		printf("Такого треугольника не существует!\n");
}


void check_bring_triangl(float Ax, float Ay, float Bx, float By, float Cx, float Cy, float Dx, float Dy)
{
	int res1, res2, res3;
	res1 = (Ax - Dx) * (By - Ay) - (Bx - Ax) * (Ay - Dy);
	res2 = (Bx - Dx) * (Cy - By) - (Cx - Bx) * (By - Dy);
	res3 = (Cx - Dx) * (Ay - Cy) - (Ax - Cx) * (Cy - Dy);
	if (res1>0 && res2>0 && res3 > 0 || res1<0 && res2<0 && res3 < 0)
	{
		printf("Точка принадлежит треугольнику\n");
	}
	else printf("Точка не принадлежит треугольнику\n");
}

