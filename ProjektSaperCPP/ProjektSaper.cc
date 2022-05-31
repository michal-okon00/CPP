#include <ncurses.h>
#include <string>
#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <ctime>
using namespace std;

//Funkcja odpawiadajaca za menu gry
int showmenu(int *pl_x, int *pl_y, int *pl_min, int *saved){
    const char label1[] = "Nowa gra";
    const char label2[] = "Wyjdz";
    const char label3[] = "9x9  10 min ";
    const char label4[] = "16x16  40 min";
    const char label5[] = "30x16  99 min";
    int ktory = 1;
    int znak;
    const int min_wybor = 1;
    const int max_wybor = 5;
    
    int wysokosc, szerokosc, startY, startX;
    wysokosc = szerokosc = 20;
    startY = startX = 0;
    
    WINDOW * menuwin = newwin(wysokosc, szerokosc, startY, startX);
    refresh();
    wrefresh(menuwin);
    keypad(menuwin,true);
    
    init_pair(1,2,0);
    
    do{
        
        
        //Wyswietlanie i podswietlanie wyboru w menu
        switch(ktory){
            case 1:
                mvwprintw(menuwin,2,2,label2);  //wypisujemy wszstko poza opcja 1
                mvwprintw(menuwin,3,2,label3);
                mvwprintw(menuwin,4,2,label4);
                mvwprintw(menuwin,5,2,label5);
    
                switch(*saved){
                    case 3:
                        wattron(menuwin,COLOR_PAIR(1));
                        mvwprintw(menuwin,3,2,label3);
                        break;
                
                    case 4:
                        wattron(menuwin,COLOR_PAIR(1));
                        mvwprintw(menuwin,4,2,label4);
                        break;
                
                    case 5:
                        wattron(menuwin,COLOR_PAIR(1));
                        mvwprintw(menuwin,5,2,label5);
                        break;
                }
                wattroff(menuwin,COLOR_PAIR(1));
                
                
                wattron(menuwin,A_REVERSE);     //opcja 1 wyswietlona w odwrotnych kolorach (zaznaczenie)
                mvwprintw(menuwin,1,2,label1);
                wattroff(menuwin,A_REVERSE); 
                
                break;
                
            case 2:
                mvwprintw(menuwin,1,2,label1);  //wypisujemy wszstko poza opcja 2
                mvwprintw(menuwin,3,2,label3);
                mvwprintw(menuwin,4,2,label4);
                mvwprintw(menuwin,5,2,label5);
                
                switch(*saved){
                    case 3:
                        wattron(menuwin,COLOR_PAIR(1));
                        mvwprintw(menuwin,3,2,label3);
                        break;
                
                    case 4:
                        wattron(menuwin,COLOR_PAIR(1));
                        mvwprintw(menuwin,4,2,label4);
                        break;
                
                    case 5:
                        wattron(menuwin,COLOR_PAIR(1));
                        mvwprintw(menuwin,5,2,label5);
                        break;
                }
                wattroff(menuwin,COLOR_PAIR(1));
                
                wattron(menuwin,A_REVERSE);     //opcja 2 wyswietlona w odwrotnych kolorach (zaznaczenie)
                mvwprintw(menuwin,2,2,label2);
                wattroff(menuwin,A_REVERSE);
                break;
                
            case 3:
                mvwprintw(menuwin,1,2,label1);  //wypisujemy wszstko poza opcja 3
                mvwprintw(menuwin,2,2,label2);
                mvwprintw(menuwin,4,2,label4);
                mvwprintw(menuwin,5,2,label5);
                
                switch(*saved){
                    case 3:
                        wattron(menuwin,COLOR_PAIR(1));
                        mvwprintw(menuwin,3,2,label3);
                        break;
                
                    case 4:
                        wattron(menuwin,COLOR_PAIR(1));
                        mvwprintw(menuwin,4,2,label4);
                        break;
                
                    case 5:
                        wattron(menuwin,COLOR_PAIR(1));
                        mvwprintw(menuwin,5,2,label5);
                        break;
                }
                wattroff(menuwin,COLOR_PAIR(1));
                
                wattron(menuwin,A_REVERSE);     //opcja 3 wyswietlona w odwrotnych kolorach (zaznaczenie)
                mvwprintw(menuwin,3,2,label3);
                wattroff(menuwin,A_REVERSE);
                break;
                
            case 4:
                mvwprintw(menuwin,1,2,label1);  //wypisujemy wszstko poza opcja 4
                mvwprintw(menuwin,2,2,label2);
                mvwprintw(menuwin,3,2,label3);
                mvwprintw(menuwin,5,2,label5);
                
                switch(*saved){
                    case 3:
                        wattron(menuwin,COLOR_PAIR(1));
                        mvwprintw(menuwin,3,2,label3);
                        break;
                
                    case 4:
                        wattron(menuwin,COLOR_PAIR(1));
                        mvwprintw(menuwin,4,2,label4);
                        break;
                
                    case 5:
                        wattron(menuwin,COLOR_PAIR(1));
                        mvwprintw(menuwin,5,2,label5);
                        break;
                }
                wattroff(menuwin,COLOR_PAIR(1));
                
                wattron(menuwin,A_REVERSE);     //opcja 4 wyswietlona w odwrotnych kolorach (zaznaczenie)
                mvwprintw(menuwin,4,2,label4);
                wattroff(menuwin,A_REVERSE);
                break;
                
            case 5:
                mvwprintw(menuwin,1,2,label1);  //wypisujemy wszstko poza opcja 5
                mvwprintw(menuwin,2,2,label2);
                mvwprintw(menuwin,3,2,label3);
                mvwprintw(menuwin,4,2,label4);
                
                switch(*saved){
                    case 3:
                        wattron(menuwin,COLOR_PAIR(1));
                        mvwprintw(menuwin,3,2,label3);
                        break;
                
                    case 4:
                        wattron(menuwin,COLOR_PAIR(1));
                        mvwprintw(menuwin,4,2,label4);
                        break;
                
                    case 5:
                        wattron(menuwin,COLOR_PAIR(1));
                        mvwprintw(menuwin,5,2,label5);
                        break;
                }
                wattroff(menuwin,COLOR_PAIR(1));
                
                wattron(menuwin,A_REVERSE);     //opcja 5 wyswietlona w odwrotnych kolorach (zaznaczenie)
                mvwprintw(menuwin,5,2,label5);
                wattroff(menuwin,A_REVERSE);
                break;
        }
        

        
        refresh();
        wrefresh(menuwin);
        //Pobranie znaku gora/dol w menu
        znak = wgetch(menuwin);
        clear();
        //Przechodzenie w menu gora/dol
        if(znak==KEY_UP && ktory != min_wybor){
            ktory--;
        }
        else if(znak==KEY_DOWN && ktory != max_wybor){
            ktory++;
        }
        
        //Enter i wybranie opcji
        if(znak==10){
            switch(ktory){
                case 1:
                    return 1;
                    break;
                case 2:
                    return 2;
                    break;
                case 3:
                    *saved = 3;
                    *pl_x = 9;
                    *pl_y = 9;
                    *pl_min = 10;
                    break;
                case 4:
                    *saved = 4;
                    *pl_x = 16;
                    *pl_y = 16;
                    *pl_min = 40;
                    break;
                case 5:
                    *saved = 5;
                    *pl_x = 30;
                    *pl_y = 16;
                    *pl_min = 99;
                    break;
                
            }
        }
        
        
    }while(1);
}

