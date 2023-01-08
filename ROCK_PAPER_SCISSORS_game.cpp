#include <iostream>
#include <ctime>

char GetUserChoice();
char GetComputerChoice();
void ShowChoice(char choice);
void ChooseWinner(char player, char computer);

int main()
{
    char player;
    char computer;

    player = GetUserChoice();
    std::cout << "Your choice: ";
    ShowChoice(player);

    computer = GetComputerChoice();
    std::cout << "Computer's choice: ";
    ShowChoice(computer);

    ChooseWinner(player, computer);

    return 0;
}

char GetUserChoice()
{
    char player;
    std::cout << "Rock-Paper-Scissors Game!\n";

    do
    {
        std::cout << "Choose one of the following\n";
        std::cout << "****************************\n";
        std::cout << "'r' for rock\n";
        std::cout << "'p' for paper\n";
        std::cout << "'s' for scissors\n";
        std::cin >> player;
    } while (player != 'r' && player != 'p' && player != 's');

    return player;
}

char GetComputerChoice()
{
    srand(time(0));
    int num = rand() % 3 + 1;

    switch (num)
    {
    case 1:
        return 'r';
    case 2:
        return 'p';
    case 3:
        return 's';
    }

    return 0;
}

void ShowChoice(char choice)
{
    switch (choice)
    {
    case 'r':
        std::cout << "Rock\n";
        break;
    case 'p':
        std::cout << "Paper\n";
        break;
    case 's':
        std::cout << "Scissors\n";
        break;
    }
}

void ChooseWinner(char player, char computer)
{
    switch (player)
    {
    case 'r':
        if (computer == 'r')
        {
            std::cout << "It's a tie!\n";
        }
        else if (computer == 'p')
        {
            std::cout << "You lose!\n";
        }
        else
        {
            std::cout << "You win!\n";
        }
        break;
    case 'p':
        if (computer == 'r')
        {
            std::cout << "You win!\n";
        }
        else if (computer == 'p')
        {
            std::cout << "It's a tie!\n";
        }
        else
        {
            std::cout << "You lose!\n";
        }
        break;
    case 's':
        if (computer == 'r')
        {
            std::cout << "You lose!\n";
        }
        else if (computer == 'p')
        {
            std::cout << "You win!\n";
        }
        else
        {
            std::cout << "It's a tie!\n";
        }
        break;
    }
}