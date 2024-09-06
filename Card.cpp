#include <iostream>
#include "Card.h"

//accessors
int const Card::getFace() {
    return face;
}

int const Card::getSuit() {
    return suit;
}

//user-defined constructor
Card::Card(int newFace, int newSuit) {
    face = newFace;
    suit = newSuit;
}

//class method
std::string Card::toString() {
    return faceNames[face] + " of " + suitNames[suit];
}