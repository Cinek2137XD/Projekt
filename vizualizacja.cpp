#include <iostream>

#define SPADE "\u2660"
#define CLUB "\u2663"
#define HEART "\u2665"
#define DIAMOND "\u2666"


void print_suit(int suitToSelect) {
    
    switch (suitToSelect) {
        case 1:
            std::cout << SPADE ;
            break;
        case 2:
            std::cout << CLUB ;
            break;
        case 3:
            std::cout << HEART ;
            break;
        case 4:
            std::cout << DIAMOND ;
            break;
    }
}

void print_number(int numberToSelect) {
    switch (numberToSelect) {
        case 2:
            std::cout << "2" ;
            break;
        case 3:
            std::cout << "3" ;
            break;
        case 4:
            std::cout << "4" ;
            break;
        case 5:
            std::cout << "5" ;
            break;
        case 6:
            std::cout << "6" ;
            break;
        case 7:
            std::cout << "7" ;
            break;
        case 8:
            std::cout << "8" ;
            break;
        case 9:
            std::cout << "9" ;
            break;
        case 10:
            std::cout << "10" ;
            break;
        case 11:
            std::cout << "J" ;
            break;
        case 12:
            std::cout << "Q" ;
            break;
        case 13:
            std::cout << "K" ;
            break;
        case 14:
            std::cout << "A" ;
            break;
    }
}

typedef struct card
{
    int suit;
    int number;
};

void print_card(card karta) {
	if (karta.number == 10) {
	std::cout << "________\n";
    std::cout << "|";
    print_number(karta.number);
    std::cout << "     |\n|";
    print_suit(karta.suit);
    std::cout << "      |\n";
    std::cout << "|       |\n";
    std::cout << "|      ";
    print_suit(karta.suit);
    std::cout << "|\n|     ";
    print_number(karta.number);
    std::cout << "|\n";
    std::cout << "|_______|\n";
	} else {
    std::cout << " _______\n";
    std::cout << "|";
    print_number(karta.number);
    std::cout << "      |\n|";
    print_suit(karta.suit);
    std::cout << "      |\n";
    std::cout << "|   ";
    print_suit(karta.suit);
    std::cout<<"   |\n";
    std::cout << "|      ";
    print_suit(karta.suit);
    std::cout << "|\n|      ";
    print_number(karta.number);
    std::cout << "|\n";
    std::cout << "|_______|\n";
	}
}

int main() 
{
    card ace_diamond;

    ace_diamond.suit = 1;
    ace_diamond.number = 8;

    print_card(ace_diamond);

    return 0;
}