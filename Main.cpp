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

void printValue(unsigned int value);
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
        cout<<"Card " << i +1 << ": "; 
        printValue(Deck[i].value);
        cout << " Of " << toSuit(Deck[i].suit) << endl;
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

void printValue(unsigned int value)
{
    value = value + 2;
    if(value > 15)  cout << "Error";
    if(value == 10) cout << "Jack";
    if(value == 11) cout << "Queen";
    if(value == 12) cout << "King";
    if(value == 13) cout << "Ace";
    else            cout << value;
    
}
