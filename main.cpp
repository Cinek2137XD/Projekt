#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <vector>
//#include <head.h>
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

void menu()
{
    system("CLS");
    std::cout << "---------------------------------------------\n\n";
    std::cout << " WITAJ! \n\n\nW ZESTAWIE GIER KARCIANYCH\n\nMarcin Kukus\nMateusz Placha\n\n";
    std::cout << "---------------------------------------------\n";
    std::cout << "Wybiez gre: \n";
    std::cout << "\n\n";
    std::cout << "1.Proste operacje matematyczne \n\n";
    std::cout << "2.Pola figur \n\n";
    std::cout << "3.Obwody figur \n\n";
    std::cout << "4.Twierdzenie pitagorasa\n\n";
    std::cout << "5.Wartosci Trygonometryczne\n\n";
    std::cout << "6.Srednia arytmetyczna\n\n";
}

typedef struct card
{
    int suit;
    int number;
    void random_card(std::vector<int> in, std::vector<int> num_v);
    int points();
};

int card::points()
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

void card::random_card(std::vector<int> suit_v, std::vector<int> num_v)
{
    while (true)
    {
        card temp;        
        temp.suit = random_suit();
        temp.number = random_number();
        if (sch_vec(suit_v,num_v, temp.suit,temp.number) != true)
        {
            suit = temp.suit;
            number = temp.number;
            break;
        }
    }
}

