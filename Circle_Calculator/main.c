#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//prototype 
float calcArea(float r);
float calcCircumference(float r);
float calcDiameter(float r);
void displayMenu();
void clear();
///////////////////////////////////////////
int main(void)
{
	system("clear");
	float r;
	int choice;
	printf("Enter the radius for a circle: ");
	scanf("%f", &r);

	do
	{
		system("clear");
		displayMenu();
		scanf("%d", &choice);
		printf("------------------------------------------------------");
		switch (choice)
		{
		case 1:
			printf("\nThe Area of a circle is: %.1f\n", calcArea(r));
			printf("\n\nPress [Enter] to continue");
			break;

		case 2:
			printf("\nThe Circumference of a circle is: %.1f\n", calcCircumference(r));
			printf("\n\nPress [Enter] to continue");
			break;

		case 3:
			printf("\nThe Diameter of a circle is: %.1f\n", calcDiameter(r));
			printf("\n\nPress [Enter] to continue");
			break;

		case 4:
			printf("\nEnding the program..... Press [Enter] to finsh");
			break;
		}
		clear();// clear the buffer
		getchar();//hold screen

	} while (choice != 4);
	return 0;
}
////////////////////////////////////////////////////
// definitions 
float calcArea(float r)
{
	float area = 3.14 * r * r;
	return area;
}
////////////////////////////////////////////////////
float calcCircumference(float r)
{
	float circumference = 2.0 * 3.14 * r;
	return circumference;
}
///////////////////////////////////////////////////
float calcDiameter(float r)
{
	float diameter = 2.0 * r;
	return diameter;
}
////////////////////////////////////////////////////
void displayMenu()
{
	puts("------------------------------------------------------");
	puts("                   CIRCLE PROGRAM                    ");
	puts("-------------------------------------------------------");

	puts("1) calculate the area of a circle ");
	puts("2) calculate the circumference of a circle");
	puts("3) calculate the diameter of a circle");
	puts("4) Exit");
	puts("------------------------------------------------------");
	printf("Enter your choice [1-4]");
}
////////////////////////////////////////////////////
void clear()
{
	while (getchar() != '\n')
	{
		//this clear the input  buffer
	}
}




