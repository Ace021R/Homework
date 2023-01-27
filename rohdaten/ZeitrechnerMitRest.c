#include <stdio.h>

int main() {
    int seconds;
    int days, hours, minutes, secs;

    printf("Enter the number of seconds: ");
    scanf("%d", &seconds);

    days = seconds / (24 * 3600);
    seconds = seconds % (24 * 3600);
    hours = seconds / 3600;
    seconds %= 3600;
    minutes = seconds / 60;
    secs = seconds % 60;

    printf("%d days, %d hours, %d minutes, and %d seconds\n", days, hours, minutes, secs);

    return 0;
}
