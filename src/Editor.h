#ifndef EDITOR_H
#define EDITOR_H

#include "Buffer.h"

#include <ncurses.h>

class Editor
{
    private:
        int x, y;
        int lowerbound;
        char mode;
        Buffer* buff;
        string status;
        string cmd;
        string filename;

        string tos(int);

        void moveUp();
        void moveDown();
        void moveLeft();
        void moveRight();
        void deleteLine();
        void deleteLine(int i);

        void saveFile();

    public:
        bool upstatus;

        Editor();
        Editor(string);

        char getMode() {return mode;}

        void handleInput(int);
        void printBuff();
        void printStatusLine();
        void updateStatus();

};


#endif
