#include <iostream>
#include <vector>
#include "DeckOfCards.h"

//no-argument constructor
DeckOfCards::DeckOfCards() {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 13; j++) {
            //creates a Card object named card with a unique suit and face
            Card card(j, i);
            //adds it to the deck vector
            deck.push_back(card);
        }
    }
}

//class methods
void DeckOfCards::shuffle() {
    
    for (int i = 0; i < deck.size(); i++) {
        //saves the selected card to a temp object
        Card temp = deck.at(i);
        //replaces the selected card with a random card;
        int j = rand()%(deck.size() - 1);
        deck.at(i) = deck.at(j);
        //saves the temp object to the random card
        deck.at(j) = temp;
    }
}

Card DeckOfCards::dealCard() {
    //saves first card to temp for return value
    Card temp = deck.at(0);

    //moves all cards to the left once
    for (int i = 1; i < deck.size(); i++) {
        deck.at(i - 1) = deck.at(i);
    }

    //puts the first card at the end of the line
    deck.at(deck.size() - 1) = temp;

    //removes the last card
    deck.pop_back();

    return temp;
}

bool const DeckOfCards::moreCards() {
    if (deck.empty()) {
        //re-creates the full deck of 52 cards
        for (int i = 0; i < 4; i++) {
            for (int j = 0; j < 13; j++) {
                //creates a Card object named card with a unique suit and face
                Card card(j, i);
                //adds it to the deck vector
                deck.push_back(card);
            }
        }
        return false;
    } else {
        return true;
    }
}