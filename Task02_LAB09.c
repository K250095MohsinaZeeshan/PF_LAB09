#include<stdio.h>

float calculateBonus(int salary){
	if(salary<30000)
	  return salary * 0.2;
	else
	  return salary * 0.1;
}

int main(){
	float employeesSalaries[5];
	float bonus , totalPayAfterBonus = 0;
	printf("EMPLOYEES BONUS CALCULATION\n");
	printf("___________________________\n");
	
	int i;
	for(i = 0;i < 5;i++ )
	 {
	 	printf("\nEnter salary of %d employee:  ", i + 1);
	 	scanf("%f", &employeesSalaries[i]);
	 }
	 	printf("________________________________\n");
	 
	 for(i = 0; i<5;i++)
	 {
	 	bonus = calculateBonus(employeesSalaries[i]);
		printf("\nEmployee '%d' bonus: %.2f\n", i + 1,bonus);
		totalPayAfterBonus += employeesSalaries[i] + bonus;	 
	 }
	return 0;
}
