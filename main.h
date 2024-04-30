
#ifndef RELATIVELY_BETTER_MAIN_H
#define RELATIVELY_BETTER_MAIN_H

#include <iostream>
#include <map>

// Starts the console / ascii art version of the game in the CLI
void run_CLI_Mode();

// Starts the SFML version of the game using the set SFML options
void run_SFML_Mode7();

// Prints main menu and handles input in a do while loop
void startMenu();

static std::string Notes[12] = {
    "C",
    "C#",
    "D",
    "D#",
    "E",
    "F",
    "F#",
    "G",
    "G#",
    "A",
    "A#",
    "B"
};

// No reason to use a map now that I've made it...
/*static std::map<std::string, int> Notes = {
        {"C", 1},
        {"C#", 2},
        {"D", 3},
        {"D#", 4},
        {"E", 5},
        {"F", 6},
        {"F#", 7},
        {"G", 8},
        {"G#", 9},
        {"A", 10},
        {"A#", 11},
        {"B", 12},
};*/

#endif //RELATIVELY_BETTER_MAIN_H
