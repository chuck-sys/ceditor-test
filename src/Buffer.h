#ifndef BUFFER_H
#define BUFFER_H

#include <ncurses.h>
#include <vector>
#include <string>

using namespace std;

class Buffer
{
    private:
    public:
        Buffer();

        vector<string> lines;

        void insertLine(string, int);
        void appendLine(string);
        void removeLine(int);
        string remTabs(string);
};

#endif
