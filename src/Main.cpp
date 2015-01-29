#include <ncurses.h>
#include "Editor.h"

// Initializes the curses.h
void curses_init()
{
    initscr();
    noecho();
    cbreak();               // Disable line buffering
    keypad(stdscr, true);
}

string fn = "";

int main(int argc, char* argv[])
{
    Editor ed;
    // Initialize filename
    if(argc > 1)
    {
        fn = string(argv[1]);
        ed = Editor(fn);
    }
    else
    {
        ed = Editor();
    }

    curses_init();
    while(ed.getMode() != 'x')
    {
        if(ed.upstatus)
            ed.updateStatus();
        ed.printStatusLine();
        ed.printBuff();
        int input = getch();
        ed.handleInput(input);
    }

    refresh();
    endwin();
    return 0;
}
