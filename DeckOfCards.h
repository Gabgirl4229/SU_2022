#include <iostream>
#include <vector>
#include "Card.h"

#ifndef DECKOFCARDS_H
#define DECKOFCARDS_H

class DeckOfCards {
private:
    //data fields
    std::vector<Card> deck;
    int currentCard;

public:
    //no-argument constructor
    DeckOfCards();

    //class methods
    void shuffle();
    Card dealCard();
    bool const moreCards();
    
};

#endif