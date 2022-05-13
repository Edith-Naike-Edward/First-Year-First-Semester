#include<stdio.h>
void main()
{
	//Using fgets to read string with spaces
	char full_names[30];
	int age;
	printf("Enter your age\n");
	scanf("%d",&age);
	getchar();
	printf("Enter your name\n");
	//fgets takes as an aurgument the a pointer to where the variable will be stored, size  of the string a pointer to file stream
	fgets(full_names,30,stdin);
	printf("\nHello %s",full_names);
}
