#include <iostream>

#ifndef CARD_H
#define CARD_H

class Card {
private:
    //data fields
    int face, suit;

public:
    //string arrays for car name and suit
    std::string faceNames[13] = {"Ace", "Deuce", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King"};
    std::string suitNames[4] = {"Hearts", "Diamonds", "Clubs", "Spades"};

    //accessors
    int const getFace();
    int const getSuit();

    //user-defined constructor
    Card(int newFace, int newSuit);

    //class method
    std::string toString();
};

#endif