#ifndef BLACKJACK_H_INCLUDED
#define BLACKJACK_H_INCLUDED

#include <array>
#include <iostream>

#include "card.h"

char getContinue(std::string msg);
int playBlackjack(const std::array<Card, numCardsInDeck> shuffledDeck);

#endif // BLACKJACK_H_INCLUDED
