#include <array>
#include <iostream>

#include "blackjack.h"
#include "card.h"

int main()
{
    std::array<Card, numCardsInDeck> deck;
    int card{0};
    for (int suit{0}; suit< static_cast<int>(CardSuit::NUM_SUITS); ++suit)
    {
        for (int value{0}; value < static_cast<int>(CardValue::NUM_VALUES); ++value)
        {
            deck[card].suit = static_cast<CardSuit>(suit);
            deck[card].value = static_cast<CardValue>(value);
            ++card;
        }
    }

    do
    {
        shuffleDeck(deck);
        int playerWins = playBlackjack(deck);
        if (playerWins)
            std::cout << "You won!\n";
        else
            std::cout << "You lost!\n";
    }
    while (getContinue("Would you like to continue playing? (y/n): ") == 'y');

    return 0;
}
