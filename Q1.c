#include <stdio.h>

int main()
{
    int accountNo;
    char name[50];
    float bal, withdrawal, remaining;

    printf("Enter Account Number: ");
    scanf("%d", &accountNo);

    printf("Enter Customer Name: ");
    scanf("%s", name);

    printf("Enter Account Balance: ");
    scanf("%f", &bal);

    printf("Enter Withdrawal Amount: ");
    scanf("%f", &withdrawal);

    if (withdrawal < 100)
    {
        printf("\nWithdrawal amount should be at least Rs.100");
    }
    else if (withdrawal > 20000)
    {
        printf("\nWithdrawal amount should not exceed Rs.20000");
    }

    else if (withdrawal + 500 > bal)
    {
        printf("\nInsufficient balance");
    }
    else
    {
        remaining = bal - withdrawal;

        printf("\nATM WITHDRAWAL");
        printf("\n-------------------------");
        printf("\nAccount Number    : %d", accountNo);
        printf("\nCustomer Name     : %s", name);
        printf("\nBalance           : Rs.%.2f", bal);
        printf("\nWithdrawal        : Rs.%.2f", withdrawal);
        printf("\nStatus            : Withdrawal Successful");
        printf("\nRemaining Balance : Rs.%.2f", remaining);
    }

    return 0;
}