//Funkcja generujaca tablice min
int* plansza(int pl_x, int pl_y, int pl_min){
    int miny=0, X, Y;
    int* tabelka = (int*)calloc(pl_x*pl_y,sizeof(int)*pl_x*pl_y);
    
    //Losowanie min
    if(tabelka){
        srand((unsigned)time(0));
        do{
            do{
                X = rand() % pl_x;
                Y = rand() % pl_y;
            }while(tabelka[Y*pl_x+X] != 0);
            tabelka[Y*pl_x+X] = 1;
            miny++;
        }while(miny < pl_min);
        
        
    }
    else{
        cout<<"Blad alokacji pamieci"<<endl;
        getch();
        endwin();
    }
    return tabelka;
}

//Funkcja rekurencyjnie odkrywa pola wokol pol bez min
void rek(int *plantabelki, int pl_x, int pl_y, int *pushed, int *czek, int index){
    if(czek[index]){
        return;
    }
    int zlicz = 0; //zliczanie min
    (*pushed)++; //tu tez musimy pamietac o dodaniu "klikniec"
    
    if(index>pl_x-1){ //N
        if(plantabelki[index-pl_x]==1){
            zlicz++;
        }
    }
    if((index>pl_x-1) && (index%pl_x<pl_x-1)){ //NE
        if(plantabelki[index-pl_x + 1]==1){
            zlicz++;
        }
    }
    if(index%pl_x<pl_x-1){ //E
        if(plantabelki[index+1]==1){
            zlicz++;
        }
    }
    if((index<(pl_y-1)*pl_x) && (index%pl_x<pl_x-1)){ //SE
        if(plantabelki[index+pl_x+1]==1){
            zlicz++;
        }
    }
    if(index<(pl_y-1)*pl_x){ //S
        if(plantabelki[index+pl_x]==1){
            zlicz++;
        }
    }
    if((index<(pl_y-1)*pl_x) && (index%pl_x>0)){ //SW
        if(plantabelki[index+pl_x-1]==1){
            zlicz++;
        }
    }
    if(index%pl_x>0){ //W
        if(plantabelki[index-1]==1){
            zlicz++;
        }
    }
    if((index>pl_x-1) && (index%pl_x>0)){ //NW
        if(plantabelki[index-pl_x-1]==1){
            zlicz++;
        }
    }
    
    //Zliczono miny w rekurencji
    //Co robic znowu w zaleznosci od ilosci min
    if(zlicz==0){ //Znowu trafiono na pole bez min wokol czyli wywolujemy rekurencje
        czek[index] = 10;
        if(index>pl_x-1){
            rek(plantabelki,pl_x,pl_y,pushed,czek,index-pl_x); //N
        }
        if((index>pl_x-1) && (index%pl_x<pl_x-1)){
            rek(plantabelki,pl_x,pl_y,pushed,czek,index-pl_x + 1); //NE
        }
        if(index%pl_x<pl_x-1){
            rek(plantabelki,pl_x,pl_y,pushed,czek,index+1); //E
        }
        if((index<pl_y*(pl_x-1)) && (index%pl_x<pl_x-1)){
            rek(plantabelki,pl_x,pl_y,pushed,czek,index+pl_x+1); //SE
        }
        if(index<pl_y*(pl_x-1)){
            rek(plantabelki,pl_x,pl_y,pushed,czek,index+pl_x); //S
        }
        if((index<pl_y*(pl_x-1)) && (index%pl_x>0)){
            rek(plantabelki,pl_x,pl_y,pushed,czek,index+pl_x-1); //SW
        }
        if(index%pl_x>0){
            rek(plantabelki,pl_x,pl_y,pushed,czek,index-1); //W
        }
        if((index>pl_x-1) && (index%pl_x>0)){
            rek(plantabelki,pl_x,pl_y,pushed,czek,index-pl_x-1); //NW
        }        
    }
    else if(zlicz == 1){
        czek[index] = 11;
    }
    else if(zlicz == 2){
        czek[index] = 12;
    }
    else if(zlicz == 3){
        czek[index] = 13;
    }
    else if(zlicz == 4){
        czek[index] = 14;
    }
    else if(zlicz == 5){
        czek[index] = 15;
    }
    else if(zlicz == 6){
        czek[index] = 16;
    }
    else if(zlicz == 7){
        czek[index] = 17;
    }
    else if(zlicz == 8){
        czek[index] = 18;
    }    
}