card de_id(std::vector<int> suit,std::vector<int> num, int numer)
{
    card temp;
    temp.number = num[numer];
    temp.suit = suit[numer];
    return temp;
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

bool sch_vec(std::vector<int> suit_v,std::vector<int>num_v, int suit, int num)
{
    for (int i = 0; i < suit_v.size(); i++)
    {
        if (num_v[i] == num && suit_v[i] == suit)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    using std::cin;
    using std::cout;
    using std::vector;
    int vallet, decision;
    vallet = 100;
    bool status = true;

    while (status)
    {
        std::string h_bust;
        vector<int> dobrane_suit,dobrane_num;
        menu();
        cin >> decision;
        switch (decision)
        {
        case 1:
            
            //card d_card, p_card, temp_card;
            //int d_point, p_point, bet;
            bool statusBJ= true; //, h_s= true, round = true;
            
            while (statusBJ)
            {
                card d_card, p_card, temp_card;
                int d_point, p_point, bet;
                bool h_s= true, round = true;
                system("cls");
                cout << "Ile chcesz obstawic?\nSrodki: " << vallet << "\n";
                cin >> bet;
                if (bet >= vallet)  //rozłożenie kart dla użytkownika i dealera
                {
                    vallet -= bet;
                    p_card.random_card(dobrane_suit,dobrane_num);
                    p_point += p_card.points();
                    dobrane_num.push_back(p_card.number);       //0
                    dobrane_suit.push_back(p_card.suit);
                    print_card(p_card);
                    cin;
                    //cout<<"Karta dealera: \n";

                    d_card.random_card(dobrane_suit,dobrane_num);
                    d_point = d_card.points();
                    dobrane_num.push_back(d_card.number);       //1
                    dobrane_suit.push_back(d_card.suit);
                    //system("pause");

                    p_card.random_card(dobrane_suit,dobrane_num);
                    p_point += p_card.points();
                    dobrane_num.push_back(p_card.number);       //2
                    dobrane_suit.push_back(p_card.suit);
                    print_card(p_card);

                    d_card.random_card(dobrane_suit,dobrane_num);
                    d_point += d_card.points();
                    dobrane_num.push_back(d_card.number);       //3
                    dobrane_suit.push_back(d_card.suit);


                    if (p_point > 21)
                    {
                        cout << "BUST!!!\n\n przegrano: " << bet << "\n";
                        system("pause");
                    }
                    else if(p_point < 21)
                    {
                        while(round)
                        {
                            cout << "Ilosc punktow: "<<p_point<<"\nPunkty dealera: "<<d_point<<"\nHit? Stand?\n"; //dobieranie kart dodatkowych przez użytkownika
                            cin>>h_bust;
                            while (h_s)
                            {
                                if ((h_bust == "hit")||(h_bust == "Hit"))
                                {
                                    p_card.random_card(dobrane_suit,dobrane_num);
                                    p_point += p_card.points();
                                    dobrane_num.push_back(p_card.number);
                                    dobrane_suit.push_back(p_card.suit);
                                    print_card(p_card);
                                    h_s=false;
                                }
                                else if((h_bust == "Stand")||(h_bust == "stand"))
                                {
                                    round = false;
                                }
                                else
                                {
                                    cout<<"Prosze odpowiedziec Hit/Stand\n";
                                    h_s=false;
                                }
                            }
                            
                        }
                        cout << "Tura dealera...\n\n\n\n\n";
                        temp_card = de_id(dobrane_suit,dobrane_num, 1);
                        print_card(temp_card);
                        print_card(d_card);
                        if(d_point>21)
                        {
                            cout << "Dealer zbustowal!!!!!\n\nWygrana: "<< bet*2 <<"\n\n";
                            vallet += 2*bet;
                        }
                        else
                        {
                            while (d_point < 16)
                            {
                                d_card.random_card(dobrane_suit,dobrane_num);
                                d_point += d_card.points();
                                dobrane_num.push_back(d_card.number);       
                                dobrane_suit.push_back(d_card.suit);
                                print_card(d_card);
                            }
                            if (d_point > 21)
                            {
                                vallet += 2*bet;
                                cout << "Dealer zbustowal!!!!!\n\nWygrana: "<< bet*2 <<"\n\nIlosc pieniedzy: "<<vallet<<"\n";
                                system("pause");
                                
                            }
                            else if (d_point > p_point)
                            {
                                cout << "Dealer wygral!!!!!\n\nPrzegrano: "<< bet << "\n\nPunkty dealera: "<< d_point <<" Punkty gracza: " << p_point<<"\n\nIlosc pieniedzy: "<<vallet<<"\n";
                                system("pause");
                            }
                            else if(d_point < p_point)
                            {
                                vallet += 2*bet;
                                cout << "Wygrana!!!!!\n\nZysk: "<< 2*bet << "\n\nPunkty dealera: "<< d_point <<" Punkty gracza: " << p_point<<"\n\nIlosc pieniedzy: "<<vallet<<"\n";
                                system("pause");
                            }
                            else
                            {
                                vallet += bet;
                                cout << "Remis!!!\n\nPunkty dealera: "<< d_point <<" Punkty gracza: " << p_point<<"\n\nIlosc pieniedzy: "<<vallet<<"\n";
                                system("pause");   
                            }
                            
                        }
                    }
                    else
                    {
                        cout << "Blackjack!!!!\n\n";
                        while (d_point < 16)
                        {
                            d_card.random_card(dobrane_suit,dobrane_num);
                            d_point += d_card.points();
                            dobrane_num.push_back(d_card.number);       
                            dobrane_suit.push_back(d_card.suit);
                            print_card(d_card);
                        }
                        if (d_point > 21)
                        {
                            vallet += 3*bet;
                            cout << "Dealer zbustowal!!!!!\n\nWygrana: "<< bet*2 <<"\n\nIlosc pieniedzy: "<<vallet<<"\n";
                            system("pause");
                        }
                        else if(d_point < p_point)
                        {
                            vallet += 3*bet;
                            cout << "Wygrana!!!!!\n\nZysk: "<< 2*bet << "\n\nPunkty dealera: "<< d_point <<" Punkty gracza: " << p_point<<"\n\nIlosc pieniedzy: "<<vallet<<"\n";
                            system("pause");
                        }
                        else
                        {
                            vallet += bet;
                            cout << "Remis!!!\n\nPunkty dealera: "<< d_point <<" Punkty gracza: " << p_point<<"\n\nIlosc pieniedzy: "<<vallet<<"\n";
                            system("pause");   
                        }
                    }
                    
                }
                else
                {
                    cout << "Nie masz wystarczajaco srodkow!";
                    system("pause");
                }
                system("cls");
                std::string wybor;
                cout<<"\n\n\n\n\n\n\n\n                        Grasz dalej? (t/n)\n";
                std::cin >> wybor;
                if ((wybor == "n")||(wybor == "N"))
                {
                    statusBJ =false;
                }
                else if(((wybor=!"n")&&(wybor =!"N"))&&((wybor =!"t")&&(wybor =!"T"))) // do dokonczenia

            }
            break;


        default:
            break;
        }
    }
}
