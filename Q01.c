#include <stdio.h>
#include <stdlib.h>

int main()
{
    int limit = 5000;
    int transaction;
    int country;
    int rate_of_transaction;

    // Checking transaction amount
    printf("Please Enter your transaction amount:\n");
    scanf("%d", &transaction);

    if (transaction <= limit) {
        printf("Daily spending is within limit.\n");
    }
    else {
        printf("Suspicious activity detected: transaction exceeded daily limit!\n");
    }

    // Checking Country
    printf("\nEnter the country you wish to perform transaction in:\n");
    printf("1. Pakistan\n2. UAE\n3. UK\n4. USA\nEnter choice (1-4): ");
    scanf("%d", &country);

    if (country == 1 || country == 2) {
        printf("Country is normal.\n");
    }
    else if (country == 3 || country == 4) {
        printf("Suspicious activity detected: Transaction in unusual country!\n");
    }
    else {
        printf("Invalid choice.\n");
        return 0;
    }

    // Checking transaction frequency
    printf("\nEnter number of transactions in the last hour: ");
    scanf("%d", &rate_of_transaction);

    if (rate_of_transaction > 3) {
        printf("Suspicious activity detected: Too many transactions in short time!\n");
    }
    else if (rate_of_transaction >= 0 && rate_of_transaction <= 3) {
        printf("Transaction frequency is normal.\n");
    }

    printf("\nFraud detection check complete.\n");
    return 0;
}

