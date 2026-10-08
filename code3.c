
#include <stdio.h>

int main() {
    int day, month, year;
    int k, m, y, century, dayOfWeek;

    printf("Enter date (DD MM YYYY): ");
    scanf("%d %d %d", &day, &month, &year);

    // Zeller's Congruence
    if (month < 3) {
        month += 12;
        year--;
    }

    k = year % 100;
    century = year / 100;

    dayOfWeek = (day + (13 * (month + 1)) / 5 + k +
                 k / 4 + century / 4 + 5 * century) % 7;

    switch (dayOfWeek) {
        case 0:
            printf("Saturday\n");
            break;
        case 1:
            printf("Sunday\n");
            break;
        case 2:
            printf("Monday\n");
            break;
        case 3:
            printf("Tuesday\n");
            break;
        case 4:
            printf("Wednesday\n");
            break;
        case 5:
            printf("Thursday\n");
            break;
        case 6:
            printf("Friday\n");
            break;
    }

    return 0;
}




