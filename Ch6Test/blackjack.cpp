#include "blackjack.h"


char getContinue(std::string msg)
{
    char toContinue;
    do
    {
        std::cout << msg;
        std::cin >> toContinue;
    }
    while (toContinue != 'n' && toContinue != 'y');
    return toContinue;
}


int playBlackjack(const std::array<Card, numCardsInDeck> shuffledDeck)
{
    int playerScore{0}, dealerScore{0};
    bool playerContinues{true}, dealerContinues{true};
    const Card *currentCard = &shuffledDeck[0];

    while (playerContinues || dealerContinues)
    {
        if (playerContinues)
        {
            Card card = *currentCard++;
            std::cout << "Player drew a ";
            printCard(card);
            std::cout << ", player's score is ";
            if (getCardValue(card) == 11 && (playerScore + 11) > 21)
                playerScore += 1;
            else
                playerScore += getCardValue(card);
            std::cout << playerScore << "\n";
            if (playerScore > 21)
                return 0;
        }
        if (dealerContinues)
        {
            Card card = *currentCard++;
            std::cout << "Dealer drew a ";
            printCard(card);
            std::cout << ", dealers's score is ";
            if (getCardValue(card) == 11 && (dealerScore + 11) > 21)
                dealerScore += 1;
            else
                dealerScore += getCardValue(card);
            std::cout << dealerScore << "\n";
            if (dealerScore > 21)
                return 1;
        }
        if (playerContinues &&
            getContinue("Draw another card? (y/n): ") == 'n')
            playerContinues = false;
        if (dealerContinues && dealerScore >= 17)
            dealerContinues = false;
    }

    if (playerScore > dealerScore)
        return 1;
    else
        return 0;
}
