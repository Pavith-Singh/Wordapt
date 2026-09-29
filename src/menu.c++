#include "wordapt.h++"

void print_welcome() {
    std::cout << "\033[1m\033[31m-------------------------------\n";
    std::cout << "\033[34mWelcome to Wordapt©\033[0m\n";
    std::cout << "\033[2m\033[33mBy Pavith Preet Singh Malhotra. \033[0m\n";
    std::cout << "\033[1m\033[32m-------------------------------\033[0m\n";
    std::cout << "\033[1mMAIN MENU: \033[0m\n\n\n";
}

void print_menu() {
    std::string option;
    std::cout << "Login\n";
    std::cout << "Difficulty\n";
    std::cout << "Play\n";
    std::cout << "Stats\n";
    std::cout << "Leaderboard\n";
    std::cout << "Profile\n";
    std::cout << "Region\n";

    std::cout << "Input: ";
    std::cin >> option;


    // convert input to uppercase
    for (char &c : option) {
        c = std::toupper(c);
    }

    if (option == "LOGIN" || option == "L") {
        std::cout << "\nProceeding to Login page...\n";
        login();
    } else if (option == "DIFFICULTY" || option == "D") {
        std::cout << "\nProceeding to Difficulty selection...\n";
        difficulty();
    } else if (option == "PLAY" || option == "P") {
        std::cout << "\nProceeding to Game...\n";
        play();
    } else if (option == "STATS" || option == "S") {
        std::cout << "\nProceeding to Stats...\n";
        stats();
    } else if (option == "LEADERBOARD" || option == "LB") {
        std::cout << "\nProceeding to Leaderboard...\n";
        leaderboard();
    } else if (option == "PROFILE" || option == "PR") {
        std::cout << "\nProceeding to Profile Page...\n";
        profile();
    } else if (option == "REGION" || option == "R") {
        std::cout << "\nProceeding to Region Selection...\n";
        region();
    } else {
        std::cout << "\nInvalid choice!\n\n";
        print_menu();
    }


}