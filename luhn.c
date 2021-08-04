#include <stdio.h>
#include <stdlib.h>

//This code belongs to Xrypt0.




int main(int argc, char *argv[]) {
	
	long long int card;
	printf("Please enter the card number :");
	scanf("%lld",&card);
	if(card >=1000000000000000 && card <= 9999999999999999){
	long long int variable = card / 10;
	long long int variable1 = variable / 10;
	long long int variable2 = variable1 / 10;
	long long int variable3 = variable2 / 10;
	long long int variable4 = variable3 / 10;
	long long int variable5 = variable4 / 10;
	long long int variable6 = variable5 / 10;
	long long int variable7 = variable6 / 10;
	long long int variable8 = variable7 / 10;
	long long int variable9 = variable8 / 10;
	long long int variable10 = variable9 / 10;
	long long int variable11 = variable10 / 10;
	long long int variable12 = variable11 / 10;
	long long int variable13 = variable12 / 10;
	long long int variable14 = variable13 / 10;
	int number16 = card % 10;
	int number15 = variable %10;
	int number14 = variable1 % 10;
	int number13 = variable2 % 10;
	int number12 = variable3 % 10;
	int number11 = variable4 % 10;
	int number10 = variable5 % 10;
	int number9 = variable6 % 10;
	int number8 = variable7 % 10;
	int number7 = variable8 % 10;
	int number6 = variable9 % 10;
	int number5 = variable10 % 10;
	int number4 = variable11 % 10;
	int number3 = variable12 % 10;
	int number2 = variable13 % 10;
	int number1 = variable14 % 10;
	int rnumber1 = number1 * 2;
	int rnumber3 = number3 * 2;
	int rnumber5 = number5 * 2;
	int rnumber7 = number7 * 2;
	int rnumber9 = number9 * 2;
	int rnumber11 = number11 * 2;
	int rnumber13 = number13 * 2;
	int rnumber15 = number15 * 2;
	
	if(rnumber1 >= 10 ){
		rnumber1 = (rnumber1 % 10) + (rnumber1 / 10);
		printf("%d", rnumber1);
	}
		if(rnumber3 >= 10 ){
		rnumber3 = (rnumber3 % 10) + (rnumber3 / 10);
	}
		if(rnumber5 >= 10 ){
		rnumber5 = (rnumber5 % 10) + (rnumber5 / 10);
	}
		if(rnumber7 >= 10 ){
		rnumber7 = (rnumber7 % 10) + (rnumber7 / 10);
	}
		if(rnumber9 >= 10 ){
		rnumber9 = (rnumber9 % 10) + (rnumber9 / 10);
	}
		if(rnumber11 >= 10 ){
		rnumber11 = (rnumber11 % 10) + (rnumber11 / 10);
	}
		if(rnumber13 >= 10 ){
		rnumber13 = (rnumber13 % 10) + (rnumber13 / 10);
	}
		if(rnumber15 >= 10 ){
		rnumber15 = (rnumber15 % 10) + (rnumber15 / 10);
	}
	
	int digit = rnumber1 + number2 + rnumber3 + number4 + rnumber5 + number6 + rnumber7 + number8 + rnumber9 + number10 + rnumber11 + number12 + rnumber13 + number14 + rnumber15 + number16;
	
	
	if(digit % 10 == 0){
		printf("This could be a card number.");
	}
	else{
		printf("This is not a card number.");
	}
	
}
else{
	printf("INVAILD NUMBER.");
}
	return 0;
}
