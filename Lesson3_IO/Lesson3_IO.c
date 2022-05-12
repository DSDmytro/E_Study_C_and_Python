#include<stdio.h>

int main() {
	char city[20];
	printf("Enter the city: \n");
	scanf_s("%s", city, (unsigned)__crt_countof(city));    // Input
	printf("Enter the population: \n");
	int population;
	scanf_s("%d", &population);    // Input
	printf("%d peolpe in %s", population, city);   //Output

	getchar();
	getchar();
	return 0;

}

//int main(void)
//{
//    int age;
//    char name[10];
//    // вводим возраст
//    printf("Your age: ");
//    scanf_s("%d", &age);
//    // вводим имя
//    printf("Enter your name: ");
//    scanf_s("%9s", name, (unsigned)__crt_countof(name));
//
//    printf("Name: %s \t Age = %d", name, age);
//    return 0;
//}


//int main(void)
//{
//	float salary;
//	printf("\aEnter your desired monthly salary:");
//	printf("$_______\b\b\b\b\b\b\b");
//	scanf_s("%f", &salary);
//	printf("\n\t$%.2f a month is $%.2f a year.", salary, salary * 12);
//	printf("\rGee!\n");
//
//	getchar();
//	getchar();
//
//
//	return 0;
//}