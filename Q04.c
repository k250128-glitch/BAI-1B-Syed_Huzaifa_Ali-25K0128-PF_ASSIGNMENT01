#include <stdio.h>

int main() {
    int a, b, c, d, e;

    printf("Enter 5 cards (1-13): ");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    if ((a==b && b==c && d==e) ||
        (a==b && b==d && c==e) ||
        (a==b && b==e && c==d) ||
        (a==c && c==d && b==e) ||
        (a==c && c==e && b==d) ||
        (a==d && d==e && b==c) ||
        (b==c && c==d && a==e) ||
        (b==c && c==e && a==d) ||
        (b==d && d==e && a==c) ||
        (c==d && d==e && a==b)){
         printf("Full House\n");
        }

     else {
        printf("Not Full House\n");
    }

    return 0;
}
