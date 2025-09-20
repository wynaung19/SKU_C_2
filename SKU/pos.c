#include <stdio.h>
#include <string.h>

int main() {
    int totalOrders = 0;
    char drink[20];
    char choice[6];

order_start:
    printf("Enter the name of the drink you want to order: ");
    scanf("%s", drink);
    totalOrders++;

    printf("You ordered: %s\n", drink);

    printf("Do you want to order another drink? (yes/no): ");
    scanf("%s", choice);

    if (strcmp(choice, "yes") == 0) {
        goto order_start;
    }

    printf("Total drinks ordered: %d\n", totalOrders);

    return 0;
}
