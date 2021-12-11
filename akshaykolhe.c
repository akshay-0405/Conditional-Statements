#include<stdio.h>
void main()
{
	printf("Enter Marks:");
	int mrk;
	scanf("%d",&mrk);
	if (mrk<=100&&mrk>=85)
	{
		printf("You got an A Grade");
	}
	if (mrk<=84&&mrk>=70)
	{
		printf("You got a B Grade");
	}
	if (mrk<=69&&mrk>=55)
	{
		printf("You got a C Grade");
	}
	if (mrk<=54&&mrk>=40)
	{
		printf("You got a D Grade");
	}
    if (mrk<=40)
	{
		printf("You got a E Grade");
	}
	
}
