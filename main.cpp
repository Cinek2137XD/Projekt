#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <vector>
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

int random_suit() // zwraca losową liczbę od 1 do 4
{
    srand(time(NULL));
    return rand() % 4 + 1;
}

int random_number() // zwraca losową liczbę od 2 do 14
{
    srand(time(NULL));
    return rand() % 14 + 2;
}

void menu() // drukowanie menu
{
    system("CLS");
    std::cout << "---------------------------------------------\n\n";
    std::cout << " WITAJ! \n\n\nW BLACKJACK\n\nMarcin Kukus\nMateusz Placha\n\n";
    std::cout << "---------------------------------------------\n";
    system("pause");
    //std::cout << "Wybiez gre: \n";
    //std::cout << "\n\n";
    //std::cout << "1.blackjack \n\n";
}

struct card
{
    int suit;
    int number;
    void random_card(std::vector<card> karty);
    int points();
};

int card::points() //liczy punktry dla danej karty
{
    if (number > 10)
    {
        return 10;
    }
    else
    {
        return number;
    }
}

bool sch_vec(std::vector<card> karty, int suit, int num) //szuka karty w wektorze
{
    for (size_t i = 0; i < karty.size(); i++)
    {
        if (karty[i].number == num && karty[i].suit == suit)
        {
            return false;
        }
    }
    return true;
}

void card::random_card(std::vector<card> karty) //losuje kartę oraz upewnia się czy karta nie została wcześniej dobrana
{
    while (true)
    {
        card temp;
        temp.suit = random_suit();
        temp.number = random_number();
        if (sch_vec(karty, temp.suit, temp.number))
        {
            suit = temp.suit;
            number = temp.number;
            break;
        }
    }
}

void print_suit(int suitToSelect)
{ // funkcja przyjmuje zmienna ktora odpowiada kazdemu kolorowi kart
    switch (suitToSelect)
    {
    case 1:
        std::cout << SPADE;
        break;
    case 2:
        std::cout << CLUB;
        break;
    case 3:
        std::cout << HEART;
        break;
    case 4:
        std::cout << DIAMOND;
        break;
    }
}

void print_number(int numberToSelect)
{ // funkcja przyjmuje zmienna ktora odpowiada numerowi karty
    switch (numberToSelect)
    {
    case 2:
        std::cout << "2";
        break;
    case 3:
        std::cout << "3";
        break;
    case 4:
        std::cout << "4";
        break;
    case 5:
        std::cout << "5";
        break;
    case 6:
        std::cout << "6";
        break;
    case 7:
        std::cout << "7";
        break;
    case 8:
        std::cout << "8";
        break;
    case 9:
        std::cout << "9";
        break;
    case 10:
        std::cout << "10";
        break;
    case 11:
        std::cout << "J";
        break;
    case 12:
        std::cout << "Q";
        break;
    case 13:
        std::cout << "K";
        break;
    case 14:
        std::cout << "A";
        break;
    }
}

