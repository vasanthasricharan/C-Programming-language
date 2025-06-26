#include <stdio.h>
int day_of_week(int d, int m, int y) {
    static int t[] = {0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4};
    y -= m < 3;
    return (y + y/4 - y/100 + y/400 + t[m-1] + d) % 7;
}
void print_calendar(int month, int year) {
    int days_in_month[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        days_in_month[2] = 29;  }
    printf("\n-----------------------------\n");
    printf("    Calendar - %d/%d\n", month, year);
    printf("-----------------------------\n");
    printf(" Sun Mon Tue Wed Thu Fri Sat\n");
    int day = day_of_week(1, month, year);
    for (int i = 0; i < day; i++) {
        printf("    ");
    }
    for (int i = 1; i <= days_in_month[month]; i++) {
        printf("%4d", i);
        if ((i + day) % 7 == 0 || i == days_in_month[month]) {
            printf("\n");
        }
    }
}

int main() {
    int month, year;
    printf("Enter month (1-12): ");
    scanf("%d", &month);
    printf("Enter year: ");
    scanf("%d", &year);
    print_calendar(month, year);

    return 0;
}

