#include <stdio.h>

int main() {
    int counter[] = {0,0,0,0,0,0,0,0,0,0}; //varibales
    int num;

    printf("Enter a number 0-9 range:\n");

    while (scanf("%d", &num) == 1) {   //If the number is not in 0-9 range the loop will break
        if (num < 0 || num > 9) {
            break;
        }
        counter[num]++;
        printf("Enter a number that is out of (0-9) range to stop.\n");
    }

    printf("\nNumber\tNumber of Occurrences\n"); //output
    for (int i = 0; i < 10; i++) {
        printf("%d\t%d\n", i, counter[i]);
    }

    return 0;
}
