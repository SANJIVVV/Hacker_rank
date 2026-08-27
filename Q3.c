#include <stdio.h>

int main()
{
    int customerId, quantity;
    char name[50], product[50];
    float price, amount, discount, delivery, finalBill;

    printf("Enter Customer ID: ");
    scanf("%d", &customerId);

    printf("Enter Customer Name: ");
    scanf("%s", name);

    printf("Enter Product Name: ");
    scanf("%s", product);

    printf("Enter Product Price: ");
    scanf("%f", &price);

    printf("Enter Quantity: ");
    scanf("%d", &quantity);

    if (price <= 0)
    {
        printf("\nInvalid product price");
    }
    else if (quantity <= 0)
    {
        printf("\nInvalid quantity");
    }
    else
    {
        amount = price * quantity;

        if (amount >= 10000)
        {
            discount = amount * 0.15;
        }
        else if (amount >= 5000)
        {
            discount = amount * 0.10;
        }
        else if (amount >= 1000)
        {
            discount = amount * 0.05;
        }
        else
        {
            discount = 0;
        }

        if (amount >= 5000)
        {
            delivery = 0;
        }
        else
        {
            delivery = 100;
        }

        finalBill = amount - discount + delivery;

        printf("\nONLINE SHOPPING BILL");
        printf("\n");
        printf("\nCustomer ID   : %d", customerId);
        printf("\nCustomer Name : %s", name);
        printf("\nProduct       : %s", product);
        printf("\nPrice         : Rs.%.2f", price);
        printf("\nQuantity      : %d", quantity);
        printf("\nAmount        : Rs.%.2f", amount);
        printf("\nDiscount      : Rs.%.2f", discount);
        printf("\nDelivery      : Rs.%.2f", delivery);
        printf("\nFinal Bill    : Rs.%.2f", finalBill);
    }

    return 0;
}
