//code for developing a text base simple game ,using conditional statement for game logic
#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>

// Now declaring the function
void askQuestions(const std::string &question, const std::vector<std::string> &choices, const std::vector<int> &correctAnswers, int &score);

int main() {
    int score = 0;

    std::string q1 = "national bird of india?";
    std::vector<std::string> choices1 = {"1. crow", "2. peacock", "3. eagle", "4. parrot"};
    std::vector<int> answer1 = {2};

    std::string q2 = "Select all the even numbers:";
    std::vector<std::string> choices2 = {"1. 1", "2. 2", "3. 3", "4. 4"};
    std::vector<int> answer2 = {2, 4};

    std::string q3 = "Which country won the t20 world cup 2024?";
    std::vector<std::string> choices3 = {"1. afganistan", "2. australia", "3. India", "4. south africa"};
    std::vector<int> answer3 = {3};

    askQuestions(q1, choices1, answer1, score);
    askQuestions(q2, choices2, answer2, score);
    askQuestions(q3, choices3, answer3, score);

    std::cout << "You completed the quiz! Your final score is: " << score << std::endl;

    return 0;
}

void askQuestions(const std::string &question, const std::vector<std::string> &choices, const std::vector<int> &correctAnswers, int &score) {
    std::cout << question << std::endl;
    for (const auto &choice : choices) {
        std::cout << choice << std::endl;
    }

    std::cout << "Please enter the numbers of your answers, separated by spaces: ";
    std::string input;
    std::getline(std::cin, input);
    std::istringstream iss(input);
    std::vector<int> playerChoices;
    int choice;
    while (iss >> choice) {
        if (choice >= 1 && choice <= choices.size()) {
            playerChoices.push_back(choice);
        } else {
            std::cout << "Invalid choice: " << choice << ". Choices must be between 1 and " << choices.size() << "." << std::endl;
            return;
        }
    }

    std::sort(playerChoices.begin(), playerChoices.end());
    std::vector<int> sortedCorrectAnswers = correctAnswers;
    std::sort(sortedCorrectAnswers.begin(), sortedCorrectAnswers.end());

    if (playerChoices == sortedCorrectAnswers) {
        std::cout << "Correct!" << std::endl;
        score++;
    } else {
        std::cout << "Incorrect. The correct answers were: ";
        for (int correctAnswer : sortedCorrectAnswers) {
            std::cout << correctAnswer << " ";
        }
        std::cout << std::endl;
        std::cout << "You answered: ";
        for (int playerChoice : playerChoices) {
            std::cout << playerChoice << " ";
        }
        std::cout << std::endl;
    }

    
}