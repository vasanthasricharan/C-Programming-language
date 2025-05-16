#include <stdio.h>

int main() {
    float amount_given, amount_received, loss_percentage;

    printf("Enter the amount you gave: ");
    if (scanf("%f", &amount_given) != 1 || amount_given <= 0) {
        printf("Invalid input for amount given.\n");
        return 1;
    }

    printf("Enter the amount you received: ");
    if (scanf("%f", &amount_received) != 1 || amount_received < 0) {
        printf("Invalid input for amount received.\n");
        return 1;
    }

    loss_percentage = ((amount_given - amount_received) / amount_given) * 100;

    if (amount_received > amount_given) {
        printf("You made a profit of %.2f%%\n", -loss_percentage);
    } else if (loss_percentage > 0) {
        printf("You incurred a loss of %.2f%%\n", loss_percentage);
    } else {
        printf("No profit, no loss.\n");
    }

    return 0;
}
