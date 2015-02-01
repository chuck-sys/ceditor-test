#include "Buffer.h"

Buffer::Buffer()
{
}

string Buffer::remTabs(string line)
{
    int tab = line.find("\t");
    if(tab == line.npos)
        return line;
    else
        return remTabs(line.replace(tab, 1, "    "));
}

void Buffer::insertLine(string line, int x)
{
    line = remTabs(line);
    lines.insert(lines.begin()+x, line);
}

void Buffer::appendLine(string line)
{
    line = remTabs(line);
    lines.push_back(line);
}

void Buffer::removeLine(int i)
{
    lines.erase(lines.begin()+i);
}
