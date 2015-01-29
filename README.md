
ceditor
=======

ceditor is a plain text editor designed for simple usage. May contain a bug here or there.

ceditor is a small project with the C/C++ ncurses library to create a (sort-of) light-weight text editor.

Current version: v0.1.0


Features
========
- Normal mode and insert mode (**Just like vim!**)
- Ability to save


Build
=====

Requires the ncurses library (along with gcc/g++ and make)

    make clean all


Usage
=====

    ./ceditor <filename>

Defaults in normal mode. Press `x` to quit. Press `s` to save.

Press `i` to go into insert mode.


TODO
====
- Commands (probably maybe not)
- Colouring (probably maybe not)
- Tidying up code (IDK)
- ***SCROLLING***
