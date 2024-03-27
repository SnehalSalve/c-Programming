#include <windows.h>
#include <stdio.h>

void getCursorPosition(int *x, int *y) {
    CONSOLE_SCREEN_BUFFER_INFO csbi;
    GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);
    *x = csbi.dwCursorPosition.X;
    *y = csbi.dwCursorPosition.Y;
}

int main() {
    int x, y;
    getCursorPosition(&x, &y);
    printf("Cursor position: x = %d, y = %d\n", x, y);
    return 0;
}
