#ifndef CARD_H_INCLUDED
#define CARD_H_INCLUDED

#include <array>

#include "get_random_numbers.h"


enum class CardValue
{
    TWO,
    THREE,
    FOUR,
    FIVE,
    SIX,
    SEVEN,
    EIGHT,
    NINE,
    TEN,
    JACK,
    QUEEN,
    KING,
    ACE,
    NUM_VALUES
};

enum class CardSuit
{
    CLUB,
    DIAMOND,
    HEART,
    SPADE,
    NUM_SUITS
};

struct Card
{
    CardValue value;
    CardSuit suit;
};

const int numCardsInDeck = static_cast<int>(CardValue::NUM_VALUES) *
                               static_cast<int>(CardSuit::NUM_SUITS);
void printCard(Card card);
void printDeck(const std::array<Card, numCardsInDeck> deck);
void swapCards(Card &c1, Card &c2);
int getCardValue(const Card card);
void shuffleDeck(std::array<Card, numCardsInDeck> &deck);

#endif // CARD_H_INCLUDED
