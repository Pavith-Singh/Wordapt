#include "wordapt.h++"

void clear_terminal() {
    std::cout << "\033[2J\033[H" << std::flush;
}