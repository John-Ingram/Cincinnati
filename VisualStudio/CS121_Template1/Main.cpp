//
//
//

#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <sstream>

#include "Deck.cpp"

using namespace std;

string toValue(unsigned int value);
string toSuit(unsigned int suit);
Card createCard(unsigned int suit, unsigned int value);
void printDeck(deck Deck);
void initDeck(deck Deck);






int main(void)
{
    deck Deck;
    initDeck(Deck);
    printDeck(Deck);
	
	system("pause");
	return 0;
}

void initDeck(deck Deck)
{
    int i = 0;
    for(unsigned int s = 0; s < 4; s++)
    {
        for(int v = 0; v < 13; v++)
        {
            Deck[i] = createCard(s,v);
            i++;
        }
    }

}

void printDeck(deck Deck)
{
    for(int i = 0; i < 52; i++)
    {
        cout<<"Card " << i << ": "<< toValue(Deck[i].value) << " Of " << toSuit(Deck[i].suit);
    }
}

Card createCard(unsigned int suit, unsigned int value)
{
    Card card;
    card.suit = suit;
    card.value = value;
    return card;
}

string toSuit(unsigned int suit)
{
    if(suit == 0) return "Spades";
    if(suit == 1) return "Hearts";
    if(suit == 2) return "Diamonds";
    if(suit == 3) return "Clubs";

    return "Error";
}

string toValue(unsigned int value)
{
    value = value + 2;
    if(value > 15)  return "Error";
    if(value == 10) return "Jack";
    if(value == 11) return "Queen";
    if(value == 12) return "King";
    if(value == 13) return "Ace";

    return to_string(value);
    
}
