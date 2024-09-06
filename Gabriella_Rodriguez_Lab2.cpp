#include <iostream>
#include <ctime>

using std::string;

int main() {

    //creates variables for user and computer selection
    int userChoice, computerChoice;
    string userChoiceName, computerChoiceName;
    int replay;

    //creates variables to track wins/losses
    static int winCount = 0;
    static int lossCount = 0;
    
    //seeds RNG
    srand(time(0));
    
    //explains the game to user
    std::cout << "Let's play Rock, Paper, Scissors!" << std::endl;
    std::cout << "Enter a number to make your choice:" << std::endl;

    //shows user the options
    std::cout << "0) Rock" << std:: endl;
    std::cout << "1) Paper" << std::endl;
    std::cout << "2) Scissors" << std::endl;
    
    //scans the user's choice
    std::cin >> userChoice;

    //assigns a name to the choice
    if (userChoice == 0) {
        userChoiceName = "Rock";
    } else if (userChoice == 1) {
        userChoiceName = "Paper";
    } else if (userChoice == 2) {
        userChoiceName = "Scissors";
    }
    
    //displays choice name to the user
    std::cout << "You have chosen to use " << userChoiceName << "." << std::endl;

    //randomly generates and assigns a name to the computer's choice
    computerChoice = rand()%3;
    
    if (computerChoice == 0) {
        computerChoiceName = "Rock";
    } else if (computerChoice == 1) {
        computerChoiceName = "Paper";
    } else if (computerChoice == 2) {
        computerChoiceName = "Scissors";
    }

    //displays computer's choice
    std::cout << "The computer has chosen to use " << computerChoiceName << "." << std::endl;

    //determines the winner and adds result to score
    if (userChoice > computerChoice || (computerChoice == 2 && userChoice == 0)) {
        std::cout << "You won this round!" << std::endl;
        winCount += 1;
    } else if (userChoice < computerChoice || (computerChoice == 0 && userChoice == 2)){
        std::cout << "You lost this round." << std::endl;
        lossCount += 1;
    } else if (userChoice == computerChoice) {
        std::cout << "This round is a draw." << std::endl;
    }

    //displays the score
    std::cout << "You: " << winCount << "\t" << "Computer: " << lossCount << std::endl;

    //ends the game automatically if somebody wins more than twice
    if (winCount > 2 || lossCount > 2) {
        std::cout << "A player has won 3 times. The game is now finished." << std::endl;
        return 0;
    }

    //starts another round by calling main()
    std::cout << "Would you like to try again?" << std::endl;
    std::cout << "0) Yes" << std::endl;
    std::cout << "1) No" << std::endl;
    std::cin >> replay;
    
    if (replay == 0) {
        main();
    } else {
        return 0;
    }
    
}