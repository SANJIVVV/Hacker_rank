
#include <stdio.h>

int main()
{
    int ticketId, impact;
    char name[50], issue[100];

    printf("Enter Ticket ID: ");
    scanf("%d", &ticketId);

    printf("Enter User Name: ");
    scanf("%s", name);

    printf("Enter Issue: ");
    scanf("%s", issue);

    printf("\nImpact Level");
    printf("\n1 - Critical");
    printf("\n2 - High");
    printf("\n3 - Medium");
    printf("\n4 - Low");

    printf("\nEnter Impact Level: ");
    scanf("%d", &impact);

    if (impact < 1 || impact > 4)
    {
        printf("\nInvalid impact level");
    }
    else
    {
        printf("\nIT HELPDESK TICKET");
        printf("\n-------------------------");
        printf("\nTicket ID     : %d", ticketId);
        printf("\nUser Name     : %s", name);
        printf("\nIssue         : %s", issue);

        if (impact == 1)
        {
            printf("\nImpact Level  : Critical");
            printf("\t\tPriority      : HIGH");
        }
        else if (impact == 2)
        {
            printf("\nImpact Level  : High");
            printf("\t\tPriority      : HIGH");
        }
        else if (impact == 3)
        {
            printf("\nImpact Level  : Medium");
            printf("\t\tPriority      : MEDIUM");
        }
        else
        {
            printf("\nImpact Level  : Low");
            printf("\t\tPriority      : LOW");
        }

        printf("\nStatus 1: Ticket Created");
    }

    return 0;
}
