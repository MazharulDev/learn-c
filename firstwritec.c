#include <stdio.h>
#include <time.h>
#include <string.h>

void showMyName(char name[], int age)
{
  printf("My Name is %s\n and i'm %i year's old\n", name, age);
};

void calculateSum(int x, int y)
{
  int sum = x + y;
  printf("The sum of %d + %d is: %d\n", x, y, sum);
}

int main()
{
  clock_t start, end;
  double cpu_time_used;
  start = clock();

  // text formatting

  // printf("Hello, world!\n\n"); // \n for new line
  // printf("have a nice day\t");
  // printf("\"new line is this\" \t");
  // printf("new line is this");

  // variable declaration and initialization

  // int a = 1;
  // float b = 4.25;
  // char c = 'M';

  // printf("%d\n", a);
  // printf("%f\n", b);
  // printf("%c", c);

  // int a = 7;
  // float b = 3.5;
  // char c = 'T';

  // int a;
  // a = 5;

  // printf("My favorite number is: %d", a);

  // int a = 4;
  // int b = 3;
  // int sum = a + b;
  // printf("sum result is: %d", sum);

  // int x = 3, y = 2, z = 1;
  // printf("sum result is: %d", x + y + z);

  // int x, y, z;
  // x = y = z = 50;
  // printf("sum result is: %d", x + y + z);

  // int a = 5;
  // int b = 3;
  // int c;
  // c = a * b;
  // printf("sum result is: %i", c);

  // char myName[] = "Mazharul";
  // printf("My name is: %s", myName);

  // float x = 35e3;
  // double y = 12E4;
  // printf("%f\n", x);
  // printf("%lf", y);

  // float a = 2.5;
  // printf("%.2f", a);

  // int items = 50;
  // float cost_per_item = 2.22;
  // float total_cost = items * cost_per_item;
  // char currency = '$';
  // printf("number of items: %d\n", items);
  // printf("Cost per Item: %c%.2f\n", currency, cost_per_item);

  // printf("Total cost: %c%.2f\n", currency, total_cost);

  // const int a = 5;
  // printf("show result: %i", a);

  // int i;
  // for (i = 0; i < 10000; i++)
  // {
  //     printf("%d\n", i);
  // }
  // int i;

  // for (i = 0; i <= 100; i += 10)
  // {
  //     printf("%d\n", i);
  // }

  // char name[] = "Mazharul";
  // printf("My name is %s \n", name);

  // char text[] = "My name\'s \"Mazharul\" \0";
  // printf("%s\n", text);
  // char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  // printf("%d\n", strlen(alphabet));
  // printf("%d\n", sizeof(alphabet));

  // char str1[] = "hello";
  // char str2[] = "world";
  // strcat(str1, str2);
  // printf("Concatenated string: %s\n", str1);

  // char str1[] = "hello";
  // char str2[] = "world";
  // strcpy(str1, str2); // copy str2 to str1
  // printf("copy: %s\n", str1);

  // char str1[] = "Hello";
  // char str2[] = "Hello";
  // char str3[] = "Hi";

  // printf("%d\n", strcmp(str1, str2));
  // printf("%d\n", strcmp(str1, str3));

  // Create an integer variable that will store the number we get from the user
  // int myNum;

  // printf("Type a number: \n");

  // scanf("%d", &myNum);

  // printf("your inputed number is %d\n", myNum);

  // show only first word print

  // char name[20];
  // printf("Enter your name: %s");
  // scanf("%s", name);
  // printf("Hello, %s!\n", name);

  // when use fgets then all word print

  // char fullName[20];
  // printf("Enter your full name: ");
  // fgets(fullName, sizeof(fullName), stdin);
  // printf("Hello, %s!\n", fullName);

  // printf("your inputed number is %d\n", myNum);

  // showMyName("Md Mazharul Islam",24);
  // calculateSum(5, 3);

  FILE *fptr;
  fptr = fopen("newFile.txt", "a");
  fprintf(fptr, "My name is Mazharul");
  fprintf(fptr, "\ni'm 24 years old");
  // fclose(fptr);

  end = clock();
  cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;

  printf("Execution time: %f seconds\n", cpu_time_used);

  return 0;
}
