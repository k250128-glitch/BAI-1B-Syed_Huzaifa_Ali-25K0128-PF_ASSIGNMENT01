#include <stdio.h>
int main(){

    int value;
    printf("Please enter a value in the range 1...5:");
    scanf("%d", &value);
    //Translate number into its English word
    switch (value)
    {

        case 1:
            printf("Monday\n");

        case 2:

            printf("Tuesday\n");

        case 3:

            printf("Wednesday\n");

        case 4:

            printf("Thursday\n");

        case 5:


            printf("Friday\n");

        case 6:

            printf("Saturday\n");

        case 7:


            printf("Sunday\n");

        default:

            printf("You entered a value out of range\n");
    }
    return 0;
}
