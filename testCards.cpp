#include <iostream>
#include "DeckOfCards.h"

int main() {
    //create a deck of cards
    DeckOfCards myDeckOfCards;

    //print contents of the deck
    std::cout << "Ordered Deck:" << std::endl;
    while(myDeckOfCards.moreCards()) {
        std::cout << myDeckOfCards.dealCard().toString() << std::endl;
    }

    //shuffle the deck
    myDeckOfCards.shuffle();

    //print the deck again
    std::cout << std::endl << "Shuffled Deck:" << std::endl;
    while(myDeckOfCards.moreCards()) {
        std::cout << myDeckOfCards.dealCard().toString() << std::endl;
    }

    return 0;
}