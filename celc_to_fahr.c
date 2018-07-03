#include<stdio.h>

int main()
{
	float celcius, fahr;
	float start, end, increment;

	printf("This program displays a table of Celcius temperatures and their Fahrenheit equivalents.\n");

	printf("Please enter the lowest temperature you'd like on the table (in Celcius).\n");
	scanf("%f", &start);
	
	printf("Please enter the highest temperature you'd like on the table (in Celcius).\n");
	scanf("%f", &end);

	printf("Please enter the desired increment between the displayed values.\n");
	scanf("%f", &increment);

	/* Table Output */
	printf("\nCelcius\t Fahrenheit\n");

celcius = start;
while (celcius <= end) {
	fahr = (celcius * 1.8) + 32.0;
	printf("%6.1f \t %8.1f\n", celcius, fahr);

	celcius = celcius + increment;
	}
}
