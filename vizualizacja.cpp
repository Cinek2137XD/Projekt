#include <iostream>

#define SPADE "\u2660"
#define CLUB "\u2663"
#define HEART "\u2665"
#define DIAMOND "\u2666"

typedef enum Suit {
    spade = 1,
    club,
    heart,
    diamond
} suit_t;

typedef enum Number {
    two = 2,
    three,
    four,
    five,
    six,
    seven,
    eight,
    nine,
    ten,
    jack,
    queen,
    king,
    ace
} number_t;

void print_suit(int suitToSelect) {
    
    switch (suitToSelect) {
        case spade:
            std::cout << SPADE ;
            break;
        case club:
            std::cout << CLUB ;
            break;
        case heart:
            std::cout << HEART ;
            break;
        case diamond:
            std::cout << DIAMOND ;
            break;
    }
}

void print_number(int numberToSelect) {
    switch (numberToSelect) {
        case two:
            std::cout << "2" ;
            break;
        case three:
            std::cout << "3" ;
            break;
        case four:
            std::cout << "4" ;
            break;
        case five:
            std::cout << "5" ;
            break;
        case six:
            std::cout << "6" ;
            break;
        case seven:
            std::cout << "7" ;
            break;
        case eight:
            std::cout << "8" ;
            break;
        case nine:
            std::cout << "9" ;
            break;
        case ten:
            std::cout << "10" ;
            break;
        case jack:
            std::cout << "J" ;
            break;
        case queen:
            std::cout << "Q" ;
            break;
        case king:
            std::cout << "K" ;
            break;
        case ace:
            std::cout << "A" ;
            break;
    }
}

typedef struct card{
    suit_t suit;
    number_t number;
} card_t;

void print_card(card_t card) {
	if (card.number == ten) {
	std::cout << "┌───────┐\n";
    std::cout << "│";
    std::cout << card.number;
    std::cout << "     │\n│";
    print_suit(card.suit);
    std::cout << "      │\n";
    std::cout << "│       │\n";
    std::cout << "│      ";
    print_suit(card.suit);
    std::cout << "│\n│     ";
    std::cout << card.number;
    std::cout << "│\n";
    std::cout << "└───────┘\n";
	} else {
    std::cout << "┌───────┐\n";
    std::cout << "│";
    std::cout << card.number;
    std::cout << "      │\n│";
    print_suit(card.suit);
    std::cout << "      │\n";
    std::cout << "│       │\n";
    std::cout << "│      ";
    print_suit(card.suit);
    std::cout << "│\n│      ";
    std::cout << card.number;
    std::cout << "│\n";
    std::cout << "└───────┘\n";
	}
}

int main() {
    card_t ace_diamond;

    ace_diamond.suit = diamond;
    ace_diamond.number = ten;

    print_card(ace_diamond);

    return 0;
}