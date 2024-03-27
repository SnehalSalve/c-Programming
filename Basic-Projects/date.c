#include <stdio.h>
#include <time.h>

int main() {
    // Get current time
    time_t t = time(NULL);
    struct tm *current_time = localtime(&t);

    // Print current date
    printf("Today's date is: %02d/%02d/%d\n", current_time->tm_mday, current_time->tm_mon + 1, current_time->tm_year + 1900);

    return 0;
}
