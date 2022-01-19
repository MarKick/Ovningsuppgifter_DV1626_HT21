/*
    ROCK PAPER SCISSORS GAME WHERE THE COMPUTER ALWAYS WINS
*/

#include <iostream>

std::string getinput() {
    std::string move;
    std::cout << "Please enter your move: (rock,papper,scissor) ";
    std::cin >> move;
    if(move != "rock" && move != "paper" && move != "scissor") {
        return ""; // invalid input, handle error in main
    }
    return move;
}

void greet_winner(std::string &player_mv) {
    if(player_mv == "rock") {
        std::cout << "Player chose rock and computer chose paper. Computer wins!!" << std::endl;
    }
    else if (player_mv == "scissor") {
        std::cout << "Player chose scissor and computer chose rock. Computer wins!!" << std::endl;
    }
    else {
        std::cout << "Player chose paper and computer chose scissors. Computer wins!!" << std::endl;
    }

}

int main() {
    std::string pl_move;
    
    std::string txt = "Welcome to impossible rock, paper and scissor game. Valid entries are: rock, paper and scissor.\nGood Luck!";

    std::cout << txt << std::endl;

    pl_move = getinput();
    if (pl_move == "") {
        std::cout << "Invalid move, Computer wins!" << std::endl;
        return 1;
    }
    greet_winner(pl_move);
    return 0; 
}
