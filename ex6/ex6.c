#include <stdio.h>

int main(int argc, char* argv[])
{

	int distance = 100;
	float power = 1.234f;//by default, treated as double. adding f to force treat as float
	double some_power = 91.234;
	char initial = 'A';//letter literal needs ' '
	char first_name[] = "Jay";//string literal needs " "
	char last_name[] = "chou";
	char zero_length[] = "";

	printf("I'm %d miles away from home\n", distance);
	printf("with this (%f watt) much power in hands \n", power);
	printf("and some other amount = %f watt power in other places \n", some_power);
	printf("jixyuni otsu! %s %c. %s san.\n", first_name, initial, last_name);
	printf("\n");
	//test shows that we can still print, but compiler gives a warning about 0 length string.  
	printf("%s\n", zero_length);
	return 0;
}

	
