//Q.2   according to the given condition:
	   	//For the first 50 units Rs. 0.50/unit
		//For the next 100 units Rs. 0.75/unit
		//For the next 100 units Rs. 1.20/unit
		//For units above 250 Rs. 1.50/unit
		//An additional surcharge of 20% is added to the bill.

#include <stdio.h>
main() 
{
    int units;
    float bill = 0.0;

    printf("Enter electricity units: ");
    scanf("%d", &units);

    if(units <= 50) 
	{
        bill = units * 0.50;
    }
    else if(units <= 150) 
	{
        bill = 25 + (units - 50) * 0.75;
    }
    else if(units <= 250) {
        bill = 100 + (units - 150) * 1.20;
    }
    else {
        bill = 220 + (units - 250) * 1.50;
    }

    // Adding surcharge
    bill *= 1.20; // 20% surcharge

    printf("Electricity bill: Rs. %.2f\n", bill);

}
