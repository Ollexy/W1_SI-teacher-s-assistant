#include <stdio.h>


void stats();
void menu();
void typingGrade(float average);
void scholarship(float average);

int main()
{
	char choice;

	do {

		menu();

		choice = getch();

		float grades[8], sum = 0, average, student[5], math[7], english[7], history[7];

		switch (choice)
		{

		case '1':
			printf("Harper Eland\n");


				for (int i = 0; i < 7; i++)
				{
					printf("Enter %d grade: ", i + 1);
					scanf_s("%g", grades + i);

					sum += grades[i];
				}
				average = sum / 7;
				printf("%.1f\n", average);

				typingGrade(average);
				scholarship(average);
			break;
		case '2':
			printf("Celement Hayes\n");

			for (int i = 0; i < 7; i++)
			{
				printf("Enter %d grade: ", i + 1);
				scanf_s("%g", grades + i);

				sum += grades[i];
			}
			average = sum / 7;
			printf("%.1f\n", average);

			typingGrade(average);
			scholarship(average);
			break;
		case '3':
			printf("Balinsa Jacobs\n");

			for (int i = 0; i < 7; i++)
			{
				printf("Enter %d grade: ", i + 1);
				scanf_s("%g", grades + i);

				sum += grades[i];
			}
			average = sum / 7;
			printf("%.1f\n", average);

			typingGrade(average);
			scholarship(average);
			break;
		case '4':
			printf("Cedric Santos\n");

			for (int i = 0; i < 7; i++)
			{
				printf("Enter %d grade: ", i + 1);
				scanf_s("%g", grades + i);

				sum += grades[i];
			}
			average = sum / 7;
			printf("%.1f\n", average);

			typingGrade(average);
			scholarship(average);
			break;
		case '5':
			printf("Fiona Wilcher\n");

			for (int i = 0; i < 7; i++)
			{
				printf("Enter %d grade: ", i + 1);
				scanf_s("%g", grades + i);

				sum += grades[i];
			}
			average = sum / 7;
			printf("%.1f\n", average);

			typingGrade(average);
			scholarship(average);
			break;
		case '6':
			stats();
			break;

		default: printf("There is no such option. Try again with another one.\n");

		}
	}while (choice != '1','2','3','4','5','6');
	return 0;
}
void stats()
{
	printf("STATS\n");
	printf("\n");
	printf("Average math note: \n");
	printf("Average english note: \n");
	printf("Average history note: \n");
	printf("Highest note: \n");
	printf("Lowest note: \n");
	printf("Students with a schoolarship: \n");
}
void menu()
{
	printf("CHOOSE STUDENT\n");
	printf("---------------\n");
	printf("(1) Harper Eland\n");
	printf("(2) Celement Hayes\n");
	printf("(3) Belinsa Jacobs\n");
	printf("(4) Cedric Santos\n");
	printf("(5) Fiona Wilcher\n");
	printf("(6) Stats\n\n");
}
void typingGrade(float average)
{
	if (average < 50)
		printf("Grade: F\n");
	else if ((average > 50) && (average <= 60))
		printf("Grade: E\n");
	else if ((average > 60) && (average <= 70))
		printf("Grade: D\n");
	else if ((average > 70) && (average <= 80))
		printf("Grade: C\n");
	else if ((average > 80) && (average <= 90))
		printf("Grade: B\n");
	else if (average > 90)
		printf("Grade: A\n");
	else
		printf("Invalid!\n");
}
void scholarship(float average)
{
	if (average > 95)
		printf("Eligible for scholarship\n\n");
	else
		printf("Not eligible for scholarship\n\n");
}
