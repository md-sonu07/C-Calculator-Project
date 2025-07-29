// myconio.h

#ifndef MYCONIO_H
#define MYCONIO_H

#include <windows.h>

// Define color constants (same as conio.h)
#define BLACK         0
#define BLUE          1
#define GREEN         2
#define CYAN          3
#define RED           4
#define MAGENTA       5
#define BROWN         6
#define LIGHTGRAY     7
#define DARKGRAY      8
#define LIGHTBLUE     9
#define LIGHTGREEN   10
#define LIGHTCYAN    11
#define LIGHTRED     12
#define LIGHTMAGENTA 13
#define YELLOW       14
#define WHITE        15

// Global variable to track current attributes
static int current_text_color = WHITE;
static int current_bg_color = BLACK;

// Function to set text color
void textcolor(int color) {
    current_text_color = color;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
        current_text_color | (current_bg_color << 4));
}

// Function to set background color
void textbackground(int color) {
    current_bg_color = color;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE),
        current_text_color | (current_bg_color << 4));
}


#endif
