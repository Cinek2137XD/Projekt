#include <iostream>



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

typedef enum Suit {
    spade = 1,
    club,
    heart,
    diamond
} suit_t;

typedef struct card{
    suit_t suit;
    number_t number;
} card_t;

//void print_card(card_t card);
