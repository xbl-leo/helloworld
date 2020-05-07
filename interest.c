#include <stdio.h>

int main(void)
{
	float principal, interest, interestRate, pay;
	float totalInterest, totalPay, monPrincipalPay;
	int month, monIndex;

	/* setting */
	// principal = 22000;
	// interestRate = 588;/* interestRate * 10000 */
	// month = 30;
	printf("input principal.\r\n");
	scanf("%f", &principal);
	printf("input interestRate (eg. 5.88%% is 588 ).\r\n");
	scanf("%f", &interestRate);
	printf("input month.\r\n");
	scanf("%d", &month);

	/* init parameter */
	interest = 0;
	pay = 0;
	totalInterest = 0;
	totalPay = 0;
	monPrincipalPay = 0;
	monIndex = 0;

	/* start */
	monPrincipalPay = principal / month;
	printf("monPrincipalPay = %f.\n", monPrincipalPay);
	while(principal >= 1)
	{
		interest = (principal * interestRate) / (12 * 10000);
		pay = monPrincipalPay + interest;
		principal -= monPrincipalPay;
		totalPay += pay;
		totalInterest += interest;
		monIndex++;
		printf("#%d month, pay = %f, interest = %f, totalInterest = %f, totalPay = %f\n", monIndex, pay, interest, totalInterest, totalPay);
	}
	return 0;
}
