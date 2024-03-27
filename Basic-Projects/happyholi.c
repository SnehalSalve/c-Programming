// #include <stdio.h>

// int main() {
//     // Define escape sequences for text colors
//     char *red = "\033[1;31m";
//     char *green = "\033[1;32m";
//     char *yellow = "\033[1;33m";
//     char *pink = "\033[1;35m"; // Pink color
//     char *reset = "\033[0m";
    
//     // Define escape sequences for text formatting
//     char *bold = "\033[1m";
//     char *underline = "\033[4m";
    
//     // Print border
//     printf("%s+------------------------+\n", yellow);
    
//     // Print centered text
//     printf("|");
//     printf("%s%s%s%s%s", bold, underline, pink, "       HAPPY HOLI!       ", reset);
//     printf("%s|\n", red);
    
//     // Print border
//     printf("+------------------------+\n");
    
//     // Reset text formatting
//     printf("%s", reset);
    
//     return 0;
// }

// #include <stdio.h>

// int main() {
//     // Define escape sequences for text colors
//     char *red = "\033[1;31m";
//     char *green = "\033[1;32m";
//     char *yellow = "\033[1;33m";
//     char *pink = "\033[1;35m";
//     char *reset = "\033[0m";
    
//     // Define escape sequences for text formatting
//     char *bold = "\033[1m";
//     char *underline = "\033[4m";
    
//      printf("%s______     _     _   _\n", pink);
//     printf("| ___ \\   | |   | | | |\n");
//     printf("| |_/ /__ | |__ | |_| |_ ___  _ __\n");
//     printf("|  __/ _ \\| '_ \\| __| __/ _ \\| '__|\n");
//     printf("| | | (_) | |_) | |_| || (_) | |\n");
//     printf("\\_|  \\___/|_.__/ \\__|\\__\\___/|_|%s", reset);
    
    
//     // Print centered text
//     printf("%s\n", bold);
//     printf("       HAPPY HOLI, SNEHAL!       \n");
//     printf("%s\n", reset);
    
//     // Reset text formatting
//     printf("%s", reset);
    
//     return 0;
// }


#include <stdio.h>

int main() {
    // Define escape sequences for text colors
    char *pink = "\033[1;35m";
    char *reset = "\033[0m";
    
    // Print colorful header with "Snehal" ASCII art
    printf("%s  _____   _        _        _    _   _   _   _\n", pink);
    printf(" / ____|   | |\\    | | |      | |  | | | | | | | |\n");
    printf("| (___     | | \\   | | |  ___ | |  | | | | | | | |\n");
    printf(" \\___ \\  |_|  \\  | | | | / _ \\| |  | | | | | | | |\n");
    printf(" ____) |   | |   \\ | | ||  __/| |__| |_| |_| |_| |\n");
    printf("|_____/    |_|    \\|_| __/  \\___| \\____/ \\___/ \\___/%s\n", reset);
    
    // Print colorful header with "Snehal" ASCII art
    printf("%s  _____   _        _        _    _   _   _   _\n", pink);
    printf(" / ____|   | |\\    | | |      | |  | | | | | | | |\n");
    printf("| (___     | | \\   | | |  ___ | |  | | | | | | | |\n");
    printf(" \\___ \\  |_|  \\  | | | | / _ \\| |  | | | | | | | |\n");
    printf(" ____) |   | |   \\ | | ||  __/| |__| |_| |_| |_| |\n");
    printf("|_____/    |_|    \\|_| __/  \\___| \\____/ \\___/ \\___/%s\n", reset);
    return 0;
}

