#include <iostream>
#include "card.h"

void printCard(Card card)
{
    switch (card.value)
    {
        case CardValue::TWO:
            std::cout << "2";
            break;
        case CardValue::THREE:
            std::cout << "3";
            break;
        case CardValue::FOUR:
            std::cout << "4";
            break;
        case CardValue::FIVE:
            std::cout << "5";
            break;
        case CardValue::SIX:
            std::cout << "6";
            break;
        case CardValue::SEVEN:
            std::cout << "7";
            break;
        case CardValue::EIGHT:
            std::cout << "8";
            break;
        case CardValue::NINE:
            std::cout << "9";
            break;
        case CardValue::TEN:
            std::cout << "10";
            break;
        case CardValue::JACK:
            std::cout << "J";
            break;
        case CardValue::QUEEN:
            std::cout << "Q";
            break;
        case CardValue::KING:
            std::cout << "K";
            break;
        case CardValue::ACE:
            std::cout << "A";
            break;
        default:
            std::cout << "ERROR BAD VALUE\n";
            break;
    }
    switch (card.suit)
    {
        case CardSuit::CLUB:
            std::cout << "C";
            break;
        case CardSuit::DIAMOND:
            std::cout << "D";
            break;
        case CardSuit::HEART:
            std::cout << "H";
            break;
        case CardSuit::SPADE:
            std::cout << "S";
            break;
        default:
            std::cout << "ERROR BAD SUIT\n";
            break;
    }
}


void printDeck(const std::array<Card, numCardsInDeck> deck)
{
    for (auto card: deck)
    {
        printCard(card);
        std::cout << " ";
    }
}


void swapCards(Card &c1, Card &c2)
{
    Card temp = c1;
    c1 = c2;
    c2 = temp;
}


int getCardValue(const Card card)
{
    switch (card.value)
    {
        case CardValue::TWO:
            return 2;
        case CardValue::THREE:
            return 3;
        case CardValue::FOUR:
            return 4;
        case CardValue::FIVE:
            return 5;
        case CardValue::SIX:
            return 6;
        case CardValue::SEVEN:
            return 7;
        case CardValue::EIGHT:
            return 8;
        case CardValue::NINE:
            return 9;
        case CardValue::TEN:
        case CardValue::JACK:
        case CardValue::QUEEN:
        case CardValue::KING:
            return 10;
        case CardValue::ACE:
            return 11;
        default:
            std::cout << "ERROR BAD VALUE\n";
            return 0;
    }
}


void shuffleDeck(std::array<Card, numCardsInDeck> &deck)
{
    for (int i{0}; i < numCardsInDeck; ++i)
    {
        int randomNum = getRandomNumber(0, numCardsInDeck-1);
        swapCards(deck[i], deck[randomNum]);
    }
}
