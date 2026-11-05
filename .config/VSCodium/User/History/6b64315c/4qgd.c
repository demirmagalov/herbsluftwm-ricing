#include <ncurses.h>

int main() {
    int x = 10;
    int y = 10;

    initscr();
    keypad(stdscr, TRUE);

    while (1) {
        clear();

        mvaddch(y,x, '@');

        refresh();

        int ch = getch();

        if (ch == 'q')
            break;

        if (ch == 'w')
            y--;

        if (ch == 's')
            y++;

        if (ch == 'a')
            x--;

        if (ch == 'd')
            x++;
    }

    endwin();
    return 0;
}