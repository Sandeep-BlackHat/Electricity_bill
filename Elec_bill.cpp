#include<stdio.h>

int main()
{
	int units, x, y, z, total;
	printf("**********************************************************************************************\n");
	printf("Welcome to our Service, please go by the steps mentioned below!\n");
	printf("**********************************************************************************************\n\n\n");
	printf("**********************************************************************************************\n");
	printf("Enter the number of units used for Generating Bill: ");
	scanf("%d",&units);
	printf("**********************************************************************************************\n\n");
	
	printf("Units		|	Rate\n");
	printf("1 - 100		|	Rs. 10/unit\n");
	printf("100 - 200	|	Rs. 15/unit\n");
	printf("200 - 300	|	Rs. 20/unit\n");
	printf("Above: 300	|	Rs. 25/unit\n\n");
	
	printf("**********************************************************************************************\n");
	printf("The Units Used as per input given is: %d (Units)or(KWph)\n",units);
	
	if (units<=100)
	{
		total = units*10;
		printf("Total Bill is: %d",total);
	}
	else if ((units>100)&&(units<=200))
	{
		x = units - 100; //for 100 - 200	
		total = 1000 + (x * 15);
		printf("Total Bill is: %d",total);
	}
	else if ((units>200)&&(units<=300))
	{
		x = units - 100;
		y = x - 100;
		total = 1000 + 1500 + (y*20);
		printf("Total Bill is: %d",total);
	}
	else if (units > 300)
	{
		x = units - 100;
		y = x - 100;
		z = y - 100;
		total = 1000 + 1500 + 2000 + (z*25);
		printf("Total Bill is: %d",total);
	}
	else
	{
		printf("Give Value According to the Given Chart!");
	}
	printf("\n**********************************************************************************************");
	return 0;
}
