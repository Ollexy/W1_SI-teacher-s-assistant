#include <stdio.h>
#include <time.h>

void menu();
void gradeCalculation(float average);
void subjects();
float enterForPerson();

int main()
{
	char choice;

	while (1) {

		menu();

		choice = getch();

		//declaring variables
		float student[5], math[6], english[6], history[6], averageThreeNotes[5], scholarship = 0;

		switch (choice)
		{
		case '1':					//choosing a student
		{
			printf("Harper Eland\n\n");
			subjects();

			choice = getch();
			if (choice == 'm')		//choosing a subject
			{
				math[0] = enterForPerson();		//calculating grade from each subject
			}
			else if (choice == 'e')
			{
				english[0] = enterForPerson();
			}
			else if (choice == 'h')
			{
				history[0] = enterForPerson();
			}
			else if (choice == 's')
			{
				averageThreeNotes[0] = (math[0] + english[0] + history[0]) / 3;		//you have to calculate average for every signle
				printf("Average from 3 subject = %.1f\n", averageThreeNotes[0]);	//subject then you can calculate if student is eligable
				if (averageThreeNotes[0] > 95)										//for scholarship
					scholarship++;
					printf("You are eligable for scholarship\n\n");
			}
		}
		break;
		case '2':				
		{
			printf("Celement Hayes\n\n");
			subjects();

			choice = getch();
			if (choice == 'm')
			{
				math[1] = enterForPerson();
			}
			else if (choice == 'e')
			{
				english[1] = enterForPerson();
			}
			else if (choice == 'h')
			{
				history[1] = enterForPerson();
			}
			else if (choice == 's')
			{
				averageThreeNotes[1] = (math[1] + english[1] + history[1]) / 3;
				printf("Average from 3 subject = %.1f\n", averageThreeNotes[1]);
				if (averageThreeNotes[1] > 95)
					printf("You are eligable for scholarship\n\n");
			}
		}
		break;
		case '3':					//wybor ucznia
		{
			printf("Belinsa Jacobs\n\n");
			subjects();

			choice = getch();
			if (choice == 'm')
			{
				math[2] = enterForPerson();
			}
			else if (choice == 'e')
			{
				english[2] = enterForPerson();
			}
			else if (choice == 'h')
			{
				history[2] = enterForPerson();
			}
			else if (choice == 's')
			{
				averageThreeNotes[2] = (math[2] + english[2] + history[2]) / 3;
				printf("Average from 3 subject = %.1f\n", averageThreeNotes[2]);
				if (averageThreeNotes[2] > 95)
					printf("You are eligable for scholarship\n\n");
			}
		}
		break;
		case '4':					//wybor ucznia
		{
			printf("Cedric Santos\n\n");
			subjects();

			choice = getch();
			if (choice == 'm')
			{
				math[3] = enterForPerson();
			}
			else if (choice == 'e')
			{
				english[3] = enterForPerson();
			}
			else if (choice == 'h')
			{
				history[3] = enterForPerson();
			}
			else if (choice == 's')
			{
				averageThreeNotes[3] = (math[3] + english[3] + history[3]) / 3;
				printf("Average from 3 subject = %.1f\n", averageThreeNotes[3]);
				if (averageThreeNotes[3] > 95)
					printf("You are eligable for scholarship\n\n");
			}
		}
		break;
		case '5':					//wybor ucznia
		{
			printf("Fiona Wilcher\n\n");
			subjects();

			choice = getch();
			if (choice == 'm')
			{
				math[4] = enterForPerson();
			}
			else if (choice == 'e')
			{
				english[4] = enterForPerson();
			}
			else if (choice == 'h')
			{
				history[4] = enterForPerson();
			}
			else if (choice == 's')
			{
				averageThreeNotes[4] = (math[4] + english[4] + history[4]) / 3;
				printf("Average from 3 subject = %.1f\n", averageThreeNotes[0]);
				if (averageThreeNotes[4] > 95)
					printf("You are eligable for scholarship\n\n");
			}
		}
		break;

		case '6':
		{
			printf("STATS\n");
			printf("\n");
			math[5] = (math[0] + math[1] + math[2] + math[3] + math[4]) / 5;
			printf("Average math note: %.1f\n", math[5]);

			english[5] = (english[0] + english[1] + english[2] + english[3] + english[4]) / 5;
			printf("Average english note: \n");

			math[5] = (math[0] + math[1] + math[2] + math[3] + math[4]) / 5;
			printf("Average history note: \n");
			printf("Highest note: \n");
			printf("Lowest note: \n");
			printf("Students with a schoolarship: %d\n\n", scholarship);
			return 0;
		}

		default: printf("There is no such option. Try again with another one.\n\n");
			Sleep(500);	/*after 0.5s screen*/
			system("cls");	/*will be cleared*/

			break;
		}
	}
	return 0;
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
void gradeCalculation(float average)
	{
		if (average < 50)
			printf("Grade: F\n\n");
		else if (average <= 60)
			printf("Grade: E\n\n");
		else if (average <= 70)
			printf("Grade: D\n\n");
		else if ((average > 70) && (average <= 80))
			printf("Grade: C\n\n");
		else if ((average > 80) && (average <= 90))
			printf("Grade: B\n\n");
		else if (average > 90)
			printf("Grade: A\n\n");
		else
			printf("Invalid!\n\n");

		Sleep(1000);	/*after 1s screen*/
		system("cls");	/*will be cleared*/
	}
void subjects()
	{
		printf("(m) Math\n");
		printf("(e) English\n");
		printf("(h) History\n");
		printf("(s) Scholarship\n\n");
	}
float enterForPerson() {
		float curGrade, sum = 0, average;
		for (int i = 0; i < 7; i++)
		{
			printf("Enter %d grade: ", i + 1);
			scanf_s("%g", &curGrade);

			sum += curGrade;
		}
		average = sum / 7;
		printf("%.1f\n", average);

		gradeCalculation(average);
		return average;
	}
