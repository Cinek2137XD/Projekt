#include <iostream>
#include <string>

#define SPADE "\u2660"
#define CLUB "\u2663"
#define HEART "\u2665"
#define DIAMOND "\u2666"
#define king "\u2654"
#define queen "\u2655"
#define jack "\u2694"
#define top "\uFE35"
#define lup "\u239B"
#define llw "\u239D"
#define rup "\u239E"
#define rlw "\u23A0"
#define bot_p "\uFE36"


void print_suit(int suitToSelect) {   //funkcja przyjmuje zmienna ktora odpowiada kazdemu kolorowi kart
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

void print_number(int numberToSelect) {   //funkcja przyjmuje zmienna ktora odpowiada numerowi karty
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

typedef  struct card
{
    int suit;
    int number;
};

void print_card(card karta) {   //funkcja drukuje karte uzywajac poprzednich funkcji
	if (karta.number == 10 ) {
	std::cout << " _____________\n";
    std::cout << "|             |\n";
    std::cout << "|";
    print_number(karta.number);
    std::cout << "           |\n";
    std::cout <<"|";
    print_suit(karta.suit);
    std::cout << "   ";
    print_suit(karta.suit);
    std::cout << "   ";
    print_suit(karta.suit);
    std::cout << "    |\n";
    std::cout << "|      ";
    print_suit(karta.suit);
    std::cout<<"      |\n";
    std::cout << "|    ";
    print_suit(karta.suit);
    std::cout << "   ";
    print_suit(karta.suit);
    std::cout << "    |\n";
    std::cout << "|             |\n";
    std::cout << "|    ";
    print_suit(karta.suit);
    std::cout << "   ";
    print_suit(karta.suit);
    std::cout << "    |\n";
    std::cout << "|      ";
    print_suit(karta.suit);
    std::cout<<"      |\n";
    std::cout << "|    ";
    print_suit(karta.suit);
    std::cout << "   ";
    print_suit(karta.suit);
    std::cout << "   ";
    print_suit(karta.suit);
    std::cout << "|\n|           ";
    print_number(karta.number);
    std::cout << "|\n";
    std::cout << "|_____________|\n";
	} else if (karta.number == 9) {
    std::cout << " _____________\n";
    std::cout << "|             |\n";
    std::cout << "|";
    print_number(karta.number);
    std::cout << "            |\n";
    std::cout <<"|";
    print_suit(karta.suit);
    std::cout << "   ";
    print_suit(karta.suit);
    std::cout << "   ";
    print_suit(karta.suit);
    std::cout << "    |\n";
    std::cout << "|             |\n";
    std::cout << "|    ";
    print_suit(karta.suit);
    std::cout << "   ";
    print_suit(karta.suit);
    std::cout << "    |\n";
    std::cout << "|      ";
    print_suit(karta.suit);
    std::cout<<"      |\n";
    std::cout << "|    ";
    print_suit(karta.suit);
    std::cout << "   ";
    print_suit(karta.suit);
    std::cout << "    |\n";
    std::cout << "|             |\n";
    std::cout << "|    ";
    print_suit(karta.suit);
    std::cout << "   ";
    print_suit(karta.suit);
    std::cout << "   ";
    print_suit(karta.suit);
    std::cout << "|\n|            ";
    print_number(karta.number);
    std::cout << "|\n";
    std::cout << "|_____________|\n";
	}
    else if (karta.number == 8) {
    std::cout << " _____________\n";
    std::cout << "|             |\n";
    std::cout << "|";
    print_number(karta.number);
    std::cout << "            |\n";
    std::cout <<"|";
    print_suit(karta.suit);
    std::cout << "   ";
    print_suit(karta.suit);
    std::cout << "   ";
    print_suit(karta.suit);
    std::cout << "    |\n";
    std::cout << "|      ";
    print_suit(karta.suit);
    std::cout<<"      |\n";
    std::cout << "|             |\n";
    std::cout << "|    ";
    print_suit(karta.suit);
    std::cout << "   ";
    print_suit(karta.suit);
    std::cout << "    |\n";
    std::cout << "|             |\n";
    std::cout << "|      ";
    print_suit(karta.suit);
    std::cout<<"      |\n";
    std::cout << "|    ";
    print_suit(karta.suit);
    std::cout << "   ";
    print_suit(karta.suit);
    std::cout << "   ";
    print_suit(karta.suit);
    std::cout << "|\n|            ";
    print_number(karta.number);
    std::cout << "|\n";
    std::cout << "|_____________|\n";
	}
    else if (karta.number == 7) {
    std::cout << " _____________\n";
    std::cout << "|             |\n";
    std::cout << "|";
    print_number(karta.number);
    std::cout << "            |\n";
    std::cout <<"|";
    print_suit(karta.suit);
    std::cout << "   ";
    print_suit(karta.suit);
    std::cout << "   ";
    print_suit(karta.suit);
    std::cout << "    |\n";
    std::cout << "|      ";
    print_suit(karta.suit);
    std::cout<<"      |\n";
    std::cout << "|             |\n";
    std::cout << "|    ";
    print_suit(karta.suit);
    std::cout << "   ";
    print_suit(karta.suit);
    std::cout << "    |\n";
    std::cout << "|             |\n";
    std::cout << "|             |\n";
    std::cout << "|    ";
    print_suit(karta.suit);
    std::cout << "   ";
    print_suit(karta.suit);
    std::cout << "   ";
    print_suit(karta.suit);
    std::cout << "|\n|            ";
    print_number(karta.number);
    std::cout << "|\n";
    std::cout << "|_____________|\n";
	}
    else if (karta.number == 6) {
    std::cout << " _____________\n";
    std::cout << "|             |\n";
    std::cout << "|";
    print_number(karta.number);
    std::cout << "            |\n";
    std::cout <<"|";
    print_suit(karta.suit);
    std::cout << "   ";
    print_suit(karta.suit);
    std::cout << "   ";
    print_suit(karta.suit);
    std::cout << "    |\n";
    std::cout << "|             |\n";
    std::cout << "|             |\n";
    std::cout << "|    ";
    print_suit(karta.suit);
    std::cout << "   ";
    print_suit(karta.suit);
    std::cout << "    |\n";
    std::cout << "|             |\n";
    std::cout << "|             |\n";
    std::cout << "|    ";
    print_suit(karta.suit);
    std::cout << "   ";
    print_suit(karta.suit);
    std::cout << "   ";
    print_suit(karta.suit);
    std::cout << "|\n|            ";
    print_number(karta.number);
    std::cout << "|\n";
    std::cout << "|_____________|\n";
	}
    else if (karta.number == 5) {
    std::cout << " _____________\n";
    std::cout << "|             |\n";
    std::cout << "|";
    print_number(karta.number);
    std::cout << "            |\n";
    std::cout <<"|";
    print_suit(karta.suit);
    std::cout << "   ";
    print_suit(karta.suit);
    std::cout << "   ";
    print_suit(karta.suit);
    std::cout << "    |\n";
    std::cout << "|             |\n";
    std::cout << "|             |\n";
    std::cout << "|      ";
    print_suit(karta.suit);
    std::cout<<"      |\n";
    std::cout << "|             |\n";
    std::cout << "|             |\n";
    std::cout << "|    ";
    print_suit(karta.suit);
    std::cout << "   ";
    print_suit(karta.suit);
    std::cout << "   ";
    print_suit(karta.suit);
    std::cout << "|\n|            ";
    print_number(karta.number);
    std::cout << "|\n";
    std::cout << "|_____________|\n";
	}
    else if (karta.number == 4) {
    std::cout << " _____________\n";
    std::cout << "|             |\n";
    std::cout << "|";
    print_number(karta.number);
    std::cout << "            |\n";
    std::cout <<"|";
    print_suit(karta.suit);
    std::cout << "   ";
    print_suit(karta.suit);
    std::cout << "   ";
    print_suit(karta.suit);
    std::cout << "    |\n";
    std::cout << "|             |\n";
    std::cout << "|             |\n";
    std::cout << "|             |\n";
    std::cout << "|             |\n";
    std::cout << "|             |\n";
    std::cout << "|    ";
    print_suit(karta.suit);
    std::cout << "   ";
    print_suit(karta.suit);
    std::cout << "   ";
    print_suit(karta.suit);
    std::cout << "|\n|            ";
    print_number(karta.number);
    std::cout << "|\n";
    std::cout << "|_____________|\n";
	}
    else if (karta.number == 3) {
    std::cout << " _____________\n";
    std::cout << "|             |\n";
    std::cout << "|";
    print_number(karta.number);
    std::cout << "            |\n";
    std::cout <<"|";
    print_suit(karta.suit);
    std::cout << "     ";
    print_suit(karta.suit);
    std::cout<<"      |\n";
    std::cout << "|             |\n";
    std::cout << "|             |\n";
    std::cout << "|      ";
    print_suit(karta.suit);
    std::cout<<"      |\n";
    std::cout << "|             |\n";
    std::cout << "|             |\n";
    std::cout << "|      ";
    print_suit(karta.suit);
    std::cout<<"     ";
    print_suit(karta.suit);
    std::cout << "|\n|            ";
    print_number(karta.number);
    std::cout << "|\n";
    std::cout << "|_____________|\n";
	}
    else if (karta.number == 2) {
    std::cout << " _____________\n";
    std::cout << "|             |\n";
    std::cout << "|";
    print_number(karta.number);
    std::cout << "            |\n";
    std::cout <<"|";
    print_suit(karta.suit);
    std::cout << "     ";
    print_suit(karta.suit);
    std::cout<<"      |\n";
    std::cout << "|             |\n";
    std::cout << "|             |\n";
    std::cout << "|             |\n";
    std::cout << "|             |\n";
    std::cout << "|             |\n";
    std::cout << "|      ";
    print_suit(karta.suit);
    std::cout<<"     ";
    print_suit(karta.suit);
    std::cout << "|\n|            ";
    print_number(karta.number);
    std::cout << "|\n";
    std::cout << "|_____________|\n";
	}
    else if (karta.number == 11) {
    std::cout << " _____________\n";
    std::cout << "|             |\n";
    std::cout << "|";
    print_number(karta.number);
    std::cout << "            |\n";
    std::cout << "|"; 
    print_suit(karta.suit);
    std::cout << "            |\n";
    std::cout << "|             |\n";
    std::cout << "|             |\n";
    std::cout << "|      " jack "      |\n";
    std::cout << "|             |\n";
    std::cout << "|             |\n";
    std::cout << "|            ";
    print_suit(karta.suit);
    std::cout<<"|\n";
    std::cout << "|            ";
    print_number(karta.number);
    std::cout << "|\n";
    std::cout << "|_____________|\n";
	}
    
    else if (karta.number == 12) {
    std::cout << " _____________\n";
    std::cout << "|             |\n";
    std::cout << "|";
    print_number(karta.number);
    std::cout << "            |\n";
    std::cout << "|"; 
    print_suit(karta.suit);
    std::cout << "            |\n";
    std::cout << "|             |\n";
    std::cout << "|             |\n";
    std::cout << "|      " queen "      |\n";
    std::cout << "|             |\n";
    std::cout << "|             |\n";
    std::cout << "|            ";
    print_suit(karta.suit);
    std::cout<<"|\n";
    std::cout << "|            ";
    print_number(karta.number);
    std::cout << "|\n";
    std::cout << "|_____________|\n";
	}
    else if (karta.number == 13) {
    std::cout << " _____________\n";
    std::cout << "|             |\n";
    std::cout << "|";
    print_number(karta.number);
    std::cout << "            |\n";
    std::cout << "|"; 
    print_suit(karta.suit);
    std::cout << "            |\n";
    std::cout << "|             |\n";
    std::cout << "|             |\n";
    std::cout << "|      " king "      |\n";
    std::cout << "|             |\n";
    std::cout << "|             |\n";
    std::cout << "|            ";
    print_suit(karta.suit);
    std::cout<<"|\n";
    std::cout << "|            ";
    print_number(karta.number);
    std::cout << "|\n";
    std::cout << "|_____________|\n";
	}
    else if (karta.number == 14 && karta.suit == 2) {
    std::cout << " _____________\n";
    std::cout << "|             |\n";
    std::cout << "|";
    print_number(karta.number);
    std::cout << "            |\n";
    std::cout << "|"; 
    print_suit(karta.suit);
    std::cout << "     " top"     |\n";
    std::cout << "|     " lup "##" rup "    |\n";
    std::cout << "|   " top llw "##" rlw top "  |\n";
    std::cout << "|  " lup"########" rup" |\n";
    std::cout << "|  " llw"########" rlw" |\n";
    std::cout << "|    " bot_p"/\\" bot_p"   |\n";
    std::cout << "|            ";
    print_suit(karta.suit);
    std::cout<<"|\n";
    std::cout << "|            ";
    print_number(karta.number);
    std::cout << "|\n";
    std::cout << "|_____________|\n";
	}
    else if (karta.number == 14 && karta.suit == 1) {
    std::cout << " _____________\n";
    std::cout << "|             |\n";
    std::cout << "|";
    print_number(karta.number);
    std::cout << "            |\n";
    std::cout << "|"; 
    print_suit(karta.suit);
    std::cout << "            |\n";
    std::cout << "|      /\\     |\n";
    std::cout << "|     /##\\    |\n";
    std::cout << "|    /####\\   |\n";
    std::cout << "|    \\#/\\#/   |\n";
    std::cout << "|      /\\     |\n";
    std::cout << "|            ";
    print_suit(karta.suit);
    std::cout<<"|\n";
    std::cout << "|            ";
    print_number(karta.number);
    std::cout << "|\n";
    std::cout << "|_____________|\n";
	}else if (karta.number == 14 && karta.suit==3) {
    std::cout << " _____________\n";
    std::cout << "|             |\n";
    std::cout << "|";
    print_number(karta.number);
    std::cout << "            |\n";
    std::cout << "|"; 
    print_suit(karta.suit);
    std::cout << "   __  __   |\n";
    std::cout << "|   /##\\/##\\  |\n";
    std::cout << "|   \\######/  |\n";
    std::cout << "|    \\####/   |\n";
    std::cout << "|     \\##/    |\n";
    std::cout << "|      \\/     |\n";
    std::cout << "|            ";
    print_suit(karta.suit);
    std::cout<<"|\n";
    std::cout << "|            ";
    print_number(karta.number);
    std::cout << "|\n";
    std::cout << "|_____________|\n";
	}else if (karta.number == 14 && karta.suit==4) {
    std::cout << " _____________\n";
    std::cout << "|             |\n";
    std::cout << "|";
    print_number(karta.number);
    std::cout << "            |\n";
    std::cout << "|"; 
    print_suit(karta.suit);
    std::cout << "            |\n";
    std::cout << "|      /\\     |\n";
    std::cout << "|     /##\\    |\n";
    std::cout << "|    /####\\   |\n";
    std::cout << "|    \\####/   |\n";
    std::cout << "|     \\##/    |\n";
    std::cout << "|      \\/    ";
    print_suit(karta.suit);
    std::cout<<"|\n";
    std::cout << "|            ";
    print_number(karta.number);
    std::cout << "|\n";
    std::cout << "|_____________|\n";
	}
    
    
}



int main() 
{
    card ace_diamond;

    ace_diamond.suit = 1;
    ace_diamond.number = 14;

    print_card(ace_diamond);

    card hearth_diamond;
    hearth_diamond.suit=2;
    hearth_diamond.number=14;
    print_card(hearth_diamond);

    return 0;
}