void print_card(card karta)
{ // funkcja drukuje karte uzywajac poprzednich funkcji
    if (karta.number == 10)
    {
        std::cout << " _____________\n";
        std::cout << "|             |\n";
        std::cout << "|";
        print_number(karta.number);
        std::cout << "           |\n";
        std::cout << "|";
        print_suit(karta.suit);
        std::cout << "   ";
        print_suit(karta.suit);
        std::cout << "   ";
        print_suit(karta.suit);
        std::cout << "    |\n";
        std::cout << "|      ";
        print_suit(karta.suit);
        std::cout << "      |\n";
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
        std::cout << "      |\n";
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
    }
    else if (karta.number == 9)
    {
        std::cout << " _____________\n";
        std::cout << "|             |\n";
        std::cout << "|";
        print_number(karta.number);
        std::cout << "            |\n";
        std::cout << "|";
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
        std::cout << "      |\n";
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
    else if (karta.number == 8)
    {
        std::cout << " _____________\n";
        std::cout << "|             |\n";
        std::cout << "|";
        print_number(karta.number);
        std::cout << "            |\n";
        std::cout << "|";
        print_suit(karta.suit);
        std::cout << "   ";
        print_suit(karta.suit);
        std::cout << "   ";
        print_suit(karta.suit);
        std::cout << "    |\n";
        std::cout << "|      ";
        print_suit(karta.suit);
        std::cout << "      |\n";
        std::cout << "|             |\n";
        std::cout << "|    ";
        print_suit(karta.suit);
        std::cout << "   ";
        print_suit(karta.suit);
        std::cout << "    |\n";
        std::cout << "|             |\n";
        std::cout << "|      ";
        print_suit(karta.suit);
        std::cout << "      |\n";
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
    else if (karta.number == 7)
    {
        std::cout << " _____________\n";
        std::cout << "|             |\n";
        std::cout << "|";
        print_number(karta.number);
        std::cout << "            |\n";
        std::cout << "|";
        print_suit(karta.suit);
        std::cout << "   ";
        print_suit(karta.suit);
        std::cout << "   ";
        print_suit(karta.suit);
        std::cout << "    |\n";
        std::cout << "|      ";
        print_suit(karta.suit);
        std::cout << "      |\n";
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
    else if (karta.number == 6)
    {
        std::cout << " _____________\n";
        std::cout << "|             |\n";
        std::cout << "|";
        print_number(karta.number);
        std::cout << "            |\n";
        std::cout << "|";
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
    else if (karta.number == 5)
    {
        std::cout << " _____________\n";
        std::cout << "|             |\n";
        std::cout << "|";
        print_number(karta.number);
        std::cout << "            |\n";
        std::cout << "|";
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
        std::cout << "      |\n";
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
    else if (karta.number == 4)
    {
        std::cout << " _____________\n";
        std::cout << "|             |\n";
        std::cout << "|";
        print_number(karta.number);
        std::cout << "            |\n";
        std::cout << "|";
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
    else if (karta.number == 3)
    {
        std::cout << " _____________\n";
        std::cout << "|             |\n";
        std::cout << "|";
        print_number(karta.number);
        std::cout << "            |\n";
        std::cout << "|";
        print_suit(karta.suit);
        std::cout << "     ";
        print_suit(karta.suit);
        std::cout << "      |\n";
        std::cout << "|             |\n";
        std::cout << "|             |\n";
        std::cout << "|      ";
        print_suit(karta.suit);
        std::cout << "      |\n";
        std::cout << "|             |\n";
        std::cout << "|             |\n";
        std::cout << "|      ";
        print_suit(karta.suit);
        std::cout << "     ";
        print_suit(karta.suit);
        std::cout << "|\n|            ";
        print_number(karta.number);
        std::cout << "|\n";
        std::cout << "|_____________|\n";
    }
    else if (karta.number == 2)
    {
        std::cout << " _____________\n";
        std::cout << "|             |\n";
        std::cout << "|";
        print_number(karta.number);
        std::cout << "            |\n";
        std::cout << "|";
        print_suit(karta.suit);
        std::cout << "     ";
        print_suit(karta.suit);
        std::cout << "      |\n";
        std::cout << "|             |\n";
        std::cout << "|             |\n";
        std::cout << "|             |\n";
        std::cout << "|             |\n";
        std::cout << "|             |\n";
        std::cout << "|      ";
        print_suit(karta.suit);
        std::cout << "     ";
        print_suit(karta.suit);
        std::cout << "|\n|            ";
        print_number(karta.number);
        std::cout << "|\n";
        std::cout << "|_____________|\n";
    }
    else if (karta.number == 11)
    {
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
        std::cout << "|\n";
        std::cout << "|            ";
        print_number(karta.number);
        std::cout << "|\n";
        std::cout << "|_____________|\n";
    }

    else if (karta.number == 12)
    {
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
        std::cout << "|\n";
        std::cout << "|            ";
        print_number(karta.number);
        std::cout << "|\n";
        std::cout << "|_____________|\n";
    }
    else if (karta.number == 13)
    {
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
        std::cout << "|\n";
        std::cout << "|            ";
        print_number(karta.number);
        std::cout << "|\n";
        std::cout << "|_____________|\n";
    }
    else if (karta.number == 14 && karta.suit == 2)
    {
        std::cout << " _____________\n";
        std::cout << "|             |\n";
        std::cout << "|";
        print_number(karta.number);
        std::cout << "            |\n";
        std::cout << "|";
        print_suit(karta.suit);
        std::cout << "     " top "     |\n";
        std::cout << "|     " lup "##" rup "    |\n";
        std::cout << "|   " top llw "##" rlw top "  |\n";
        std::cout << "|  " lup "########" rup " |\n";
        std::cout << "|  " llw "########" rlw " |\n";
        std::cout << "|    " bot_p "/\\" bot_p "   |\n";
        std::cout << "|            ";
        print_suit(karta.suit);
        std::cout << "|\n";
        std::cout << "|            ";
        print_number(karta.number);
        std::cout << "|\n";
        std::cout << "|_____________|\n";
    }
    else if (karta.number == 14 && karta.suit == 1)
    {
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
        std::cout << "|\n";
        std::cout << "|            ";
        print_number(karta.number);
        std::cout << "|\n";
        std::cout << "|_____________|\n";
    }
    else if (karta.number == 14 && karta.suit == 3)
    {
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
        std::cout << "|\n";
        std::cout << "|            ";
        print_number(karta.number);
        std::cout << "|\n";
        std::cout << "|_____________|\n";
    }
    else if (karta.number == 14 && karta.suit == 4)
    {
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
        std::cout << "|\n";
        std::cout << "|            ";
        print_number(karta.number);
        std::cout << "|\n";
        std::cout << "|_____________|\n";
    }
}

int main()
{
    using std::cin;
    using std::cout;
    using std::vector;
    int vallet, decision;
    vallet = 100;
    bool status = true;

    while (status) //inicjalizacja gry
    {
        std::string h_bust;
        vector<card> dobrane;
        menu();
        bool statusBJ = true;

        while (statusBJ)
        {
            card d_card, p_card, temp_card;
            int d_point = 0, p_point = 0, bet;
            bool h_s = true, round = true;
            system("cls");
            cout << "Ile chcesz obstawic?\nSrodki: " << vallet << "\n"; //obstawianie
            cin >> bet;
            if (bet <= vallet) //rozłożenie kart dla użytkownika i dealera
            {
                vallet -= bet;
                p_card.random_card(dobrane);
                p_point += p_card.points();
                dobrane.push_back(p_card); //0
                print_card(p_card);

                d_card.random_card(dobrane);
                d_point = d_card.points();
                dobrane.push_back(d_card); //1

                p_card.random_card(dobrane);
                p_point += p_card.points();
                dobrane.push_back(p_card); //2
                print_card(p_card);

                d_card.random_card(dobrane);
                d_point += d_card.points();
                dobrane.push_back(d_card); //3;
                cout << d_point << " " << p_point << "\n";
                if (p_point > 21) //bust po dobraniu
                {
                    cout << "BUST!!!\n\n przegrano: " << bet << "\n";
                    system("pause");
                }
                else if (p_point == 21) // przypadek BLACKJACK
                {
                    cout << "Blackjack!!!!\n\n";
                    while (d_point < 16) //efekty gry zależnie od punktów dealera
                    {
                        d_card.random_card(dobrane);
                        d_point += d_card.points();
                        dobrane.push_back(d_card);
                        print_card(d_card);
                    }
                    if (d_point > 21)
                    {
                        vallet += 3 * bet;
                        cout << "Dealer zbustowal!!!!!\n\nWygrana: " << bet * 2 << "\n\nIlosc pieniedzy: " << vallet << "\n";
                        system("pause");
                    }
                    else if (d_point < p_point)
                    {
                        vallet += 3 * bet;
                        cout << "Wygrana!!!!!\n\nZysk: " << 2 * bet << "\n\nPunkty dealera: " << d_point << " Punkty gracza: " << p_point << "\n\nIlosc pieniedzy: " << vallet << "\n";
                        system("pause");
                    }
                    else
                    {
                        vallet += bet;
                        cout << "Remis!!!\n\nPunkty dealera: " << d_point << " Punkty gracza: " << p_point << "\n\nIlosc pieniedzy: " << vallet << "\n";
                        system("pause");
                    }
                }
                else if (p_point < 21)
                {
                    while (round)
                    {
                        cout << "Ilosc punktow: " << p_point << "\nPunkty dealera: " << d_point << "\nHit? Stand?\n"; //dobieranie kart dodatkowych przez użytkownika
                        cin >> h_bust;
                        while (h_s)
                        {
                            if ((h_bust == "hit") || (h_bust == "Hit"))
                            {
                                p_card.random_card(dobrane);
                                p_point += p_card.points();
                                dobrane.push_back(p_card);

                                print_card(p_card);
                                if (p_point > 21)
                                {
                                    cout << "BUST!!!\n\n przegrano: " << bet << "\n";
                                    system("pause");
                                    round = false;
                                }
                                h_s = false;
                            }
                            else if ((h_bust == "Stand") || (h_bust == "stand"))
                            {
                                round = false;
                                h_s = false;
                            }
                            else
                            {
                                cout << "Prosze odpowiedziec Hit/Stand\n";
                                h_s = false;
                            }
                        }
                    }
                }

                if (p_point < 21)
                {
                    cout << "Tura dealera...\n\n\n\n\n";
                    temp_card = dobrane[1];
                    print_card(temp_card);
                    print_card(d_card);
                    if (d_point > 21) //sprawdzenie czy punkty dealera nie przekraczają 21
                    {
                        cout << "Dealer zbustowal!!!!!\n\nWygrana: " << bet * 2 << "\n\n";
                        vallet += 2 * bet;
                    }
                    else
                    {
                        while (d_point < 16) // funkcja powoduje że dealer dobiera aż osiągnie 16 punktów
                        {
                            d_card.random_card(dobrane);
                            d_point += d_card.points();
                            dobrane.push_back(d_card);
                            print_card(d_card);
                        }
                        if (d_point > 21) //koniec gry, porównanie wyników i rozdanie nagród
                        {
                            vallet += 2 * bet;
                            cout << "Dealer zbustowal!!!!!\n\nWygrana: " << bet * 2 << "\n\nIlosc pieniedzy: " << vallet << "\n";
                            system("pause");
                        }
                        else if (d_point > p_point)
                        {
                            cout << "Dealer wygral!!!!!\n\nPrzegrano: " << bet << "\n\nPunkty dealera: " << d_point << " Punkty gracza: " << p_point << "\n\nIlosc pieniedzy: " << vallet << "\n";
                            system("pause");
                        }
                        else if (d_point < p_point)
                        {
                            vallet += 2 * bet;
                            cout << "Wygrana!!!!!\n\nZysk: " << 2 * bet << "\n\nPunkty dealera: " << d_point << " Punkty gracza: " << p_point << "\n\nIlosc pieniedzy: " << vallet << "\n";
                            system("pause");
                        }
                        else
                        {
                            vallet += bet;
                            cout << "Remis!!!\n\nPunkty dealera: " << d_point << " Punkty gracza: " << p_point << "\n\nIlosc pieniedzy: " << vallet << "\n";
                            system("pause");
                        }
                    }
                }
            }
            else //przypadek gdy gracz nie ma pieniędzy
            {
                cout << "Nie masz wystarczajaco srodkow!";
                system("pause");
            }
            bool menu_status = true;
            while (menu_status) //kontynuowanie gry
            {
                std::string wybor;
                cout << "\n\n\n\n\n\n\n\n                        Grasz dalej? (t/n)\n";
                std::cin >> wybor;
                if ((wybor == "n") || (wybor == "N"))
                {
                    statusBJ = false;
                    menu_status = false;
                }
                else if ((wybor == "T") || (wybor == "t"))
                {
                    menu_status = false;
                }
                else
                {
                    cout << "Nie ma takiego wyboru!!!       (wpisz t/n)\n";
                    system("pause");
                }
            }
        }
    }
}