//Glowna funkcja odpowiadajaca za wyswietlanie gry i jej logike
void gra(int* plantabelki, int pl_x, int pl_y, int pl_min){
    
    //Tworzenie odpowiedniego okna
    int wysokosc, szerokosc, startY, startX;
    
    startY = startX = 0;
    
    if(pl_x == 9){
        wysokosc = 13;
        szerokosc = 29;
    }
    if(pl_x == 16){
        wysokosc = 20;
        szerokosc = 36;
    }
    if(pl_x == 30){
        wysokosc = 20;
        szerokosc = 50;
    }
    
    WINDOW * grawin = newwin(wysokosc, szerokosc, startY, startX);
    refresh();
    wrefresh(grawin);
    
    int guzik; //Nacisniety przycisk
    bool start = 0; //Pierwszy ruch
    bool trwa = 0; //Czy trwa gra
    int wielkosc = pl_x*pl_y; //Ilosc pozycji na planszy
    int x=0,y=0,X,Y,ilemin;
    int czek[wielkosc]; //Tablica do identyfikacji stanu pol
    int liczbaflag = pl_min; //Do wyswietlania flag
    int pushed = 0; //Ilosc "klikniec", potrzebne do ustalenia zwyciestwa
    int minX = 0; //Zakresy ruchow strzalkami
    int minY = 0;
    int maxX = pl_x - 1;
    int maxY = pl_y - 1;
    int poz = 0; //Index pozycji na ktorej sie znajdujemy
    
    //Teksty uzywane w grze
    const char nPrzerwano[] = "Przerwano ";
    const char nPrzegrana[] = "Przegrana ";
    const char nZwyciestwo[] ="Zwyciestwo";
    const char facetrwa[] = "._.";
    const char facelose[] = "x_x";
    const char facewin[]  = "^-^";
    const char ileflag[] = "Flagi";
    const char separate[] ="-----";
    const char kont[] = "Nacisnij przycisk";
    
    //Kolory na planszy
    init_pair(11,6,0);
    init_pair(12,2,0);
    init_pair(13,1,0);
    init_pair(14,5,0);
    init_pair(15,3,0);
    init_pair(16,4,0);
    init_pair(17,2,0);
    init_pair(18,7,0);
    init_pair(19,1,0);
    init_pair(20,7,0);
    
    //Znaki na planszy
    const char nieod[] = "~";
    const char odkryte[] = "O";
    const char flag[] = "F";
    const char mina[] = "X";
    const char jeden[] = "1";
    const char dwa[] = "2";
    const char trzy[] = "3";
    const char cztery[] = "4";
    const char piec[] = "5";
    const char szesc[] = "6";
    const char siedem[] = "7";
    const char osiem[] = "8";
    
    //Uruchomienie keypada dla okna
    keypad(grawin,true);
    
    //Stan kazdego pola ustawiony na 0 - nieodkryty
    for(int i=0;i<wielkosc;i++){
        czek[i]=0;
    }
    
    while(1){
        if(trwa != 0){ //Sprawdzenie czy gra sie skonczyla
            return;
        }
        
        //Wypisanie elementow poza polami gry
        mvwprintw(grawin,pl_y/3,pl_x+3,facetrwa);
        
        string s = to_string(liczbaflag);
        char const *pchar = s.c_str();
        
        mvwprintw(grawin,pl_y/3+2,pl_x+2,ileflag);
        mvwprintw(grawin,pl_y/3+3,pl_x+2,separate);
        mvwprintw(grawin,pl_y/3+4,pl_x+4,pchar);
        
        //Czesc odpowiedzialna za obsluge pol
        for(int m=0;m<pl_y;m++){
            for(int n=0;n<pl_x;n++){
                
                if(poz == m*pl_x+n){ //Obecna pozycja - odwroc kolory
                        wattron(grawin,A_REVERSE);
                    }
                
                //Wypelnienie pol w zaleznosci od stanu pol
                if(czek[m*pl_x+n]==0){
                    mvwprintw(grawin,m,n,nieod);
                }
                if(czek[m*pl_x+n]==2){
                    wattron(grawin,COLOR_PAIR(20));
                    mvwprintw(grawin,m,n,flag);
                    wattroff(grawin,COLOR_PAIR(20));
                }
                else if(czek[m*pl_x+n]==10){
                    mvwprintw(grawin,m,n,odkryte);
                }
                else if(czek[m*pl_x+n]==11){
                    wattron(grawin,COLOR_PAIR(11));
                    mvwprintw(grawin,m,n,jeden);
                    wattroff(grawin,COLOR_PAIR(11));
                }
                else if(czek[m*pl_x+n]==12){
                    wattron(grawin,COLOR_PAIR(12));
                    mvwprintw(grawin,m,n,dwa);
                    wattroff(grawin,COLOR_PAIR(12));
                }
                else if(czek[m*pl_x+n]==13){
                    wattron(grawin,COLOR_PAIR(13));
                    mvwprintw(grawin,m,n,trzy);
                    wattroff(grawin,COLOR_PAIR(13));
                }
                else if(czek[m*pl_x+n]==14){
                    wattron(grawin,COLOR_PAIR(14));
                    mvwprintw(grawin,m,n,cztery);
                    wattroff(grawin,COLOR_PAIR(14));
                }
                else if(czek[m*pl_x+n]==15){
                    wattron(grawin,COLOR_PAIR(15));
                    mvwprintw(grawin,m,n,piec);
                    wattroff(grawin,COLOR_PAIR(15));
                }
                else if(czek[m*pl_x+n]==16){
                    wattron(grawin,COLOR_PAIR(16));
                    mvwprintw(grawin,m,n,szesc);
                    wattroff(grawin,COLOR_PAIR(16));
                }
                else if(czek[m*pl_x+n]==17){
                    wattron(grawin,COLOR_PAIR(17));
                    mvwprintw(grawin,m,n,siedem);
                    wattroff(grawin,COLOR_PAIR(17));
                }
                else if(czek[m*pl_x+n]==18){
                    wattron(grawin,COLOR_PAIR(18));
                    mvwprintw(grawin,m,n,osiem);
                    wattroff(grawin,COLOR_PAIR(18));
                }
                
                wattroff(grawin,A_REVERSE);
            }
        }
        
        
        
        refresh();
        wrefresh(grawin);
        guzik = wgetch(grawin);
        clear();
        
        //Przerwanie gry i wyjscie do menu
        if(guzik=='q'){
            trwa = 1;
            mvwprintw(grawin,pl_y+1,1,nPrzerwano);
            mvwprintw(grawin,pl_y+2,1,kont);
            wgetch(grawin);
        }
        
        //Sterowanie strzalkami
        if(guzik==KEY_UP && y != minY){
            y--;
        }
        else if(guzik==KEY_DOWN && y != maxY){
            y++;
        }
        else if(guzik==KEY_LEFT && x != minX){
            x--;
        }
        else if(guzik==KEY_RIGHT && x != maxX){
            x++;
        }
        poz = y*pl_x+x;
        
        // czek=0 - nieodkryte pole
        // czek=10-18 - odkryte pole 
        // czek=2 - Flaga
        
        //Stawianie flag
        if(guzik=='f'){
            if(czek[poz] == 0){
                czek[poz] = 2;
                liczbaflag--;
            }
            else if(czek[poz] == 2){
                czek[poz] = 0;
                liczbaflag++;
            }
        }
        
        //Odsloniecie pola
        if(guzik==10){
            if(czek[poz] == 0){ //mozna odslaniac tylko nieodkryte i nieoflagowane pola
                if(start==0){ //Dla pierwszego ruchu
                    start = 1;
                    if(plantabelki[poz] == 1){ //Zabezpieczenie przed porazka przy pierwszym wyborze
                        plantabelki[poz] = 0; //poprzez przelosowanie jednej miny
                        srand((unsigned)time(0));
                        do{
                            X = rand() % pl_x;
                            Y = rand() % pl_y;
                        }while(plantabelki[Y*pl_x+X] != 0 || (Y*pl_x+X == poz));
                        plantabelki[Y*pl_x+X] = 1;
                    }
                }
                //Trafienie w pole bez miny
                //Musimy ustalic ile min jest wokol
                if(plantabelki[poz] == 0){
                    ilemin = 0;
                    pushed++;
                    if(poz>pl_x-1){ //N
                        if(plantabelki[poz-pl_x] == 1){
                            ilemin++;
                        }
                    }
                    if((poz>pl_x-1) && (poz%pl_x<pl_x-1)){ //NE
                        if(plantabelki[poz-pl_x + 1]==1){
                            ilemin++;
                        }
                    }
                    if(poz%pl_x<pl_x-1){ //E
                        if(plantabelki[poz+1]==1){
                            ilemin++;
                        }
                    }
                    if((poz<(pl_y-1)*pl_x) && (poz%pl_x<pl_x-1)){ //SE
                        if(plantabelki[poz+pl_x+1]==1){
                            ilemin++;
                        }
                    }
                    if(poz<(pl_y-1)*pl_x){
                        if(plantabelki[poz+pl_x]==1){ //S
                            ilemin++;
                        }
                    }
                    if((poz<(pl_y-1)*pl_x) && (poz%pl_x>0)){ //SW
                        if(plantabelki[poz+pl_x-1]==1){
                            ilemin++;
                        }
                    }
                    if(poz%pl_x>0){ //W
                        if(plantabelki[poz-1]==1){
                            ilemin++;
                        }
                    }
                    if((poz>pl_x-1) && (poz%pl_x>0)){ //NW
                        if(plantabelki[poz-pl_x-1]==1){
                            ilemin++;
                        }
                    }
                    
                    //Teraz co robic w zaleznosci od ilosci min
                    
                    //Brak min wokol wywoluje funkcje rek, ktora rekurencyjnie odslania pobliskie
                    //pola az nie natrafi na pola bez min wokol (bez liczby min)
                    if(ilemin == 0){
                        czek[poz] = 10;
                        if(poz>pl_x-1){
                            rek(plantabelki,pl_x,pl_y,&pushed,czek,poz-pl_x); //N
                        }
                        if((poz>pl_x-1) && (poz%pl_x<pl_x-1)){
                            rek(plantabelki,pl_x,pl_y,&pushed,czek,poz-pl_x + 1); //NE
                        }
                        if(poz%pl_x<pl_x-1){
                            rek(plantabelki,pl_x,pl_y,&pushed,czek,poz+1); //E
                        }
                        if((poz<(pl_y-1)*pl_x) && (poz%pl_x<pl_x-1)){
                            rek(plantabelki,pl_x,pl_y,&pushed,czek,poz+pl_x+1); //SE
                        }
                        if(poz<(pl_y-1)*pl_x){
                            rek(plantabelki,pl_x,pl_y,&pushed,czek,poz+pl_x); //S
                        }
                        if((poz<(pl_y-1)*pl_x) && (poz%pl_x>0)){
                            rek(plantabelki,pl_x,pl_y,&pushed,czek,poz+pl_x-1); //SW
                        }
                        if(poz%pl_x>0){
                            rek(plantabelki,pl_x,pl_y,&pushed,czek,poz-1); //W
                        }
                        if((poz>pl_x-1) && (poz%pl_x>0)){
                            rek(plantabelki,pl_x,pl_y,&pushed,czek,poz-pl_x-1); //NW
                        }
                    }
                    
                    //W pozostalych przypadkach tylko zmieniamy stan pola
                    if(ilemin == 1){
                        czek[poz] = 11;
                    }
                    if(ilemin == 2){
                        czek[poz] = 12;
                    }
                    if(ilemin == 3){
                        czek[poz] = 13;
                    }
                    if(ilemin == 4){
                        czek[poz] = 14;
                    }
                    if(ilemin == 5){
                        czek[poz] = 15;
                    }
                    if(ilemin == 6){
                        czek[poz] = 16;
                    }
                    if(ilemin == 7){
                        czek[poz] = 17;
                    }
                    if(ilemin == 8){
                        czek[poz] = 18;
                    }
                    
                    //Wygrywamy gre
                    if(pushed == wielkosc - pl_min){
                        trwa = 1;
                        

                        
                        wattron(grawin,COLOR_PAIR(12));
                        mvwprintw(grawin,pl_y+1,1,nZwyciestwo);
                        mvwprintw(grawin,pl_y+2,1,kont);
                        mvwprintw(grawin,pl_y/3,pl_x+3,facewin);
                        wattroff(grawin,COLOR_PAIR(12));
                        wgetch(grawin);
                    }
                }
                else{
                    //Natrafiono na mine - Przegrywamy gre
                    trwa = 1;
                    wattron(grawin,COLOR_PAIR(13));
                    mvwprintw(grawin,pl_y+1,1,nPrzegrana);
                    mvwprintw(grawin,pl_y+2,1,kont);
                    mvwprintw(grawin,pl_y/3,pl_x+3,facelose);
                    
                    //Narysowanie trafienia w mine
                    //Sprawdzic dokladnie
                    mvwprintw(grawin,y,x,mina);
                    
                    wattroff(grawin,COLOR_PAIR(13));
                    wgetch(grawin);
                }
            }
        }
    }
}


int main(){
    //Odpalanie ncurses
    initscr();
    noecho();
    cbreak();
    
    //Sprawdzenie czy terminal wspiera kolory
    if(!has_colors()){
        printw("Terminal nie wspiera kolorow");
        getch();
        return -1;
    }
    start_color();
    int pl_x = 9; //szerokosc planszy
    int pl_y = 9; //wysokosc planszy
    int pl_min = 10; //ilosc min
    int saved = 3; //zapisana opcja wyboru trudnosci w menu
    int *plantabelki = 0; //schemat planszy
    
    while(1){
        int wyjscie = showmenu(&pl_x, &pl_y, &pl_min, &saved);
        
        if(wyjscie == 1){ //Nowa gra
            if(plantabelki != 0){ //Czyscimy "plantabelki" jesli nie byl pusty
                free(plantabelki);
                plantabelki = 0;
            }
            plantabelki = plansza(pl_x, pl_y, pl_min);
            gra(plantabelki,pl_x,pl_y,pl_min);
        }
        
        if(wyjscie == 2){ //Wyjdz z gry
           break;
        }
    
    }
    //Zamkniecie okna i koniec programu
    endwin();
    return 0;
}
