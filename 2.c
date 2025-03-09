#include<stdio.h>
int main()
{
	char forename[50];
	char surname[50];
	int yearofbirth;
	printf("Enter the forename:");
	scanf("%s",&forename);
	printf("Enter the surname:");
	scanf("%s",&surname);
	printf("Enter the yearofbirth:");
	scanf("%d",&yearofbirth);
	printf("%s %s %d\n",forename,surname,yearofbirth);
	return 0;
}
