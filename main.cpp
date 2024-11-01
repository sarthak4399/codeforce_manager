#include <iostream>
#include <cstdlib>
#include <string>

std::string lastCreated; 

void createRound();
void createPractice();
void manageGit();

int main() {
    int choice;

    while (true) {
        std::cout << "\n--- Codeforces Manager ---\n";
        std::cout << "1. Create New Round\n";
        std::cout << "2. Add Practice Question\n";
        std::cout << "3. Manage Git\n";
        std::cout << "4. Exit\n";
        std::cout << "Choose an option: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                createRound();
                break;
            case 2:
                createPractice();
                break;
            case 3:
                manageGit();
                break;
            case 4:
                std::cout << "Exiting...\n";
                return 0;
            default:
                std::cout << "Invalid option. Please try again.\n";
                break;
        }
    }
}

void createRound() {
    std::string roundNumber;
    std::cout << "Enter the round number: ";
    std::cin >> roundNumber;

    lastCreated = "Round " + roundNumber; 

    std::string command = "./scripts/create_round.sh " + roundNumber;
    int result = system(command.c_str());
    if (result == 0) {
        std::cout << lastCreated << " created successfully.\n";
    } else {
        std::cout << "Failed to create " << lastCreated << ".\n";
    }
}

void createPractice() {
    std::string questionName;
    std::cout << "Enter the practice question name: ";
    std::cin >> questionName;

    lastCreated = "Practice question " + questionName;

    std::string command = "./scripts/create_practice.sh " + questionName;
    int result = system(command.c_str());
    if (result == 0) {
        std::cout << lastCreated << " created successfully.\n";
    } else {
        std::cout << "Failed to create " << lastCreated << ".\n";
    }
}

void manageGit() {
    std::string commitMessage;
    if (!lastCreated.empty()) {
        commitMessage = "Add/update solution for " + lastCreated;
    } else {
        std::cout << "Enter the commit message: ";
        std::cin.ignore();
        std::getline(std::cin, commitMessage);
    }

    std::string command = "./scripts/manage_git.sh \"" + commitMessage + "\"";
    int result = system(command.c_str());
    if (result == 0) {
        std::cout << "Git changes committed and pushed successfully.\n";
    } else {
        std::cout << "Failed to commit and push changes.\n";
    }
    lastCreated.clear();
}

//Build Procesducre 
// cmake -S . -B build
// cmake --build build