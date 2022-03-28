#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <conio.h>
#include <windows.h>
#include <cmath>
#include <cstdlib>
#include <iomanip>
#include <cstdio>
#include <stdlib.h>

using namespace std;

struct osoba
{
    string imie;
    string nazwisko;
    string miasto;
    string ulica;
    int nr_ul;
    char plec;
    int wiek;
    string pesel;
};

void menu(int &liczba_osob, vector<osoba> &ludzie);
void wyswietl(int &liczba_osob, vector <osoba> &ludzie);
void wprowadz(int &liczba_osob, vector <osoba> &ludzie);

bool esc_wcisniety()
{
    char klawisz;
    klawisz = getch();
    if( klawisz == 27) return true;
    else return false;

}

string setcolor(unsigned short color)
{
    HANDLE hcon = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hcon, color);
    return "";
}



void wyswietlanie(string napis, int szybkosc)
{
    for (int i = 0; i < napis.length(); i++)
        {
            Sleep(szybkosc);
            cout << napis[i];
        }
}
void wyswietlaniechara(char znak, int szybkosc)
{
    for (int i = 0; i < 1; i++)
        {
            Sleep(szybkosc);
            cout << znak;
        }
}
void start(int &liczba_osob, vector <osoba> &ludzie)
{   char z179=179,z219=219;
    string s;
    for(int i=0;i<11;i++)
    {
        s.push_back(z219);
    }
    cout<<"\n\n\n";
    char z200=200,z201=201,z202=202,z203=203,z204=204,z205=205,z206=206,z182=182,z185=185,z186=186,z187=187,z188=188,z254=254;
cout<<"                                             ";setcolor(11);cout<< z201<<z205<<z205<<z205<<z205<<z205<<z205<<"   ";setcolor(12);cout<<z201<<z205<<z205<<z205<<z205<<z205<<z187<<"   ";setcolor(14);cout<<z201<<z187<<"   "<<z201<<z187<<endl;
cout<<"                                             ";setcolor(11);cout<< z186<<"         "                              ;setcolor(12);cout<<z186<<"     "<<z186<<"   "                     ;setcolor(14);cout<<z186<<z200<<z187<<" "<<z201<<z188<<z186<<endl;
cout<<"                                             ";setcolor(11);cout<< z204<<z205<<z205<<z205<<z205<<z205<<"    "     ;setcolor(12);cout<<z204<<z205<<z205<<z205<<z205<<z205<<z185<<"   ";setcolor(14);cout<<z186<<" "<<z200<<z205<<z188<<" "<<z186<<endl;
cout<<"                                             ";setcolor(11);cout<< z186<<"         "                              ;setcolor(12);cout<<z186<<"     "<<z186<<"   "                     ;setcolor(14);cout<<z186<<"     "<<z186<<endl;
cout<<"                                             ";setcolor(11);cout<< z186<<"         "                              ;setcolor(12);cout<<z186<<"     "<<z186<<"   "                     ;setcolor(14);cout<<z186<<"     "<<z186<<endl;
    cout<<endl<<endl<<endl;
    cout<<"                                         ";setcolor(11);wyswietlaniechara(z179,15);wyswietlanie("                                 ", 1);setcolor(14);wyswietlaniechara(z179,15);
    cout<<"\r                                         ";setcolor(11);wyswietlaniechara(z179,15);     wyswietlanie(s,70);setcolor(12);     wyswietlanie(s,70);setcolor(14);     wyswietlanie(s,70);cout<<endl;
    Sleep(1000);
    system("cls");cout<<"\n\n\n";
cout<<"                                             ";setcolor(11);cout<< z201<<z205<<z205<<z205<<z205<<z205<<z205<<"   ";setcolor(12);cout<<z201<<z205<<z205<<z205<<z205<<z205<<z187<<"   ";setcolor(14);cout<<z201<<z187<<"   "<<z201<<z187<<endl;
cout<<"                                             ";setcolor(11);cout<< z186<<"         "                              ;setcolor(12);cout<<z186<<"     "<<z186<<"   "                     ;setcolor(14);cout<<z186<<z200<<z187<<" "<<z201<<z188<<z186<<endl;
cout<<"                                             ";setcolor(11);cout<< z204<<z205<<z205<<z205<<z205<<z205<<"    "     ;setcolor(12);cout<<z204<<z205<<z205<<z205<<z205<<z205<<z185<<"   ";setcolor(14);cout<<z186<<" "<<z200<<z205<<z188<<" "<<z186<<endl;
cout<<"                                             ";setcolor(11);cout<< z186<<"         "                              ;setcolor(12);cout<<z186<<"     "<<z186<<"   "                     ;setcolor(14);cout<<z186<<"     "<<z186<<endl;
cout<<"                                             ";setcolor(11);cout<< z186<<"         "                              ;setcolor(12);cout<<z186<<"     "<<z186<<"   "                     ;setcolor(14);cout<<z186<<"     "<<z186<<endl;

    setcolor(15);
    wyswietlanie("\n\n                                            Witamy w bazie danych \"FAM\"!\n" ,15) ;
    wyswietlanie("         ,-.___,-.                                                                                   |\\   /|\n",6);
    wyswietlanie("         \\_/_ _\\_/                                      Autorzy:                                     | \\_/ |\n",12);
    wyswietlanie("           )O_O(                                                                                     { O O }\n",6);
    wyswietlanie("          { (_) }             Aleksandra Rostkowska, Filip Kwiatkowski, Mateusz Czarnecki             ==Y== \n",12);
    wyswietlanie("           `-^-'                                                                                       '-' \n",6);
    wyswietlanie("            FAM                        Wcisnij dowolny klawisz, aby kontynuowac                        MAF \n\n", 12);

    getch();
    menu(liczba_osob, ludzie);

}
void wyswietl(int &liczba_osob, vector<osoba> &ludzie)
{   setcolor(15);
    system("cls");
    wyswietlanie("1. Wyswietlanie danych \n \n", 10);

    string napis = "Wyswietlam dane, prosze czekac...";

    wyswietlanie(napis, 15);
    Sleep(750);

    system("cls");
    int z=1;

    cout <<setw(4)<<"Nr.";
    cout <<setw(14)<<"Imie";
    cout <<setw(14)<<"Nazwisko";
    cout <<setw(17)<<"Miasto";
    cout <<setw(16)<<"Ulica";
    cout <<setw(8)<<"Nr.ul.";
    cout <<setw(6)<<"Plec";
    cout <<setw(6)<<"Wiek";
    cout <<setw(12)<<"Pesel"<< endl << endl;

    for(int i=0; i<liczba_osob; i++)
    {
        if(z%2)
        {
            setcolor(14);
        }
        else
        {
            setcolor(15);
        }
        Sleep(25);
        cout <<setw(3)<< i+1 << ". ";
        cout<<setw(13)<<ludzie[i].imie << " ";
        cout <<setw(13)<< ludzie[i].nazwisko << " ";
        cout <<setw(16)<< ludzie[i].miasto << " ";
        cout <<setw(15)<< ludzie[i].ulica << " ";
        cout <<setw(7)<< ludzie[i].nr_ul << " ";
        cout <<setw(5)<< ludzie[i].plec << " ";
        cout <<setw(5)<< ludzie[i].wiek << " ";
        cout <<setw(11)<< ludzie[i].pesel<< endl;
z++;

    }
    setcolor(15);
    wyswietlanie("\n \nAby powrocic do MENU: wcisnij dowolny klawisz", 10);
    getch();
    menu(liczba_osob, ludzie);
}

bool sprawdz_imie(string imie)      //Sprawdzam czy imie/nazwisko/ulica jest poprawna
{
    int inne_litery=0;
    if ((int)imie[0]>=65 && (int)imie[0]<=90 && imie.size() >=3)
    {
        for(int i=1; i<imie.size();i++)
        {
            if ((int)imie[i] <97 || (int)imie[i] >122)
            inne_litery++;
        }
        if(inne_litery >0)
        {
            return false;
        }
        else return true;
    }
    else {return false;}
}
bool czypeselpoprawnyostateczniebool(string pesel);
void czypeselpoprawnyostateczniekomunikat (string pesel);
void sprawdzampeselkomunikat(string pesel);

void wprowadz_imie(osoba &dodaj)
{   setcolor(15);
    string imie;
    Sleep(200);
    wyswietlanie("Imie: ", 15);
    cin >> imie;

        if(sprawdz_imie(imie))
        {
            dodaj.imie=imie;
        }

        else {wyswietlanie("Niepoprawne imie. Wprowadz dane jeszcze raz.", 15);
        Sleep(750);
        cout << endl;
        wprowadz_imie(dodaj);
}
}
void wprowadz_nazwisko(osoba &dodaj)
{
    setcolor(15);
    string nazwisko;
    wyswietlanie("Nazwisko: ", 15);
    cin >> nazwisko;

        if(sprawdz_imie(nazwisko))
        {
            dodaj.nazwisko=nazwisko;
        }

        else {wyswietlanie("Niepoprawne nazwisko. Wprowadz dane jeszcze raz.", 15);
        Sleep(750);
        cout << endl;
        wprowadz_nazwisko(dodaj);
}
}

void wprowadz_miasto(osoba &dodaj)
{
    setcolor(15);
    string miasto;
    wyswietlanie("Miasto: ", 15);
    cin >> miasto;

        if(sprawdz_imie(miasto))
        {
            dodaj.miasto=miasto;
        }

        else {wyswietlanie("Niepoprawne miasto. Wprowadz dane jeszcze raz.", 15);
        cout << endl;
        Sleep(750);
        wprowadz_miasto(dodaj);
}
}
void wprowadz_ulice(osoba &dodaj)
{   setcolor(15);
    string ulica;
    wyswietlanie("Ulica: ", 15);
    cin >> ulica;

        if(sprawdz_imie(ulica))
        {
            dodaj.ulica=ulica;
        }

        else {wyswietlanie("Niepoprawna nazwa ulicy. Wprowadz dane jeszcze raz.", 15);
        Sleep(750);
        cout << endl;
        wprowadz_ulice(dodaj);
}
}

int conv( string a ) {
    int v = 0;
    for( int i =0; i<a.length();i++) v = v * 10 + a[i] - 48;
    return v;
}
bool isnum( string t ) {
    for( int a = 0; a < t.length(); a++ ) {
        if( t[ a ] > '0' + 9 || t[ a ] < '0' ) return false;
    }
    return true;
}

void wprowadz_nr(osoba &dodaj)
{   setcolor(15);
    string  nr_ul;
    int a;
    wyswietlanie("Numer domu: ", 15);
    cin >> nr_ul;
    if(isnum(nr_ul)){ a = conv(nr_ul);
        if(a>0 && a<99999){
            dodaj.nr_ul = a;
        }
        else{wyswietlanie("Niepoprawny numer domu. Wprowadz poprawne dane.", 10);
        Sleep(750);
        cout << endl;
        wprowadz_nr(dodaj);}}

    else{wyswietlanie("To nie jest liczba. Wprowadz poprawne dane.", 10);
    Sleep(750);
    cout << endl;
    wprowadz_nr(dodaj);}
    }

void wprowadz_plec(osoba &dodaj)
{   setcolor(15);
    char plec;
    wyswietlanie("Plec (M/K): ", 15);
    cin >> plec;
        if(plec == 'k') {plec = 'K';}
        if(plec == 'm') {plec = 'M';}
    if(plec == 'M' || plec == 'K')
    {
        dodaj.plec = plec;
    }
    else
    {
        wyswietlanie("Niepoprawna plec. Wprowadz dane jeszcze raz.", 15);
        Sleep(750);
        cout << endl;
        wprowadz_plec(dodaj);
    }
}

void wprowadz_wiek(osoba &dodaj)
{   setcolor(15);
    string  wiek;
    int a;
    wyswietlanie("Wiek: ", 15);
    cin >> wiek;
    if(isnum(wiek)){ a = conv(wiek);
        if(a>0 && a<300){
            dodaj.wiek = a;
        }
        else{wyswietlanie("Niepoprawny wiek. Wprowadz poprawne dane.", 10);
        Sleep(750);
        cout << endl;
        wprowadz_wiek(dodaj);}}

    else{wyswietlanie("To nie jest liczba. Wprowadz poprawne dane.", 10);
    Sleep(750);
    cout << endl;
    wprowadz_wiek(dodaj);}
    }
bool czyplecoks(osoba &dodaj, string pesel)
{
    if((dodaj.plec=='K'&&pesel[9]=='2')||(dodaj.plec=='K'&&pesel[9]=='4')||(dodaj.plec=='K'&&pesel[9]=='6')||(dodaj.plec=='K'&&pesel[9]=='8')||(dodaj.plec=='K'&&pesel[9]=='0'))
        {
            return true;
        }
    else
        {
            if((dodaj.plec=='M'&&pesel[9]=='1')||(dodaj.plec=='M'&&pesel[9]=='3')||(dodaj.plec=='M'&&pesel[9]=='5')||(dodaj.plec=='M'&&pesel[9]=='7')||(dodaj.plec=='M'&&pesel[9]=='9'))
                {
                    return true;
                }
            else
                {
                    return false;
                }
        }
}
int rokurodzin(string s)
{   if(s[2]=='0'||s[2]=='1')
    {
        return(s[0]-48)*10+s[1]-48+1900;
    }
    else
    {
            if(s[2]=='2'||s[2]=='3')
            {
                return(s[0]-48)*10+s[1]-48+2000;
            }
            else
            {
                return(s[0]-48)*10+s[1]-48+1800;
            }
    }
}
int miesiacurodzin(string s)
{
    if(s[2]=='0'||s[2]=='1')
    {
        return(s[2]-48)*10+s[3]-48;
    }
    else
    {
            if(s[2]=='2'||s[2]=='3')
            {
                return(s[2]-50)*10+s[3]-48;
            }
            else
            {
                return(s[2]-56)*10+s[3]-48;
            }
    }
}
int dzienurodzin(string s)
{
    return(s[4]-48)*10+s[5]-48;
}
bool czywiekoks (osoba &dodaj, string p)
{
    SYSTEMTIME st;
    GetSystemTime(&st);
    if(rokurodzin(p)+dodaj.wiek==st.wYear)
    {
        return true;
    }
    else
    {
        if(rokurodzin(p)+dodaj.wiek==st.wYear-1)
            {
                if(miesiacurodzin(p)>st.wMonth)
                {
                    return true;
                }
                else
                {
                    if(miesiacurodzin(p)==st.wMonth)
                    {
                        if(dzienurodzin(p)>st.wDay)
                        {
                            return true;
                        }
                        else
                        {
                            return false;
                        }
                    }
                    else
                    {
                        return false;
                    }
                }
        }
        else
        {
            return false;
        }
    }
}
void wprowadz_pesel(osoba &dodaj)
{   setcolor(15);
    string pesel;
    wyswietlanie("Pesel: ", 15);
    cin>> pesel;
    if(czypeselpoprawnyostateczniebool(pesel))

        {
            if(czyplecoks(dodaj,pesel))
            {
                if(czywiekoks(dodaj,pesel))
                {
                    dodaj.pesel = pesel;
                }
                else
                {
                    wyswietlanie("Wprowadzony wiek nie zgadza sie z peselem. Wprowadz poprawne dane \n", 15);
                    Sleep(750);
                    wprowadz_pesel(dodaj);
                }
            }
            else
            {
                wyswietlanie("Cyfra plci jest bledna. Wprowadz poprawne dane \n", 15);
                Sleep(750);
                wprowadz_pesel(dodaj);
            }

        }
    else{sprawdzampeselkomunikat(pesel); czypeselpoprawnyostateczniekomunikat(pesel);
    Sleep(1000);
    cout << endl;
    wprowadz_pesel(dodaj);}
}

void wprowadz(int &liczba_osob, vector<osoba> &ludzie){
    setcolor(15);
    system("cls");
    wyswietlanie("2. Wprowadzanie \n \n", 10);

    string napis = "Wczytuje wprowadzanie, prosze czekac...";

    wyswietlanie(napis, 15);
    Sleep(750);

    system("cls");
    wyswietlanie("2. Wprowadzanie danych \n \n", 10);
    wyswietlanie("Wprowadz dane osoby: \n", 15);

    Sleep(200);
    osoba dodaj;

    wprowadz_imie(dodaj);
    wprowadz_nazwisko(dodaj);
    wprowadz_miasto(dodaj);
    wprowadz_ulice(dodaj);
    wprowadz_nr(dodaj);
    wprowadz_plec(dodaj);
    wprowadz_wiek(dodaj);
    wprowadz_pesel(dodaj);

    wyswietlanie("Dane wprowadzone prawidlowo.", 10);
    Sleep(1000);
    system("cls");
    wyswietlanie("Dodaje osobe: ", 10); Sleep(1000);

    wyswietlanie(dodaj.imie, 10); cout << " ";
    wyswietlanie(dodaj.nazwisko, 10);cout << " ";
    wyswietlanie(dodaj.miasto, 10);cout << " ";
    wyswietlanie(dodaj.ulica, 10);cout << " ";
    cout << dodaj.nr_ul;cout << " ";
    cout << dodaj.plec;cout << " ";
    cout << dodaj.wiek;cout << " ";
    wyswietlanie(dodaj.pesel, 10);

    ludzie.push_back(dodaj);
    liczba_osob++;

    Sleep(2000);
    wyswietlanie("\n Dodawanie powiodlo sie", 10);
    Sleep(200);
    wyswietlanie("\n Aby wrocic do MENU, nacisnij dowolny przycisk", 10);
    getch();
    menu(liczba_osob, ludzie);
    }

void edytuj_imie(int &liczba_osob, vector <osoba> &ludzie, string imie, int licznik)
{   setcolor(15);
    string wybor2str;
    int wybor2;
    int wybor3;
    int wybor4;
    string zmiana;
    string nowe;
    int noweint;
    char nowechar;
    licznik = 0;

    for(int i=0; i<liczba_osob; i++){
    if(ludzie[i].imie == imie)
    {licznik++;}}

    wyswietlanie("\nWpisz numer z listy osoby, ktora chcesz edytowac.\n",10);
                    cin >> wybor2str;
                    if(isnum(wybor2str)){
                            wybor2 = conv(wybor2str);}

                    else{wyswietlanie("\nTo nie jest liczba, wracam do MENU.", 15); Sleep(1000); menu(liczba_osob, ludzie);}

                    if(wybor2 <1 || wybor2>licznik) {
                            wyswietlanie("\nNiepoprawna liczba. Wracam do MENU.", 15); Sleep(1000); menu(liczba_osob, ludzie);}

    licznik = 0;

    wyswietlanie("\nCo chcesz edytowac?", 10);
    wyswietlanie("\n1. Imie", 10);
    wyswietlanie("\n2. Nazwisko", 10);
    wyswietlanie("\n3. Miasto", 10);
    wyswietlanie("\n4. Ulica", 10);
    wyswietlanie("\n5. Numer domu", 10);
    wyswietlanie("\n6. Plec", 10);
    wyswietlanie("\n7. Wiek", 10);
    wyswietlanie("\n8. Pesel\n\n", 10);
    wybor3=getch();


    switch(wybor3){
case '1': {
    Sleep(200);
    wyswietlanie("\nNowe imie: ", 15);
    cin >> nowe;

        if(sprawdz_imie(nowe))
        {
            for(int i=0; i<liczba_osob; i++)
                        {
                            if(ludzie[i].imie == imie)
                            {
                            ++licznik;
                            if(licznik==wybor2)
                                {
                                    ludzie[i].imie = nowe;
                                    break;
                                }
                            }
        }

        }
        else {wyswietlanie("Niepoprawne imie. Wprowadz dane jeszcze raz.", 15);
        Sleep(750);
        cout << endl;
        edytuj_imie(liczba_osob, ludzie, imie, licznik);}

    break;
    }
case '2':
    Sleep(200);
    wyswietlanie("\nNowe nazwisko: ", 15);
    cin >> nowe;

        if(sprawdz_imie(nowe))
        {
            for(int i=0; i<liczba_osob; i++)
                        {
                            if(ludzie[i].imie == imie)
                            {
                            ++licznik;
                            if(licznik==wybor2)
                                {
                                    ludzie[i].nazwisko = nowe;
                                    break;
                                }
                            }
        }

        }
        else {wyswietlanie("Niepoprawne nazwisko. Wprowadz dane jeszcze raz.", 15);
        Sleep(750);
        cout << endl;
       edytuj_imie(liczba_osob, ludzie, imie, licznik);}
    break;
case '3':
    Sleep(200);
    wyswietlanie("\nNowe miasto: ", 15);
    cin >> nowe;

        if(sprawdz_imie(nowe))
        {
            for(int i=0; i<liczba_osob; i++)
                        {
                            if(ludzie[i].imie == imie)
                            {
                            ++licznik;
                            if(licznik==wybor2)
                                {
                                    ludzie[i].miasto = nowe;
                                    break;
                                }
                            }
        }

        }
        else {wyswietlanie("Niepoprawne miasto. Wprowadz dane jeszcze raz.", 15);
        Sleep(750);
        cout << endl;
        edytuj_imie(liczba_osob, ludzie, imie, licznik);}
    break;

case '4':Sleep(200);
    wyswietlanie("\nNowa ulica: ", 15);
    cin >> nowe;

        if(sprawdz_imie(nowe))
        {
            for(int i=0; i<liczba_osob; i++)
                        {
                            if(ludzie[i].imie == imie)
                            {
                            ++licznik;
                            if(licznik==wybor2)
                                {
                                    ludzie[i].ulica = nowe;
                                    break;
                                }
                            }
        }

        }
        else {wyswietlanie("Niepoprawna ulica. Wprowadz dane jeszcze raz.", 15);
        Sleep(750);
        cout << endl;
        edytuj_imie(liczba_osob, ludzie, imie, licznik);}
    break;

case '5':
    {
    Sleep(200);
    wyswietlanie("\nNowy numer domu: ", 15);
    cin >> nowe;

        if(isnum(nowe)){ noweint = conv(nowe);
        if(noweint>0 && noweint<99999)
        {
            for(int i=0; i<liczba_osob; i++)
                        {
                            if(ludzie[i].imie == imie)
                            {
                            ++licznik;
                            if(licznik==wybor2)
                                {
                                    ludzie[i].nr_ul = noweint;
                                    break;
                                }
                            }
        }

        }
        else {wyswietlanie("Niepoprawny numer domu. Wprowadz dane jeszcze raz.", 10);
        Sleep(750);
        cout << endl;
        edytuj_imie(liczba_osob, ludzie, imie, licznik);}
        }
        else {wyswietlanie("To nie jest liczba, wprowadz dane jeszcze raz.\n", 10);
        edytuj_imie(liczba_osob, ludzie, imie, licznik);}
    break;
    }

case '6':  {
    Sleep(200);
    wyswietlanie("\nNowa plec: ", 15);
    cin >> nowechar;

            if(nowechar == 'k') {nowechar = 'K';}
            if(nowechar == 'm') {nowechar = 'M';}
            if(nowechar == 'M' || nowechar == 'K')
    {
        {
            for(int i=0; i<liczba_osob; i++)
                        {
                            if(ludzie[i].imie == imie)
                            {
                            ++licznik;
                            if(licznik==wybor2)
                                {
                                    ludzie[i].plec = nowechar;
                                    break;
                                }
                            }
        }

        }
    }
        else {wyswietlanie("Niepoprawna plec. Wprowadz dane jeszcze raz.", 10);
        Sleep(750);
        cout << endl;
        edytuj_imie(liczba_osob, ludzie, imie, licznik);}


    break;
    }
case '7':
    {
    Sleep(200);
    wyswietlanie("\nNowy wiek: ", 15);
    cin >> nowe;

        if(isnum(nowe)){ noweint = conv(nowe);
        if(noweint>0 && noweint<999)
        {
            for(int i=0; i<liczba_osob; i++)
                        {
                            if(ludzie[i].imie == imie)
                            {
                            ++licznik;
                            if(licznik==wybor2)
                                {
                                    ludzie[i].nr_ul = noweint;
                                    break;
                                }
                            }
        }

        }
        else {wyswietlanie("Niepoprawny wiek. Wprowadz dane jeszcze raz.", 10);
        Sleep(750);
        cout << endl;
        edytuj_imie(liczba_osob, ludzie, imie, licznik);}
        }
        else {wyswietlanie("To nie jest liczba, wprowadz dane jeszcze raz.\n", 10);
        edytuj_imie(liczba_osob, ludzie, imie, licznik);}
    break;
    }

case '8':  {
    Sleep(200);
    wyswietlanie("\nNowy pesel: ", 15);
    cin >> nowe;

             if(czypeselpoprawnyostateczniebool(nowe))
    {
        {
            for(int i=0; i<liczba_osob; i++)
                        {
                            if(ludzie[i].imie == imie)
                            {
                            ++licznik;
                            if(licznik==wybor2)
                                {
                                    ludzie[i].pesel = nowe;
                                    break;
                                }
                            }
        }

        }
    }
        else {wyswietlanie("Niepoprawny pesel. Wprowadz dane jeszcze raz.", 10);
        Sleep(750);
        cout << endl;
        edytuj_imie(liczba_osob, ludzie, imie, licznik);}


    break;}

default: wyswietlanie("\nNie ma takiej opcji! Dokonaj odpowiedniego wyboru.", 10); edytuj_imie(liczba_osob, ludzie, imie, licznik); break;
}


    Sleep(500);
    wyswietlanie("\n\nPoprawno zedytowano.",10);
        wyswietlanie("\n\n0 - Powrot do MENU",10);
         wyswietlanie("\n1 - Edytuj ponownie",10);
         wybor4 = getch();
    Sleep(500);

    switch(wybor4){
    case '0': menu(liczba_osob, ludzie); break;
    case '1':  { cout << endl; edytuj_imie(liczba_osob, ludzie, imie, licznik); break;}
    default: {wyswietlanie("\nNie ma takiej opcji, wracam do MENU.", 10);
    menu(liczba_osob, ludzie);  break;}
    }
}

void edytuj_nazwisko(int &liczba_osob, vector <osoba> &ludzie, string imie)
{   setcolor(15);
    string wybor2str;
    int wybor2;
    int wybor3;
    int wybor4;
    string zmiana;
    string nowe;
    int licznik=0;
    int noweint;
    char nowechar;

    for(int i=0; i<liczba_osob; i++){
    if(ludzie[i].nazwisko == imie)
    {licznik++;}}

    wyswietlanie("\nWpisz numer z listy osoby, ktora chcesz edytowac.\n",10);
                    cin >> wybor2str;
                    if(isnum(wybor2str)){
                            wybor2 = conv(wybor2str);}

                    else{wyswietlanie("\nTo nie jest liczba, wracam do MENU.", 15); Sleep(1000); menu(liczba_osob, ludzie);}

                    if(wybor2 <1 || wybor2>licznik) {
                            wyswietlanie("\nNiepoprawna liczba. Wracam do MENU.", 15); Sleep(1000); menu(liczba_osob, ludzie);}

    licznik = 0;
    wyswietlanie("\nCo chcesz edytowac?", 10);
    wyswietlanie("\n1. Imie", 10);
    wyswietlanie("\n2. Nazwisko", 10);
    wyswietlanie("\n3. Miasto", 10);
    wyswietlanie("\n4. Ulica", 10);
    wyswietlanie("\n5. Numer domu", 10);
    wyswietlanie("\n6. Plec", 10);
    wyswietlanie("\n7. Wiek", 10);
    wyswietlanie("\n8. Pesel\n\n", 10);
    wybor3=getch();

    switch(wybor3){
case '1': {
    Sleep(200);
    wyswietlanie("\nNowe imie: ", 15);
    cin >> nowe;

        if(sprawdz_imie(nowe))
        {
            for(int i=0; i<liczba_osob; i++)
                        {
                            if(ludzie[i].nazwisko == imie)
                            {
                            ++licznik;
                            if(licznik==wybor2)
                                {
                                    ludzie[i].imie = nowe;
                                    break;
                                }
                            }
        }

        }
        else {wyswietlanie("Niepoprawne imie. Wprowadz dane jeszcze raz.", 15);
        Sleep(750);
        cout << endl;
        edytuj_nazwisko(liczba_osob, ludzie, imie);}

    break;
    }
case '2':
    Sleep(200);
    wyswietlanie("\nNowe nazwisko: ", 15);
    cin >> nowe;

        if(sprawdz_imie(nowe))
        {
            for(int i=0; i<liczba_osob; i++)
                        {
                            if(ludzie[i].nazwisko == imie)
                            {
                            ++licznik;
                            if(licznik==wybor2)
                                {
                                    ludzie[i].nazwisko = nowe;
                                    break;
                                }
                            }
        }

        }
        else {wyswietlanie("Niepoprawne nazwisko. Wprowadz dane jeszcze raz.", 15);
        Sleep(750);
        cout << endl;
       edytuj_nazwisko(liczba_osob, ludzie, imie);}
    break;
case '3':
    Sleep(200);
    wyswietlanie("\nNowe miasto: ", 15);
    cin >> nowe;

        if(sprawdz_imie(nowe))
        {
            for(int i=0; i<liczba_osob; i++)
                        {
                            if(ludzie[i].nazwisko == imie)
                            {
                            ++licznik;
                            if(licznik==wybor2)
                                {
                                    ludzie[i].miasto = nowe;
                                    break;
                                }
                            }
        }

        }
        else {wyswietlanie("Niepoprawne miasto. Wprowadz dane jeszcze raz.", 15);
        Sleep(750);
        cout << endl;
        edytuj_nazwisko(liczba_osob, ludzie, imie);}
    break;

case '4':Sleep(200);
    wyswietlanie("\nNowa ulica: ", 15);
    cin >> nowe;

        if(sprawdz_imie(nowe))
        {
            for(int i=0; i<liczba_osob; i++)
                        {
                            if(ludzie[i].nazwisko == imie)
                            {
                            ++licznik;
                            if(licznik==wybor2)
                                {
                                    ludzie[i].ulica = nowe;
                                    break;
                                }
                            }
        }

        }
        else {wyswietlanie("Niepoprawna ulica. Wprowadz dane jeszcze raz.", 15);
        Sleep(750);
        cout << endl;
        edytuj_nazwisko(liczba_osob, ludzie, imie);}
    break;

case '5':
    {
    Sleep(200);
    wyswietlanie("\nNowy numer domu: ", 15);
    cin >> nowe;

        if(isnum(nowe)){ noweint = conv(nowe);
        if(noweint>0 && noweint<99999)
        {
            for(int i=0; i<liczba_osob; i++)
                        {
                            if(ludzie[i].nazwisko == imie)
                            {
                            ++licznik;
                            if(licznik==wybor2)
                                {
                                    ludzie[i].nr_ul = noweint;
                                    break;
                                }
                            }
        }

        }
        else {wyswietlanie("Niepoprawny numer domu. Wprowadz dane jeszcze raz.", 10);
        Sleep(750);
        cout << endl;
        edytuj_nazwisko(liczba_osob, ludzie, imie);}
        }
        else {wyswietlanie("To nie jest liczba, wprowadz dane jeszcze raz.\n", 10);
        edytuj_nazwisko(liczba_osob, ludzie, imie);}
    break;
    }

case '6':  {
    Sleep(200);
    wyswietlanie("\nNowa plec: ", 15);
    cin >> nowechar;

            if(nowechar == 'k') {nowechar = 'K';}
            if(nowechar == 'm') {nowechar = 'M';}
            if(nowechar == 'M' || nowechar == 'K')
    {
        {
            for(int i=0; i<liczba_osob; i++)
                        {
                            if(ludzie[i].nazwisko == imie)
                            {
                            ++licznik;
                            if(licznik==wybor2)
                                {
                                    ludzie[i].plec = nowechar;
                                    break;
                                }
                            }
        }

        }
    }
        else {wyswietlanie("Niepoprawna plec. Wprowadz dane jeszcze raz.", 10);
        Sleep(750);
        cout << endl;
        edytuj_nazwisko(liczba_osob, ludzie, imie);}


    break;
    }
case '7':
    {
    Sleep(200);
    wyswietlanie("\nNowy wiek: ", 15);
    cin >> nowe;

        if(isnum(nowe)){ noweint = conv(nowe);
        if(noweint>0 && noweint<999)
        {
            for(int i=0; i<liczba_osob; i++)
                        {
                            if(ludzie[i].nazwisko == imie)
                            {
                            ++licznik;
                            if(licznik==wybor2)
                                {
                                    ludzie[i].nr_ul = noweint;
                                    break;
                                }
                            }
        }

        }
        else {wyswietlanie("Niepoprawny wiek. Wprowadz dane jeszcze raz.", 10);
        Sleep(750);
        cout << endl;
        edytuj_nazwisko(liczba_osob, ludzie, imie);}
        }
        else {wyswietlanie("To nie jest liczba, wprowadz dane jeszcze raz.\n", 10);
        edytuj_nazwisko(liczba_osob, ludzie, imie);}
    break;
    }

case '8':  {
    Sleep(200);
    wyswietlanie("\nNowy pesel: ", 15);
    cin >> nowe;

             if(czypeselpoprawnyostateczniebool(nowe))
    {
        {
            for(int i=0; i<liczba_osob; i++)
                        {
                            if(ludzie[i].nazwisko == imie)
                            {
                            ++licznik;
                            if(licznik==wybor2)
                                {
                                    ludzie[i].pesel = nowe;
                                    break;
                                }
                            }
        }

        }
    }
        else {wyswietlanie("Niepoprawny pesel. Wprowadz dane jeszcze raz.", 10);
        Sleep(750);
        cout << endl;
        edytuj_nazwisko(liczba_osob, ludzie, imie);}


    break;}
default: wyswietlanie("\nNie ma takiej opcji! Dokonaj odpowiedniego wyboru.", 10); edytuj_nazwisko(liczba_osob, ludzie, imie); break;
}

    Sleep(500);
    wyswietlanie("\n\nPoprawno zedytowano.",10);
        wyswietlanie("\n\n0 - Powrot do MENU",10);
         wyswietlanie("\n1 - Edytuj ponownie",10);
         wybor4 = getch();
    Sleep(500);

    switch(wybor4){
    case '0': menu(liczba_osob, ludzie); break;
    case '1':  { cout << endl; edytuj_nazwisko(liczba_osob, ludzie, imie); break;}
    default: {wyswietlanie("\nNie ma takiej opcji, wracam do MENU.", 10);
    menu(liczba_osob, ludzie);  break;}
    }
}

void edytuj_miasto(int &liczba_osob, vector <osoba> &ludzie, string imie)
{   setcolor(15);
    string wybor2str;
    int wybor2;
    int wybor3;
    int wybor4;
    string zmiana;
    string nowe;
    int licznik=0;
    int noweint;
    char nowechar;

    for(int i=0; i<liczba_osob; i++){
    if(ludzie[i].miasto == imie)
    {licznik++;}}

    wyswietlanie("\nWpisz numer z listy osoby, ktora chcesz edytowac.\n",10);
                    cin >> wybor2str;
                    if(isnum(wybor2str)){
                            wybor2 = conv(wybor2str);}

                    else{wyswietlanie("\nTo nie jest liczba, wracam do MENU.", 15); Sleep(1000); menu(liczba_osob, ludzie);}

                    if(wybor2 <1 || wybor2>licznik) {
                            wyswietlanie("\nNiepoprawna liczba. Wracam do MENU.", 15); Sleep(1000); menu(liczba_osob, ludzie);}

    licznik = 0;
    wyswietlanie("\nCo chcesz edytowac?", 10);
    wyswietlanie("\n1. Imie", 10);
    wyswietlanie("\n2. Nazwisko", 10);
    wyswietlanie("\n3. Miasto", 10);
    wyswietlanie("\n4. Ulica", 10);
    wyswietlanie("\n5. Numer domu", 10);
    wyswietlanie("\n6. Plec", 10);
    wyswietlanie("\n7. Wiek", 10);
    wyswietlanie("\n8. Pesel\n\n", 10);
    wybor3=getch();

    switch(wybor3){
case '1': {
    Sleep(200);
    wyswietlanie("\nNowe imie: ", 15);
    cin >> nowe;

        if(sprawdz_imie(nowe))
        {
            for(int i=0; i<liczba_osob; i++)
                        {
                            if(ludzie[i].miasto == imie)
                            {
                            ++licznik;
                            if(licznik==wybor2)
                                {
                                    ludzie[i].imie = nowe;
                                    break;
                                }
                            }
        }

        }
        else {wyswietlanie("Niepoprawne imie. Wprowadz dane jeszcze raz.", 15);
        Sleep(750);
        cout << endl;
        edytuj_miasto(liczba_osob, ludzie, imie);}

    break;
    }
case '2':{
    Sleep(200);
    wyswietlanie("\nNowe nazwisko: ", 15);
    cin >> nowe;
        if(sprawdz_imie(nowe))
        {
            for(int i=0; i<liczba_osob; i++)
                        {
                            if(ludzie[i].miasto == imie)
                            {
                            ++licznik;
                            if(licznik==wybor2)
                                {
                                    ludzie[i].nazwisko = nowe;
                                    break;
                                }
                            }
        }

        }
        else {wyswietlanie("Niepoprawne nazwisko. Wprowadz dane jeszcze raz.", 15);
        Sleep(750);
        cout << endl;
       edytuj_miasto(liczba_osob, ludzie, imie);}
    break;}
case '3':{
    Sleep(200);
    wyswietlanie("\nNowe miasto: ", 15);
    cin >> nowe;

        if(sprawdz_imie(nowe))
        {
            for(int i=0; i<liczba_osob; i++)
                        {
                            if(ludzie[i].miasto == imie)
                            {
                            ++licznik;
                            if(licznik==wybor2)
                                {
                                    ludzie[i].miasto = nowe;
                                    break;
                                }
                            }
        }

        }
        else {wyswietlanie("Niepoprawne miasto. Wprowadz dane jeszcze raz.", 15);
        Sleep(750);
        cout << endl;
        edytuj_miasto(liczba_osob, ludzie, imie);}
    break;}
case '4':{
        Sleep(200);
    wyswietlanie("\nNowa ulica: ", 15);
    cin >> nowe;

        if(sprawdz_imie(nowe))
        {
            for(int i=0; i<liczba_osob; i++)
                        {
                            if(ludzie[i].miasto == imie)
                            {
                            ++licznik;
                            if(licznik==wybor2)
                                {
                                    ludzie[i].ulica = nowe;
                                    break;
                                }
                            }
        }

        }
        else {wyswietlanie("Niepoprawna ulica. Wprowadz dane jeszcze raz.", 15);
        Sleep(750);
        cout << endl;
        edytuj_miasto(liczba_osob, ludzie, imie);}
    break;}

case '5':
    {
    Sleep(200);
    wyswietlanie("\nNowy numer domu: ", 15);
    cin >> nowe;

        if(isnum(nowe)){ noweint = conv(nowe);
        if(noweint>0 && noweint<99999)
        {
            for(int i=0; i<liczba_osob; i++)
                        {
                            if(ludzie[i].miasto == imie)
                            {
                            ++licznik;
                            if(licznik==wybor2)
                                {
                                    ludzie[i].nr_ul = noweint;
                                    break;
                                }
                            }
        }

        }
        else {wyswietlanie("Niepoprawny numer domu. Wprowadz dane jeszcze raz.", 10);
        Sleep(750);
        cout << endl;
        edytuj_miasto(liczba_osob, ludzie, imie);}
        }
        else {wyswietlanie("To nie jest liczba, wprowadz dane jeszcze raz.\n", 10);
        edytuj_miasto(liczba_osob, ludzie, imie);}
    break;
    }

case '6':  {
    Sleep(200);
    wyswietlanie("\nNowa plec: ", 15);
    cin >> nowechar;

            if(nowechar == 'k') {nowechar = 'K';}
            if(nowechar == 'm') {nowechar = 'M';}
            if(nowechar == 'M' || nowechar == 'K')
    {
        {
            for(int i=0; i<liczba_osob; i++)
                        {
                            if(ludzie[i].miasto == imie)
                            {
                            ++licznik;
                            if(licznik==wybor2)
                                {
                                    ludzie[i].plec = nowechar;
                                    break;
                                }
                            }
        }

        }
    }
        else {wyswietlanie("Niepoprawna plec. Wprowadz dane jeszcze raz.", 10);
        Sleep(750);
        cout << endl;
        edytuj_miasto(liczba_osob, ludzie, imie);}


    break;
    }
case '7':
    {
    Sleep(200);
    wyswietlanie("\nNowy wiek: ", 15);
    cin >> nowe;

        if(isnum(nowe)){ noweint = conv(nowe);
        if(noweint>0 && noweint<999)
        {
            for(int i=0; i<liczba_osob; i++)
                        {
                            if(ludzie[i].miasto == imie)
                            {
                            ++licznik;
                            if(licznik==wybor2)
                                {
                                    ludzie[i].nr_ul = noweint;
                                    break;
                                }
                            }
        }

        }
        else {wyswietlanie("Niepoprawny wiek. Wprowadz dane jeszcze raz.", 10);
        Sleep(750);
        cout << endl;
        edytuj_miasto(liczba_osob, ludzie, imie);}
        }
        else {wyswietlanie("To nie jest liczba, wprowadz dane jeszcze raz.\n", 10);
        edytuj_miasto(liczba_osob, ludzie, imie);}
    break;
    }

case '8':  {
    Sleep(200);
    wyswietlanie("\nNowy pesel: ", 15);
    cin >> nowe;

             if(czypeselpoprawnyostateczniebool(nowe))
    {
        {
            for(int i=0; i<liczba_osob; i++)
                        {
                            if(ludzie[i].miasto == imie)
                            {
                            ++licznik;
                            if(licznik==wybor2)
                                {
                                    ludzie[i].pesel = nowe;
                                    break;
                                }
                            }
        }

        }
    }
        else {wyswietlanie("Niepoprawny pesel. Wprowadz dane jeszcze raz.", 10);
        Sleep(750);
        cout << endl;
        edytuj_miasto(liczba_osob, ludzie, imie);}


    break;}
    default: wyswietlanie("\nNie ma takiej opcji! Dokonaj odpowiedniego wyboru.", 10); edytuj_miasto(liczba_osob, ludzie, imie); break;

}

    Sleep(500);
    wyswietlanie("\n\nPoprawno zedytowano.",10);
        wyswietlanie("\n\n0 - Powrot do MENU",10);
         wyswietlanie("\n1 - Edytuj ponownie",10);
         wybor4 = getch();
    Sleep(500);

    switch(wybor4){
    case '0': menu(liczba_osob, ludzie); break;
    case '1':  { cout << endl; edytuj_miasto(liczba_osob, ludzie, imie); break;}
    default: {wyswietlanie("\nNie ma takiej opcji, wracam do MENU.", 10);
    menu(liczba_osob, ludzie);  break;}
    }
}

void edytuj_ulica(int &liczba_osob, vector <osoba> &ludzie, string imie)
{   setcolor(15);
    string wybor2str;
    int wybor2;
    int wybor3;
    int wybor4;
    string zmiana;
    string nowe;
    int licznik=0;
    int noweint;
    char nowechar;

   for(int i=0; i<liczba_osob; i++){
    if(ludzie[i].ulica == imie)
    {licznik++;}}

    wyswietlanie("\nWpisz numer z listy osoby, ktora chcesz edytowac.\n",10);
                    cin >> wybor2str;
                    if(isnum(wybor2str)){
                            wybor2 = conv(wybor2str);}

                    else{wyswietlanie("\nTo nie jest liczba, wracam do MENU.", 15); Sleep(1000); menu(liczba_osob, ludzie);}

                    if(wybor2 <1 || wybor2>licznik) {
                            wyswietlanie("\nNiepoprawna liczba. Wracam do MENU.", 15); Sleep(1000); menu(liczba_osob, ludzie);}

    licznik = 0;

    wyswietlanie("\nCo chcesz edytowac?", 10);
    wyswietlanie("\n1. Imie", 10);
    wyswietlanie("\n2. Nazwisko", 10);
    wyswietlanie("\n3. Miasto", 10);
    wyswietlanie("\n4. Ulica", 10);
    wyswietlanie("\n5. Numer domu", 10);
    wyswietlanie("\n6. Plec", 10);
    wyswietlanie("\n7. Wiek", 10);
    wyswietlanie("\n8. Pesel\n\n", 10);
    wybor3=getch();

    switch(wybor3){
case '1': {
    Sleep(200);
    wyswietlanie("\nNowe imie: ", 15);
    cin >> nowe;

        if(sprawdz_imie(nowe))
        {
            for(int i=0; i<liczba_osob; i++)
                        {
                            if(ludzie[i].ulica == imie)
                            {
                            ++licznik;
                            if(licznik==wybor2)
                                {
                                    ludzie[i].imie = nowe;
                                    break;
                                }
                            }
        }

        }
        else {wyswietlanie("Niepoprawne imie. Wprowadz dane jeszcze raz.", 15);
        Sleep(750);
        cout << endl;
        edytuj_ulica(liczba_osob, ludzie, imie);}

    break;
    }
case '2':{
    Sleep(200);
    wyswietlanie("\nNowe nazwisko: ", 15);
    cin >> nowe;
        if(sprawdz_imie(nowe))
        {
            for(int i=0; i<liczba_osob; i++)
                        {
                            if(ludzie[i].ulica == imie)
                            {
                            ++licznik;
                            if(licznik==wybor2)
                                {
                                    ludzie[i].nazwisko = nowe;
                                    break;
                                }
                            }
        }

        }
        else {wyswietlanie("Niepoprawne nazwisko. Wprowadz dane jeszcze raz.", 15);
        Sleep(750);
        cout << endl;
       edytuj_ulica(liczba_osob, ludzie, imie);}
    break;}
case '3':{
    Sleep(200);
    wyswietlanie("\nNowe miasto: ", 15);
    cin >> nowe;

        if(sprawdz_imie(nowe))
        {
            for(int i=0; i<liczba_osob; i++)
                        {
                            if(ludzie[i].ulica == imie)
                            {
                            ++licznik;
                            if(licznik==wybor2)
                                {
                                    ludzie[i].miasto = nowe;
                                    break;
                                }
                            }
        }

        }
        else {wyswietlanie("Niepoprawne miasto. Wprowadz dane jeszcze raz.", 15);
        Sleep(750);
        cout << endl;
        edytuj_ulica(liczba_osob, ludzie, imie);}
    break;}
case '4':{
        Sleep(200);
    wyswietlanie("\nNowa ulica: ", 15);
    cin >> nowe;

        if(sprawdz_imie(nowe))
        {
            for(int i=0; i<liczba_osob; i++)
                        {
                            if(ludzie[i].ulica == imie)
                            {
                            ++licznik;
                            if(licznik==wybor2)
                                {
                                    ludzie[i].ulica = nowe;
                                    break;
                                }
                            }
        }

        }
        else {wyswietlanie("Niepoprawna ulica. Wprowadz dane jeszcze raz.", 15);
        Sleep(750);
        cout << endl;
        edytuj_ulica(liczba_osob, ludzie, imie);}
    break;}

case '5':
    {
    Sleep(200);
    wyswietlanie("\nNowy numer domu: ", 15);
    cin >> nowe;

        if(isnum(nowe)){ noweint = conv(nowe);
        if(noweint>0 && noweint<99999)
        {
            for(int i=0; i<liczba_osob; i++)
                        {
                            if(ludzie[i].ulica == imie)
                            {
                            ++licznik;
                            if(licznik==wybor2)
                                {
                                    ludzie[i].nr_ul = noweint;
                                    break;
                                }
                            }
        }

        }
        else {wyswietlanie("Niepoprawny numer domu. Wprowadz dane jeszcze raz.", 10);
        Sleep(750);
        cout << endl;
        edytuj_ulica(liczba_osob, ludzie, imie);}
        }
        else {wyswietlanie("To nie jest liczba, wprowadz dane jeszcze raz.\n", 10);
        edytuj_ulica(liczba_osob, ludzie, imie);}
    break;
    }

case '6':  {
    Sleep(200);
    wyswietlanie("\nNowa plec: ", 15);
    cin >> nowechar;

            if(nowechar == 'k') {nowechar = 'K';}
            if(nowechar == 'm') {nowechar = 'M';}
            if(nowechar == 'M' || nowechar == 'K')
    {
        {
            for(int i=0; i<liczba_osob; i++)
                        {
                            if(ludzie[i].ulica == imie)
                            {
                            ++licznik;
                            if(licznik==wybor2)
                                {
                                    ludzie[i].plec = nowechar;
                                    break;
                                }
                            }
        }

        }
    }
        else {wyswietlanie("Niepoprawna plec. Wprowadz dane jeszcze raz.", 10);
        Sleep(750);
        cout << endl;
        edytuj_ulica(liczba_osob, ludzie, imie);}


    break;
    }
case '7':
    {
    Sleep(200);
    wyswietlanie("\nNowy wiek: ", 15);
    cin >> nowe;

        if(isnum(nowe)){ noweint = conv(nowe);
        if(noweint>0 && noweint<999)
        {
            for(int i=0; i<liczba_osob; i++)
                        {
                            if(ludzie[i].ulica == imie)
                            {
                            ++licznik;
                            if(licznik==wybor2)
                                {
                                    ludzie[i].nr_ul = noweint;
                                    break;
                                }
                            }
        }

        }
        else {wyswietlanie("Niepoprawny wiek. Wprowadz dane jeszcze raz.", 10);
        Sleep(750);
        cout << endl;
        edytuj_ulica(liczba_osob, ludzie, imie);}
        }
        else {wyswietlanie("To nie jest liczba, wprowadz dane jeszcze raz.\n", 10);
        edytuj_ulica(liczba_osob, ludzie, imie);}
    break;
    }

case '8':  {
    Sleep(200);
    wyswietlanie("\nNowy pesel: ", 15);
    cin >> nowe;

             if(czypeselpoprawnyostateczniebool(nowe))
    {
        {
            for(int i=0; i<liczba_osob; i++)
                        {
                            if(ludzie[i].ulica == imie)
                            {
                            ++licznik;
                            if(licznik==wybor2)
                                {
                                    ludzie[i].pesel = nowe;
                                    break;
                                }
                            }
        }

        }
    }
        else {wyswietlanie("Niepoprawny pesel. Wprowadz dane jeszcze raz.", 10);
        Sleep(750);
        cout << endl;
        edytuj_ulica(liczba_osob, ludzie, imie);}


    break;}
    default: wyswietlanie("\nNie ma takiej opcji! Dokonaj odpowiedniego wyboru.", 10); edytuj_ulica(liczba_osob, ludzie, imie); break;

}

    Sleep(500);
    wyswietlanie("\n\nPoprawno zedytowano.",10);
        wyswietlanie("\n\n0 - Powrot do MENU",10);
         wyswietlanie("\n1 - Edytuj ponownie",10);
         wybor4 = getch();
    Sleep(500);

    switch(wybor4){
    case '0': menu(liczba_osob, ludzie); break;
    case '1':  { cout << endl; edytuj_ulica(liczba_osob, ludzie, imie); break;}
    default: {wyswietlanie("\nNie ma takiej opcji, wracam do MENU.", 10);
    menu(liczba_osob, ludzie);  break;}
    }
}

void edytuj_nr(int &liczba_osob, vector <osoba> &ludzie, int imie)
{   setcolor(15);
    string wybor2str;
    int wybor2;
    int wybor3;
    int wybor4;
    string zmiana;
    string nowe;
    int licznik=0;
    int noweint;
    char nowechar;

    for(int i=0; i<liczba_osob; i++){
    if(ludzie[i].nr_ul == imie)
    {licznik++;}}

    wyswietlanie("\nWpisz numer z listy osoby, ktora chcesz edytowac.\n",10);
                    cin >> wybor2str;
                    if(isnum(wybor2str)){
                            wybor2 = conv(wybor2str);}

                    else{wyswietlanie("\nTo nie jest liczba, wracam do MENU.", 15); Sleep(1000); menu(liczba_osob, ludzie);}

                    if(wybor2 <1 || wybor2>licznik) {
                            wyswietlanie("\nNiepoprawna liczba. Wracam do MENU.", 15); Sleep(1000); menu(liczba_osob, ludzie);}

    licznik = 0;

    wyswietlanie("\nCo chcesz edytowac?", 10);
    wyswietlanie("\n1. Imie", 10);
    wyswietlanie("\n2. Nazwisko", 10);
    wyswietlanie("\n3. Miasto", 10);
    wyswietlanie("\n4. Ulica", 10);
    wyswietlanie("\n5. Numer domu", 10);
    wyswietlanie("\n6. Plec", 10);
    wyswietlanie("\n7. Wiek", 10);
    wyswietlanie("\n8. Pesel\n\n", 10);
    wybor3=getch();

    switch(wybor3){
case '1': {
    Sleep(200);
    wyswietlanie("\nNowe imie: ", 15);
    cin >> nowe;

        if(sprawdz_imie(nowe))
        {
            for(int i=0; i<liczba_osob; i++)
                        {
                            if(ludzie[i].nr_ul == imie)
                            {
                            ++licznik;
                            if(licznik==wybor2)
                                {
                                    ludzie[i].imie = nowe;
                                    break;
                                }
                            }
        }

        }
        else {wyswietlanie("Niepoprawne imie. Wprowadz dane jeszcze raz.", 15);
        Sleep(750);
        cout << endl;
        edytuj_nr(liczba_osob, ludzie, imie);}

    break;
    }
case '2':{
    Sleep(200);
    wyswietlanie("\nNowe nazwisko: ", 15);
    cin >> nowe;
        if(sprawdz_imie(nowe))
        {
            for(int i=0; i<liczba_osob; i++)
                        {
                            if(ludzie[i].nr_ul == imie)
                            {
                            ++licznik;
                            if(licznik==wybor2)
                                {
                                    ludzie[i].nazwisko = nowe;
                                    break;
                                }
                            }
        }

        }
        else {wyswietlanie("Niepoprawne nazwisko. Wprowadz dane jeszcze raz.", 15);
        Sleep(750);
        cout << endl;
       edytuj_nr(liczba_osob, ludzie, imie);}
    break;}
case '3':{
    Sleep(200);
    wyswietlanie("\nNowe miasto: ", 15);
    cin >> nowe;

        if(sprawdz_imie(nowe))
        {
            for(int i=0; i<liczba_osob; i++)
                        {
                            if(ludzie[i].nr_ul == imie)
                            {
                            ++licznik;
                            if(licznik==wybor2)
                                {
                                    ludzie[i].miasto = nowe;
                                    break;
                                }
                            }
        }

        }
        else {wyswietlanie("Niepoprawne miasto. Wprowadz dane jeszcze raz.", 15);
        Sleep(750);
        cout << endl;
        edytuj_nr(liczba_osob, ludzie, imie);}
    break;}
case '4':{
        Sleep(200);
    wyswietlanie("\nNowa ulica: ", 15);
    cin >> nowe;

        if(sprawdz_imie(nowe))
        {
            for(int i=0; i<liczba_osob; i++)
                        {
                            if(ludzie[i].nr_ul == imie)
                            {
                            ++licznik;
                            if(licznik==wybor2)
                                {
                                    ludzie[i].ulica = nowe;
                                    break;
                                }
                            }
        }

        }
        else {wyswietlanie("Niepoprawna ulica. Wprowadz dane jeszcze raz.", 15);
        Sleep(750);
        cout << endl;
        edytuj_nr(liczba_osob, ludzie, imie);}
    break;}

case '5':
    {
    Sleep(200);
    wyswietlanie("\nNowy numer domu: ", 15);
    cin >> nowe;

        if(isnum(nowe)){ noweint = conv(nowe);
        if(noweint>0 && noweint<99999)
        {
            for(int i=0; i<liczba_osob; i++)
                        {
                            if(ludzie[i].nr_ul == imie)
                            {
                            ++licznik;
                            if(licznik==wybor2)
                                {
                                    ludzie[i].nr_ul = noweint;
                                    break;
                                }
                            }
        }

        }
        else {wyswietlanie("Niepoprawny numer domu. Wprowadz dane jeszcze raz.", 10);
        Sleep(750);
        cout << endl;
        edytuj_nr(liczba_osob, ludzie, imie);}
        }
        else {wyswietlanie("To nie jest liczba, wprowadz dane jeszcze raz.\n", 10);
        edytuj_nr(liczba_osob, ludzie, imie);}
    break;
    }

case '6':  {
    Sleep(200);
    wyswietlanie("\nNowa plec: ", 15);
    cin >> nowechar;

            if(nowechar == 'k') {nowechar = 'K';}
            if(nowechar == 'm') {nowechar = 'M';}
            if(nowechar == 'M' || nowechar == 'K')
    {
        {
            for(int i=0; i<liczba_osob; i++)
                        {
                            if(ludzie[i].nr_ul == imie)
                            {
                            ++licznik;
                            if(licznik==wybor2)
                                {
                                    ludzie[i].plec = nowechar;
                                    break;
                                }
                            }
        }

        }
    }
        else {wyswietlanie("Niepoprawna plec. Wprowadz dane jeszcze raz.", 10);
        Sleep(750);
        cout << endl;
        edytuj_nr(liczba_osob, ludzie, imie);}


    break;
    }
case '7':
    {
    Sleep(200);
    wyswietlanie("\nNowy wiek: ", 15);
    cin >> nowe;

        if(isnum(nowe)){ noweint = conv(nowe);
        if(noweint>0 && noweint<999)
        {
            for(int i=0; i<liczba_osob; i++)
                        {
                            if(ludzie[i].nr_ul == imie)
                            {
                            ++licznik;
                            if(licznik==wybor2)
                                {
                                    ludzie[i].nr_ul = noweint;
                                    break;
                                }
                            }
        }

        }
        else {wyswietlanie("Niepoprawny wiek. Wprowadz dane jeszcze raz.", 10);
        Sleep(750);
        cout << endl;
        edytuj_nr(liczba_osob, ludzie, imie);}
        }
        else {wyswietlanie("To nie jest liczba, wprowadz dane jeszcze raz.\n", 10);
        edytuj_nr(liczba_osob, ludzie, imie);}
    break;
    }

case '8':  {
    Sleep(200);
    wyswietlanie("\nNowy pesel: ", 15);
    cin >> nowe;

             if(czypeselpoprawnyostateczniebool(nowe))
    {
        {
            for(int i=0; i<liczba_osob; i++)
                        {
                            if(ludzie[i].nr_ul == imie)
                            {
                            ++licznik;
                            if(licznik==wybor2)
                                {
                                    ludzie[i].pesel = nowe;
                                    break;
                                }
                            }
        }

        }
    }
        else {wyswietlanie("Niepoprawny pesel. Wprowadz dane jeszcze raz.", 10);
        Sleep(750);
        cout << endl;
        edytuj_nr(liczba_osob, ludzie, imie);}


    break;}

    default: wyswietlanie("\nNie ma takiej opcji! Dokonaj odpowiedniego wyboru.", 10); edytuj_nr(liczba_osob, ludzie, imie); break;

}

    Sleep(500);
    wyswietlanie("\n\nPoprawno zedytowano.",10);
        wyswietlanie("\n\n0 - Powrot do MENU",10);
         wyswietlanie("\n1 - Edytuj ponownie",10);
         wybor4 = getch();
    Sleep(500);

    switch(wybor4){
    case '0': menu(liczba_osob, ludzie); break;
    case '1':  { cout << endl; edytuj_nr(liczba_osob, ludzie, imie); break;}
    default: {wyswietlanie("\nNie ma takiej opcji, wracam do MENU.", 10);
    menu(liczba_osob, ludzie);  break;}
    }
}
void edytuj_plec(int &liczba_osob, vector <osoba> &ludzie, char imie)
{   setcolor(15);
    string wybor2str;
    int wybor2;
    int wybor3;
    int wybor4;
    string zmiana;
    string nowe;
    int licznik=0;
    int noweint;
    char nowechar;

    for(int i=0; i<liczba_osob; i++){
    if(ludzie[i].plec == imie)
    {licznik++;}}

    wyswietlanie("\nWpisz numer z listy osoby, ktora chcesz edytowac.\n",10);
                    cin >> wybor2str;
                    if(isnum(wybor2str)){
                            wybor2 = conv(wybor2str);}

                    else{wyswietlanie("\nTo nie jest liczba, wracam do MENU.", 15); Sleep(1000); menu(liczba_osob, ludzie);}

                    if(wybor2 <1 || wybor2>licznik) {
                            wyswietlanie("\nNiepoprawna liczba. Wracam do MENU.", 15); Sleep(1000); menu(liczba_osob, ludzie);}

    licznik = 0;

    wyswietlanie("\nCo chcesz edytowac?", 10);
    wyswietlanie("\n1. Imie", 10);
    wyswietlanie("\n2. Nazwisko", 10);
    wyswietlanie("\n3. Miasto", 10);
    wyswietlanie("\n4. Ulica", 10);
    wyswietlanie("\n5. Numer domu", 10);
    wyswietlanie("\n6. Plec", 10);
    wyswietlanie("\n7. Wiek", 10);
    wyswietlanie("\n8. Pesel\n\n", 10);
    wybor3=getch();

    switch(wybor3){
case '1': {
    Sleep(200);
    wyswietlanie("\nNowe imie: ", 15);
    cin >> nowe;

        if(sprawdz_imie(nowe))
        {
            for(int i=0; i<liczba_osob; i++)
                        {
                            if(ludzie[i].plec == imie)
                            {
                            ++licznik;
                            if(licznik==wybor2)
                                {
                                    ludzie[i].imie = nowe;
                                    break;
                                }
                            }
        }

        }
        else {wyswietlanie("Niepoprawne imie. Wprowadz dane jeszcze raz.", 15);
        Sleep(750);
        cout << endl;
        edytuj_plec(liczba_osob, ludzie, imie);}

    break;
    }
case '2':{
    Sleep(200);
    wyswietlanie("\nNowe nazwisko: ", 15);
    cin >> nowe;
        if(sprawdz_imie(nowe))
        {
            for(int i=0; i<liczba_osob; i++)
                        {
                            if(ludzie[i].plec == imie)
                            {
                            ++licznik;
                            if(licznik==wybor2)
                                {
                                    ludzie[i].nazwisko = nowe;
                                    break;
                                }
                            }
        }

        }
        else {wyswietlanie("Niepoprawne nazwisko. Wprowadz dane jeszcze raz.", 15);
        Sleep(750);
        cout << endl;
       edytuj_plec(liczba_osob, ludzie, imie);}
    break;}
case '3':{
    Sleep(200);
    wyswietlanie("\nNowe miasto: ", 15);
    cin >> nowe;

        if(sprawdz_imie(nowe))
        {
            for(int i=0; i<liczba_osob; i++)
                        {
                            if(ludzie[i].plec == imie)
                            {
                            ++licznik;
                            if(licznik==wybor2)
                                {
                                    ludzie[i].miasto = nowe;
                                    break;
                                }
                            }
        }

        }
        else {wyswietlanie("Niepoprawne miasto. Wprowadz dane jeszcze raz.", 15);
        Sleep(750);
        cout << endl;
        edytuj_plec(liczba_osob, ludzie, imie);}
    break;}
case '4':{
        Sleep(200);
    wyswietlanie("\nNowa ulica: ", 15);
    cin >> nowe;

        if(sprawdz_imie(nowe))
        {
            for(int i=0; i<liczba_osob; i++)
                        {
                            if(ludzie[i].plec == imie)
                            {
                            ++licznik;
                            if(licznik==wybor2)
                                {
                                    ludzie[i].ulica = nowe;
                                    break;
                                }
                            }
        }

        }
        else {wyswietlanie("Niepoprawna ulica. Wprowadz dane jeszcze raz.", 15);
        Sleep(750);
        cout << endl;
        edytuj_plec(liczba_osob, ludzie, imie);}
    break;}
case '5':
    {
    Sleep(200);
    wyswietlanie("\nNowy numer domu: ", 15);
    cin >> nowe;

        if(isnum(nowe)){ noweint = conv(nowe);
        if(noweint>0 && noweint<99999)
        {
            for(int i=0; i<liczba_osob; i++)
                        {
                            if(ludzie[i].plec == imie)
                            {
                            ++licznik;
                            if(licznik==wybor2)
                                {
                                    ludzie[i].nr_ul = noweint;
                                    break;
                                }
                            }
        }

        }
        else {wyswietlanie("Niepoprawny numer domu. Wprowadz dane jeszcze raz.", 10);
        Sleep(750);
        cout << endl;
        edytuj_plec(liczba_osob, ludzie, imie);}
        }
        else {wyswietlanie("To nie jest liczba, wprowadz dane jeszcze raz.\n", 10);
        edytuj_plec(liczba_osob, ludzie, imie);}
    break;
    }

case '6':  {
    Sleep(200);
    wyswietlanie("\nNowa plec: ", 15);
    cin >> nowechar;

            if(nowechar == 'k') {nowechar = 'K';}
            if(nowechar == 'm') {nowechar = 'M';}
            if(nowechar == 'M' || nowechar == 'K')
    {
        {
            for(int i=0; i<liczba_osob; i++)
                        {
                            if(ludzie[i].plec == imie)
                            {
                            ++licznik;
                            if(licznik==wybor2)
                                {
                                    ludzie[i].plec = nowechar;
                                    break;
                                }
                            }
        }

        }
    }
        else {wyswietlanie("Niepoprawna plec. Wprowadz dane jeszcze raz.", 10);
        Sleep(750);
        cout << endl;
        edytuj_plec(liczba_osob, ludzie, imie);}


    break;
    }
case '7':
    {
    Sleep(200);
    wyswietlanie("\nNowy wiek: ", 15);
    cin >> nowe;

        if(isnum(nowe)){ noweint = conv(nowe);
        if(noweint>0 && noweint<999)
        {
            for(int i=0; i<liczba_osob; i++)
                        {
                            if(ludzie[i].plec == imie)
                            {
                            ++licznik;
                            if(licznik==wybor2)
                                {
                                    ludzie[i].nr_ul = noweint;
                                    break;
                                }
                            }
        }

        }
        else {wyswietlanie("Niepoprawny wiek. Wprowadz dane jeszcze raz.", 10);
        Sleep(750);
        cout << endl;
        edytuj_plec(liczba_osob, ludzie, imie);}
        }
        else {wyswietlanie("To nie jest liczba, wprowadz dane jeszcze raz.\n", 10);
        edytuj_plec(liczba_osob, ludzie, imie);}
    break;
    }

case '8':  {
    Sleep(200);
    wyswietlanie("\nNowy pesel: ", 15);
    cin >> nowe;

             if(czypeselpoprawnyostateczniebool(nowe))
    {
        {
            for(int i=0; i<liczba_osob; i++)
                        {
                            if(ludzie[i].plec == imie)
                            {
                            ++licznik;
                            if(licznik==wybor2)
                                {
                                    ludzie[i].pesel = nowe;
                                    break;
                                }
                            }
        }

        }
    }
        else {wyswietlanie("Niepoprawny pesel. Wprowadz dane jeszcze raz.", 10);
        Sleep(750);
        cout << endl;
        edytuj_plec(liczba_osob, ludzie, imie);}


    break;}
    default: wyswietlanie("\nNie ma takiej opcji! Dokonaj odpowiedniego wyboru.", 10); edytuj_plec(liczba_osob, ludzie, imie); break;

}

    Sleep(500);
    wyswietlanie("\n\nPoprawno zedytowano.",10);
        wyswietlanie("\n\n0 - Powrot do MENU",10);
         wyswietlanie("\n1 - Edytuj ponownie",10);
         wybor4 = getch();
    Sleep(500);

    switch(wybor4){
    case '0': menu(liczba_osob, ludzie); break;
    case '1':  { cout << endl; edytuj_plec(liczba_osob, ludzie, imie); break;}
    default: {wyswietlanie("\nNie ma takiej opcji, wracam do MENU.", 10);
    menu(liczba_osob, ludzie);  break;}
    }
}
void edytuj_wiek(int &liczba_osob, vector <osoba> &ludzie, int imie)
{   setcolor(15);
    string wybor2str;
    int wybor2;
    int wybor3;
    int wybor4;
    string zmiana;
    string nowe;
    int licznik=0;
    int noweint;
    char nowechar;

    for(int i=0; i<liczba_osob; i++){
    if(ludzie[i].wiek == imie)
    {licznik++;}}

    wyswietlanie("\nWpisz numer z listy osoby, ktora chcesz edytowac.\n",10);
                    cin >> wybor2str;
                    if(isnum(wybor2str)){
                            wybor2 = conv(wybor2str);}

                    else{wyswietlanie("\nTo nie jest liczba, wracam do MENU.", 15); Sleep(1000); menu(liczba_osob, ludzie);}

                    if(wybor2 <1 || wybor2>licznik) {
                            wyswietlanie("\nNiepoprawna liczba. Wracam do MENU.", 15); Sleep(1000); menu(liczba_osob, ludzie);}

    licznik = 0;

    wyswietlanie("\nCo chcesz edytowac?", 10);
    wyswietlanie("\n1. Imie", 10);
    wyswietlanie("\n2. Nazwisko", 10);
    wyswietlanie("\n3. Miasto", 10);
    wyswietlanie("\n4. Ulica", 10);
    wyswietlanie("\n5. Numer domu", 10);
    wyswietlanie("\n6. Plec", 10);
    wyswietlanie("\n7. Wiek", 10);
    wyswietlanie("\n8. Pesel\n\n", 10);
    wybor3=getch();

    switch(wybor3){
case '1': {
    Sleep(200);
    wyswietlanie("\nNowe imie: ", 15);
    cin >> nowe;

        if(sprawdz_imie(nowe))
        {
            for(int i=0; i<liczba_osob; i++)
                        {
                            if(ludzie[i].wiek == imie)
                            {
                            ++licznik;
                            if(licznik==wybor2)
                                {
                                    ludzie[i].imie = nowe;
                                    break;
                                }
                            }
        }

        }
        else {wyswietlanie("Niepoprawne imie. Wprowadz dane jeszcze raz.", 15);
        Sleep(750);
        cout << endl;
        edytuj_wiek(liczba_osob, ludzie, imie);}

    break;
    }
case '2':{
    Sleep(200);
    wyswietlanie("\nNowe nazwisko: ", 15);
    cin >> nowe;
        if(sprawdz_imie(nowe))
        {
            for(int i=0; i<liczba_osob; i++)
                        {
                            if(ludzie[i].wiek == imie)
                            {
                            ++licznik;
                            if(licznik==wybor2)
                                {
                                    ludzie[i].nazwisko = nowe;
                                    break;
                                }
                            }
        }

        }
        else {wyswietlanie("Niepoprawne nazwisko. Wprowadz dane jeszcze raz.", 15);
        Sleep(750);
        cout << endl;
       edytuj_wiek(liczba_osob, ludzie, imie);}
    break;}
case '3':{
    Sleep(200);
    wyswietlanie("\nNowe miasto: ", 15);
    cin >> nowe;

        if(sprawdz_imie(nowe))
        {
            for(int i=0; i<liczba_osob; i++)
                        {
                            if(ludzie[i].wiek == imie)
                            {
                            ++licznik;
                            if(licznik==wybor2)
                                {
                                    ludzie[i].miasto = nowe;
                                    break;
                                }
                            }
        }

        }
        else {wyswietlanie("Niepoprawne miasto. Wprowadz dane jeszcze raz.", 15);
        Sleep(750);
        cout << endl;
        edytuj_wiek(liczba_osob, ludzie, imie);}
    break;}
case '4':{
        Sleep(200);
    wyswietlanie("\nNowa ulica: ", 15);
    cin >> nowe;

        if(sprawdz_imie(nowe))
        {
            for(int i=0; i<liczba_osob; i++)
                        {
                            if(ludzie[i].wiek == imie)
                            {
                            ++licznik;
                            if(licznik==wybor2)
                                {
                                    ludzie[i].ulica = nowe;
                                    break;
                                }
                            }
        }

        }
        else {wyswietlanie("Niepoprawna ulica. Wprowadz dane jeszcze raz.", 15);
        Sleep(750);
        cout << endl;
        edytuj_wiek(liczba_osob, ludzie, imie);}
    break;}
case '5':
    {
    Sleep(200);
    wyswietlanie("\nNowy numer domu: ", 15);
    cin >> nowe;

        if(isnum(nowe)){ noweint = conv(nowe);
        if(noweint>0 && noweint<99999)
        {
            for(int i=0; i<liczba_osob; i++)
                        {
                            if(ludzie[i].wiek == imie)
                            {
                            ++licznik;
                            if(licznik==wybor2)
                                {
                                    ludzie[i].nr_ul = noweint;
                                    break;
                                }
                            }
        }

        }
        else {wyswietlanie("Niepoprawny numer domu. Wprowadz dane jeszcze raz.", 10);
        Sleep(750);
        cout << endl;
        edytuj_wiek(liczba_osob, ludzie, imie);}
        }
        else {wyswietlanie("To nie jest liczba, wprowadz dane jeszcze raz.\n", 10);
        edytuj_wiek(liczba_osob, ludzie, imie);}
    break;
    }

case '6':  {
    Sleep(200);
    wyswietlanie("\nNowa plec: ", 15);
    cin >> nowechar;

            if(nowechar == 'k') {nowechar = 'K';}
            if(nowechar == 'm') {nowechar = 'M';}
            if(nowechar == 'M' || nowechar == 'K')
    {
        {
            for(int i=0; i<liczba_osob; i++)
                        {
                            if(ludzie[i].wiek == imie)
                            {
                            ++licznik;
                            if(licznik==wybor2)
                                {
                                    ludzie[i].plec = nowechar;
                                    break;
                                }
                            }
        }

        }
    }
        else {wyswietlanie("Niepoprawna plec. Wprowadz dane jeszcze raz.", 10);
        Sleep(750);
        cout << endl;
        edytuj_wiek(liczba_osob, ludzie, imie);}


    break;
    }
case '7':
    {
    Sleep(200);
    wyswietlanie("\nNowy wiek: ", 15);
    cin >> nowe;

        if(isnum(nowe)){ noweint = conv(nowe);
        if(noweint>0 && noweint<999)
        {
            for(int i=0; i<liczba_osob; i++)
                        {
                            if(ludzie[i].wiek == imie)
                            {
                            ++licznik;
                            if(licznik==wybor2)
                                {
                                    ludzie[i].nr_ul = noweint;
                                    break;
                                }
                            }
        }

        }
        else {wyswietlanie("Niepoprawny wiek. Wprowadz dane jeszcze raz.", 10);
        Sleep(750);
        cout << endl;
        edytuj_wiek(liczba_osob, ludzie, imie);}
        }
        else {wyswietlanie("To nie jest liczba, wprowadz dane jeszcze raz.\n", 10);
        edytuj_wiek(liczba_osob, ludzie, imie);}
    break;
    }

case '8':  {
    Sleep(200);
    wyswietlanie("\nNowy pesel: ", 15);
    cin >> nowe;

             if(czypeselpoprawnyostateczniebool(nowe))
    {
        {
            for(int i=0; i<liczba_osob; i++)
                        {
                            if(ludzie[i].wiek == imie)
                            {
                            ++licznik;
                            if(licznik==wybor2)
                                {
                                    ludzie[i].pesel = nowe;
                                    break;
                                }
                            }
        }

        }
    }
        else {wyswietlanie("Niepoprawny pesel. Wprowadz dane jeszcze raz.", 10);
        Sleep(750);
        cout << endl;
        edytuj_wiek(liczba_osob, ludzie, imie);}


    break;}
    default: wyswietlanie("\nNie ma takiej opcji! Dokonaj odpowiedniego wyboru.", 10); edytuj_wiek(liczba_osob, ludzie, imie); break;

}

 Sleep(500);
    wyswietlanie("\n\nPoprawno zedytowano.",10);
        wyswietlanie("\n\n0 - Powrot do MENU",10);
         wyswietlanie("\n1 - Edytuj ponownie",10);
         wybor4 = getch();
    Sleep(500);

    switch(wybor4){
    case '0': menu(liczba_osob, ludzie); break;
    case '1':  { cout << endl; edytuj_wiek(liczba_osob, ludzie, imie); break;}
    default: {wyswietlanie("\nNie ma takiej opcji, wracam do MENU.", 10);
    menu(liczba_osob, ludzie);  break;}
    }
}

void edytuj_pesel(int &liczba_osob, vector <osoba> &ludzie, string imie)
{   setcolor(15);
    string wybor2str;
    int wybor2;
    int wybor3;
    int wybor4;
    string zmiana;
    string nowe;
    int licznik=0;
    int noweint;
    char nowechar;

    for(int i=0; i<liczba_osob; i++){
    if(ludzie[i].pesel == imie)
    {licznik++;}}

    wyswietlanie("\nWpisz numer z listy osoby, ktora chcesz edytowac.\n",10);
                    cin >> wybor2str;
                    if(isnum(wybor2str)){
                            wybor2 = conv(wybor2str);}

                    else{wyswietlanie("\nTo nie jest liczba, wracam do MENU.", 15); Sleep(1000); menu(liczba_osob, ludzie);}

                    if(wybor2 <1 || wybor2>licznik) {
                            wyswietlanie("\nNiepoprawna liczba. Wracam do MENU.", 15); Sleep(1000); menu(liczba_osob, ludzie);}

    licznik = 0;

    wyswietlanie("\nCo chcesz edytowac?", 10);
    wyswietlanie("\n1. Imie", 10);
    wyswietlanie("\n2. Nazwisko", 10);
    wyswietlanie("\n3. Miasto", 10);
    wyswietlanie("\n4. Ulica", 10);
    wyswietlanie("\n5. Numer domu", 10);
    wyswietlanie("\n6. Plec", 10);
    wyswietlanie("\n7. Wiek", 10);
    wyswietlanie("\n8. Pesel\n\n", 10);
    wybor3=getch();

    switch(wybor3){
case '1': {
    Sleep(200);
    wyswietlanie("\nNowe imie: ", 15);
    cin >> nowe;

        if(sprawdz_imie(nowe))
        {
            for(int i=0; i<liczba_osob; i++)
                        {
                            if(ludzie[i].pesel == imie)
                            {
                            ++licznik;
                            if(licznik==wybor2)
                                {
                                    ludzie[i].imie = nowe;
                                    break;
                                }
                            }
        }

        }
        else {wyswietlanie("Niepoprawne imie. Wprowadz dane jeszcze raz.", 15);
        Sleep(750);
        cout << endl;
        edytuj_pesel(liczba_osob, ludzie, imie);}

    break;
    }
case '2':{
    Sleep(200);
    wyswietlanie("\nNowe nazwisko: ", 15);
    cin >> nowe;
        if(sprawdz_imie(nowe))
        {
            for(int i=0; i<liczba_osob; i++)
                        {
                            if(ludzie[i].pesel == imie)
                            {
                            ++licznik;
                            if(licznik==wybor2)
                                {
                                    ludzie[i].nazwisko = nowe;
                                    break;
                                }
                            }
        }

        }
        else {wyswietlanie("Niepoprawne nazwisko. Wprowadz dane jeszcze raz.", 15);
        Sleep(750);
        cout << endl;
       edytuj_pesel(liczba_osob, ludzie, imie);}
    break;}
case '3':{
    Sleep(200);
    wyswietlanie("\nNowe miasto: ", 15);
    cin >> nowe;

        if(sprawdz_imie(nowe))
        {
            for(int i=0; i<liczba_osob; i++)
                        {
                            if(ludzie[i].pesel == imie)
                            {
                            ++licznik;
                            if(licznik==wybor2)
                                {
                                    ludzie[i].miasto = nowe;
                                    break;
                                }
                            }
        }

        }
        else {wyswietlanie("Niepoprawne miasto. Wprowadz dane jeszcze raz.", 15);
        Sleep(750);
        cout << endl;
        edytuj_pesel(liczba_osob, ludzie, imie);}
    break;}
case '4':{
        Sleep(200);
    wyswietlanie("\nNowa ulica: ", 15);
    cin >> nowe;

        if(sprawdz_imie(nowe))
        {
            for(int i=0; i<liczba_osob; i++)
                        {
                            if(ludzie[i].pesel == imie)
                            {
                            ++licznik;
                            if(licznik==wybor2)
                                {
                                    ludzie[i].ulica = nowe;
                                    break;
                                }
                            }
        }

        }
        else {wyswietlanie("Niepoprawna ulica. Wprowadz dane jeszcze raz.", 15);
        Sleep(750);
        cout << endl;
        edytuj_pesel(liczba_osob, ludzie, imie);}
    break;}
case '5':
    {
    Sleep(200);
    wyswietlanie("\nNowy numer domu: ", 15);
    cin >> nowe;

        if(isnum(nowe)){ noweint = conv(nowe);
        if(noweint>0 && noweint<99999)
        {
            for(int i=0; i<liczba_osob; i++)
                        {
                            if(ludzie[i].pesel == imie)
                            {
                            ++licznik;
                            if(licznik==wybor2)
                                {
                                    ludzie[i].nr_ul = noweint;
                                    break;
                                }
                            }
        }

        }
        else {wyswietlanie("Niepoprawny numer domu. Wprowadz dane jeszcze raz.", 10);
        Sleep(750);
        cout << endl;
        edytuj_pesel(liczba_osob, ludzie, imie);}
        }
        else {wyswietlanie("To nie jest liczba, wprowadz dane jeszcze raz.\n", 10);
        edytuj_pesel(liczba_osob, ludzie, imie);}
    break;
    }

case '6':  {
    Sleep(200);
    wyswietlanie("\nNowa plec: ", 15);
    cin >> nowechar;

            if(nowechar == 'k') {nowechar = 'K';}
            if(nowechar == 'm') {nowechar = 'M';}
            if(nowechar == 'M' || nowechar == 'K')
    {
        {
            for(int i=0; i<liczba_osob; i++)
                        {
                            if(ludzie[i].pesel == imie)
                            {
                            ++licznik;
                            if(licznik==wybor2)
                                {
                                    ludzie[i].plec = nowechar;
                                    break;
                                }
                            }
        }

        }
    }
        else {wyswietlanie("Niepoprawna plec. Wprowadz dane jeszcze raz.", 10);
        Sleep(750);
        cout << endl;
        edytuj_pesel(liczba_osob, ludzie, imie);}


    break;
    }
case '7':
    {
    Sleep(200);
    wyswietlanie("\nNowy wiek: ", 15);
    cin >> nowe;

        if(isnum(nowe)){ noweint = conv(nowe);
        if(noweint>0 && noweint<999)
        {
            for(int i=0; i<liczba_osob; i++)
                        {
                            if(ludzie[i].pesel == imie)
                            {
                            ++licznik;
                            if(licznik==wybor2)
                                {
                                    ludzie[i].nr_ul = noweint;
                                    break;
                                }
                            }
        }

        }
        else {wyswietlanie("Niepoprawny wiek. Wprowadz dane jeszcze raz.", 10);
        Sleep(750);
        cout << endl;
        edytuj_pesel(liczba_osob, ludzie, imie);}
        }
        else {wyswietlanie("To nie jest liczba, wprowadz dane jeszcze raz.\n", 10);
        edytuj_pesel(liczba_osob, ludzie, imie);}
    break;
    }

case '8':  {
    Sleep(200);
    wyswietlanie("\nNowy pesel: ", 15);
    cin >> nowe;

             if(czypeselpoprawnyostateczniebool(nowe))
    {
        {
            for(int i=0; i<liczba_osob; i++)
                        {
                            if(ludzie[i].pesel == imie)
                            {
                            ++licznik;
                            if(licznik==wybor2)
                                {
                                    ludzie[i].pesel = nowe;
                                    break;
                                }
                            }
        }

        }
    }
        else {wyswietlanie("Niepoprawny pesel. Wprowadz dane jeszcze raz.", 10);
        Sleep(750);
        cout << endl;
        edytuj_pesel(liczba_osob, ludzie, imie);}


    break;}
    default: wyswietlanie("\nNie ma takiej opcji! Dokonaj odpowiedniego wyboru.", 10); edytuj_pesel(liczba_osob, ludzie, imie); break;

}

    Sleep(500);
    wyswietlanie("\n\nPoprawno zedytowano.",10);
        wyswietlanie("\n\n0 - Powrot do MENU",10);
         wyswietlanie("\n1 - Edytuj ponownie",10);
         wybor4 = getch();
    Sleep(500);

    switch(wybor4){
    case '0': menu(liczba_osob, ludzie); break;
    case '1':  { cout << endl; edytuj_pesel(liczba_osob, ludzie, imie); break;}
    default: {wyswietlanie("\nNie ma takiej opcji, wracam do MENU.", 10);
    menu(liczba_osob, ludzie);  break;}
    }
}

void wprowadz_imie2(int &liczba_osob, vector<osoba> &ludzie)
{   setcolor(15);
    string imie;
    int licznik =0;
    string nazwisko;
    string miasto;
    string ulica;
    int nr_ul;
    char plec;
    int wiek;
    string pesel;



    wyswietlanie("1. Wprowadz imie: ", 15);
    cin >> imie;

        if(sprawdz_imie(imie))
        {
                        Sleep(250);
                        system("cls");
                        wyswietlanie("Wyszukane wyniki: \n \n", 15);
                        int z=1;
                        for(int i=0; i<liczba_osob; i++)
                        {
                            if(ludzie[i].imie == imie)
                            {
                            Sleep(200);
                            licznik++;
                            if(z%2)
                                {
                                    setcolor(14);
                                }
                            else
                                {
                                    setcolor(15);
                                }
                                z++;
                                    cout <<setw(3)<< licznik << ". " <<setw(13)<<ludzie[i].imie << " ";
                                    cout <<setw(13)<< ludzie[i].nazwisko << " ";
                                    cout <<setw(16)<< ludzie[i].miasto << " ";
                                    cout <<setw(15)<< ludzie[i].ulica << " ";
                                    cout <<setw(6)<< ludzie[i].nr_ul << " ";
                                    cout <<setw(1)<< ludzie[i].plec << " ";
                                    cout <<setw(3)<< ludzie[i].wiek << " ";
                                    cout <<setw(11)<< ludzie[i].pesel<< endl;
                            }
                        }
                        setcolor(15);
                            if(licznik==0) { Sleep(200);wyswietlanie("Brak wynikow. \n\nAby powrocic do MENU, nacisnij dowolny przycisk.", 10); getch(); menu(liczba_osob, ludzie);}
        else{
        string wyborstr;
        int wybor;
        int wybor2;
        string wybor2str;
        wyswietlanie("\n\n\n 2 - Edycja osoby.", 10);
        wyswietlanie("\n 1 - Usuwanie osoby.",10);
        wyswietlanie("\n 0 - Powrot do menu. \n",10);
        wyswietlanie("\n\n\n Wybierz liczbe:\n",10);
        cin >> wyborstr;
        if(isnum(wyborstr)){wybor = conv(wyborstr);}

        switch(wybor){
        case 0:
                {wyswietlanie("\n Wracam do MENU...",15);
                Sleep(200);
                menu(liczba_osob, ludzie); break;}

        case 1: {wyswietlanie("\n Wpisz numer z listy osoby, ktora chcesz usunac: ", 10);
            cin >> wybor2str;

             if(isnum(wybor2str)){ wybor2 = conv(wybor2str);
             if(wybor2 >licznik) {
                    wyswietlanie("\nNiepoprawna liczba. Wracam do MENU.", 15);
                    Sleep(1000); menu(liczba_osob, ludzie);}}

             else{ wyswietlanie("\nTo nie jest liczba, wracam do MENU.", 15); Sleep(1000); menu(liczba_osob, ludzie);}
            licznik=0;

            for(int i=0; i<liczba_osob; i++)
                        {
                            if(ludzie[i].imie == imie)
                            {
                            ++licznik;
                            if(licznik==wybor2)
                                {
                                    ludzie.erase(ludzie.begin()+i);
                                    liczba_osob--;
                                    break;
                                }
                            }
                        }
                Sleep(200);
                wyswietlanie("\n Osoba usunieta, aby powrocic do MENU, nacisnij dowolny przycisk.",10);
                getch();
                menu(liczba_osob, ludzie);
                break;
            }

        case 2:
              {  edytuj_imie(liczba_osob, ludzie, imie, licznik); }

            default: {wyswietlanie("Nie ma takiej opcji! Wracam do MENU. \n", 15);
            Sleep(1000);
            menu(liczba_osob, ludzie);
            break;}

        }
        }

        }

        else {wyswietlanie("Niepoprawne imie. Wprowadz dane jeszcze raz.", 15);
        Sleep(750);
        cout << endl;
        wprowadz_imie2(liczba_osob, ludzie);
}
}
void wprowadz_nazwisko2(int &liczba_osob, vector<osoba> &ludzie)
{
setcolor(15);
    string nazwisko;
    int licznik=0;
    wyswietlanie("2. Wprowadz nazwisko: ", 15);
    cin >> nazwisko;

        if(sprawdz_imie(nazwisko))
        {

                    Sleep(250);
                    system("cls");
                    wyswietlanie("Wyszukane wyniki: \n \n", 15);
                    int z=1;
                    for(int i=0; i<liczba_osob; i++)
                    {
                        if(ludzie[i].nazwisko == nazwisko)
                        {
                        Sleep(200);
                        licznik++;
                         if(z%2)
                                {
                                    setcolor(14);
                                }
                            else
                                {
                                    setcolor(15);
                                }
                                z++;
                                    cout <<setw(3)<< licznik << ". " <<setw(13)<<ludzie[i].imie << " ";
                                    cout <<setw(13)<< ludzie[i].nazwisko << " ";
                                    cout <<setw(16)<< ludzie[i].miasto << " ";
                                    cout <<setw(15)<< ludzie[i].ulica << " ";
                                    cout <<setw(6)<< ludzie[i].nr_ul << " ";
                                    cout <<setw(1)<< ludzie[i].plec << " ";
                                    cout <<setw(3)<< ludzie[i].wiek << " ";
                                    cout <<setw(11)<< ludzie[i].pesel<< endl;
                        }
                    }
                    setcolor(15);
           if(licznik==0) { Sleep(200);wyswietlanie("Brak wynikow. \n\nAby powrocic do MENU, nacisnij dowolny przycisk.", 10); getch(); menu(liczba_osob, ludzie);}
        else{
        string wyborstr;
        int wybor;
        int wybor2;
        string wybor2str;

        wyswietlanie("\n\n\n 2 - Edycja osoby.", 10);
        wyswietlanie("\n 1 - Usuwanie osoby.",10);
        wyswietlanie("\n 0 - Powrot do menu. \n",10);
        wyswietlanie("\n\n\n Wybierz liczbe:\n",10);
        cin >> wyborstr;
        if(isnum(wyborstr)){wybor = conv(wyborstr);}
        switch(wybor){
            case 0:
                {wyswietlanie("\n Wracam do MENU... ",15);
                Sleep(200);
                menu(liczba_osob, ludzie); break;}
            case 1: {wyswietlanie("\n Wpisz numer z listy osoby, ktora chcesz usunac: ", 10);
            cin >> wybor2str;

             if(isnum(wybor2str)){ wybor2 = conv(wybor2str); if(wybor2 >licznik) {wyswietlanie("\nNiepoprawna liczba. Wracam do MENU.", 15); Sleep(1000); menu(liczba_osob, ludzie);}}

             else{ wyswietlanie("\nTo nie jest liczba, wracam do MENU.", 15); Sleep(1000); menu(liczba_osob, ludzie);}
            licznik=0;

            for(int i=0; i<liczba_osob; i++)
                        {
                            if(ludzie[i].nazwisko == nazwisko)
                            {
                            ++licznik;
                            if(licznik==wybor2)
                                {
                                    ludzie.erase(ludzie.begin()+i);
                                    liczba_osob--;
                                    break;
                                }
                            }
                        }
                Sleep(200);
                wyswietlanie("\n Osoba usunieta, aby powrocic do MENU, nacisnij dowolny przycisk.",10);
                getch();
                menu(liczba_osob, ludzie);
                break;
            }
            case 2:
              {  edytuj_nazwisko(liczba_osob, ludzie, nazwisko); }

            default: {wyswietlanie("Nie ma takiej opcji! Wracam do MENU. \n", 15);
            Sleep(1000);
            menu(liczba_osob, ludzie);
            break;}
        }
        }



        }

        else {wyswietlanie("Niepoprawne nazwisko. Wprowadz dane jeszcze raz.", 15);
        Sleep(750);
        cout << endl;
        wprowadz_nazwisko2(liczba_osob, ludzie);
}
}
void wprowadz_miasto2(int &liczba_osob, vector<osoba> &ludzie)
{   setcolor(15);
    string miasto;
    int licznik=0;
    wyswietlanie("3. Wprowadz miasto: ", 10);
    cin >> miasto;

        if(sprawdz_imie(miasto))
        {
            Sleep(250);
                    system("cls");
                    wyswietlanie("Wyszukane wyniki: \n \n", 15);
                    int z=1;
                    for(int i=0; i<liczba_osob; i++)
                    {
                        if(ludzie[i].miasto == miasto)
                        {
                        Sleep(200);
                        licznik++;
                         if(z%2)
                                {
                                    setcolor(14);
                                }
                            else
                                {
                                    setcolor(15);
                                }
                                z++;
                                    cout <<setw(3)<< licznik << ". " <<setw(13)<<ludzie[i].imie << " ";
                                    cout <<setw(13)<< ludzie[i].nazwisko << " ";
                                    cout <<setw(16)<< ludzie[i].miasto << " ";
                                    cout <<setw(15)<< ludzie[i].ulica << " ";
                                    cout <<setw(6)<< ludzie[i].nr_ul << " ";
                                    cout <<setw(1)<< ludzie[i].plec << " ";
                                    cout <<setw(3)<< ludzie[i].wiek << " ";
                                    cout <<setw(11)<< ludzie[i].pesel<< endl;
                        }
                    }
                setcolor(15);
                if(licznik==0) { Sleep(200);wyswietlanie("Brak wynikow. \n\nAby powrocic do MENU, nacisnij dowolny przycisk.", 10); getch(); menu(liczba_osob, ludzie);}
        else{
        string wyborstr;
        int wybor;
        int wybor2;
        string wybor2str;

        wyswietlanie("\n\n\n 2 - Edycja osoby.", 10);
        wyswietlanie("\n 1 - Usuwanie osoby.",10);
        wyswietlanie("\n 0 - Powrot do menu. \n",10);
        wyswietlanie("\n\n\n Wybierz liczbe:\n",10);
        cin >> wyborstr;
        if(isnum(wyborstr)){wybor = conv(wyborstr);}
        switch(wybor){
            case 0:
                {wyswietlanie("\n Wracam do MENU... ",15);
                Sleep(200);
                menu(liczba_osob, ludzie); break;}
            case 1: {wyswietlanie("\n Wpisz numer z listy osoby, ktora chcesz usunac: ", 10);
            cin >> wybor2str;

             if(isnum(wybor2str)){ wybor2 = conv(wybor2str); if(wybor2 >licznik) {wyswietlanie("\nNiepoprawna liczba. Wracam do MENU.", 15); Sleep(1000); menu(liczba_osob, ludzie);}}

             else{ wyswietlanie("\nTo nie jest liczba, wracam do MENU.", 15); Sleep(1000); menu(liczba_osob, ludzie);}
            licznik=0;

            for(int i=0; i<liczba_osob; i++)
                        {
                            if(ludzie[i].miasto == miasto)
                            {
                            ++licznik;
                            if(licznik==wybor2)
                                {
                                    ludzie.erase(ludzie.begin()+i);
                                    liczba_osob--;
                                    break;
                                }
                            }
                        }
                Sleep(200);
                wyswietlanie("\n Osoba usunieta, aby powrocic do MENU, nacisnij dowolny przycisk.",10);
                getch();
                menu(liczba_osob, ludzie);
                break;
            }
            case 2:
              {  edytuj_miasto(liczba_osob, ludzie, miasto); }

            default: {wyswietlanie("Nie ma takiej opcji! Wracam do MENU. \n", 15);
            Sleep(1000);
            menu(liczba_osob, ludzie);
            break;}
        }
        }

       }
        else {wyswietlanie("Niepoprawne miasto. Wprowadz dane jeszcze raz.", 10);
        cout << endl;
        Sleep(750);
        wprowadz_miasto2(liczba_osob, ludzie);
}
}

void wprowadz_ulice2(int &liczba_osob, vector<osoba> &ludzie)
{   setcolor(15);
    string ulica;
    int licznik=0;

    wyswietlanie("4. Wprowadz ulice: ", 10);
    cin >> ulica;

        if(sprawdz_imie(ulica))
        {
            Sleep(250);
                    system("cls");
                    wyswietlanie("Wyszukane wyniki: \n \n", 15);
                    int z=1;
                    for(int i=0; i<liczba_osob; i++)
                    {
                        if(ludzie[i].ulica == ulica)
                        {
                        Sleep(200);
                        licznik++;
                         if(z%2)
                                {
                                    setcolor(14);
                                }
                            else
                                {
                                    setcolor(15);
                                }
                                z++;
                                    cout <<setw(3)<< licznik << ". " <<setw(13)<<ludzie[i].imie << " ";
                                    cout <<setw(13)<< ludzie[i].nazwisko << " ";
                                    cout <<setw(16)<< ludzie[i].miasto << " ";
                                    cout <<setw(15)<< ludzie[i].ulica << " ";
                                    cout <<setw(6)<< ludzie[i].nr_ul << " ";
                                    cout <<setw(1)<< ludzie[i].plec << " ";
                                    cout <<setw(3)<< ludzie[i].wiek << " ";
                                    cout <<setw(11)<< ludzie[i].pesel<< endl;
                        }
                    }
                    setcolor(15);
           if(licznik==0) { Sleep(200);wyswietlanie("Brak wynikow. \n\nAby powrocic do MENU, nacisnij dowolny przycisk.", 10); getch(); menu(liczba_osob, ludzie);}
        else{
        string wyborstr;
        int wybor;
        int wybor2;
        string wybor2str;

        wyswietlanie("\n\n\n 2 - Edycja osoby.", 10);
        wyswietlanie("\n 1 - Usuwanie osoby.",10);
        wyswietlanie("\n 0 - Powrot do menu. \n",10);
        wyswietlanie("\n\n\n Wybierz liczbe:\n",10);
        cin >> wyborstr;
        if(isnum(wyborstr)){wybor = conv(wyborstr);}
        switch(wybor){
            case 0:
                {wyswietlanie("\n Wracam do MENU... ",15);
                Sleep(200);
                menu(liczba_osob, ludzie); break;}
            case 1: {wyswietlanie("\n Wpisz numer z listy osoby, ktora chcesz usunac: ", 10);
            cin >> wybor2str;

             if(isnum(wybor2str)){ wybor2 = conv(wybor2str); if(wybor2 >licznik) {wyswietlanie("\nNiepoprawna liczba. Wracam do MENU.", 15); Sleep(1000); menu(liczba_osob, ludzie);}}

             else{ wyswietlanie("\nTo nie jest liczba, wracam do MENU.", 15); Sleep(1000); menu(liczba_osob, ludzie);}
            licznik=0;

            for(int i=0; i<liczba_osob; i++)
                        {
                            if(ludzie[i].ulica == ulica)
                            {
                            ++licznik;
                            if(licznik==wybor2)
                                {
                                    ludzie.erase(ludzie.begin()+i);
                                    liczba_osob--;
                                    break;
                                }
                            }
                        }
                Sleep(200);
                wyswietlanie("\n Osoba usunieta, aby powrocic do MENU, nacisnij dowolny przycisk.",10);
                getch();
                menu(liczba_osob, ludzie);
                break;
            }
             case 2:
              {  edytuj_ulica(liczba_osob, ludzie, ulica); }

            default: {wyswietlanie("Nie ma takiej opcji! Wracam do MENU. \n", 15);
            Sleep(1000);
            menu(liczba_osob, ludzie);
            break;}
        }
        }

        }

        else {wyswietlanie("Niepoprawna nazwa ulicy. Wprowadz dane jeszcze raz.", 15);
        Sleep(750);
        cout << endl;
        wprowadz_ulice2(liczba_osob, ludzie);
}
}
void wprowadz_nr2(int &liczba_osob, vector<osoba> &ludzie)
{   setcolor(15);
    string  nr_ul;
    int licznik = 0;
    int a;
    Sleep(150); wyswietlanie("5. Wprowadz numer domu: ", 10);
    cin >> nr_ul;
    if(isnum(nr_ul)){ a = conv(nr_ul);
        if(a>0 && a<99999){
             Sleep(250);
                    system("cls");
                    wyswietlanie("Wyszukane wyniki: \n \n", 15);
                    int z=1;
                    for(int i=0; i<liczba_osob; i++)
                    {
                        if(ludzie[i].nr_ul == a)
                        {
                        Sleep(200);
                        licznik++;
                         if(z%2)
                                {
                                    setcolor(14);
                                }
                            else
                                {
                                    setcolor(15);
                                }
                                z++;
                                    cout <<setw(3)<< licznik << ". " <<setw(13)<<ludzie[i].imie << " ";
                                    cout <<setw(13)<< ludzie[i].nazwisko << " ";
                                    cout <<setw(16)<< ludzie[i].miasto << " ";
                                    cout <<setw(15)<< ludzie[i].ulica << " ";
                                    cout <<setw(6)<< ludzie[i].nr_ul << " ";
                                    cout <<setw(1)<< ludzie[i].plec << " ";
                                    cout <<setw(3)<< ludzie[i].wiek << " ";
                                    cout <<setw(11)<< ludzie[i].pesel<< endl;
                        }
                    }
                    setcolor(15);
                   if(licznik==0) { Sleep(200);wyswietlanie("Brak wynikow. \n\nAby powrocic do MENU, nacisnij dowolny przycisk.", 10); getch(); menu(liczba_osob, ludzie);}
        else{
        string wyborstr;
        int wybor;
        int wybor2;
        string wybor2str;

        wyswietlanie("\n\n\n 2 - Edycja osoby.", 10);
        wyswietlanie("\n 1 - Usuwanie osoby.",10);
        wyswietlanie("\n 0 - Powrot do menu. \n",10);
        wyswietlanie("\n\n\n Wybierz liczbe:\n",10);
        cin >> wyborstr;
        if(isnum(wyborstr)){wybor = conv(wyborstr);}
        switch(wybor){
            case 0:
                {wyswietlanie("\n Wracam do MENU... ",15);
                Sleep(200);
                menu(liczba_osob, ludzie); break;}
            case 1: {wyswietlanie("\n Wpisz numer z listy osoby, ktora chcesz usunac: ", 10);
            cin >> wybor2str;

             if(isnum(wybor2str)){ wybor2 = conv(wybor2str); if(wybor2 >licznik) {wyswietlanie("\nNiepoprawna liczba. Wracam do MENU.", 15); Sleep(1000); menu(liczba_osob, ludzie);}}

             else{ wyswietlanie("\nTo nie jest liczba, wracam do MENU.", 15); Sleep(1000); menu(liczba_osob, ludzie);}
            licznik=0;

            for(int i=0; i<liczba_osob; i++)
                        {
                            if(ludzie[i].nr_ul == a)
                            {
                            ++licznik;
                            if(licznik==wybor2)
                                {
                                    ludzie.erase(ludzie.begin()+i);
                                    liczba_osob--;
                                    break;
                                }
                            }
                        }
                Sleep(200);
                wyswietlanie("\n Osoba usunieta, aby powrocic do MENU, nacisnij dowolny przycisk.",10);
                getch();
                menu(liczba_osob, ludzie);
                break;
            }
            case 2:
              {  edytuj_nr(liczba_osob, ludzie, a); }

            default: {wyswietlanie("Nie ma takiej opcji! Wracam do MENU. \n", 15);
            Sleep(1000);
            menu(liczba_osob, ludzie);
            break;}
        }
        }



        }
        else{wyswietlanie("Niepoprawny numer domu. Wprowadz poprawne dane.", 10);
        Sleep(750);
        cout << endl;
        wprowadz_nr2(liczba_osob, ludzie);}}

    else{wyswietlanie("To nie jest liczba. Wprowadz poprawne dane.", 10);
    Sleep(750);
    cout << endl;
    wprowadz_nr2(liczba_osob, ludzie);}
    }

void wprowadz_plec2(int &liczba_osob, vector<osoba> &ludzie)
{   setcolor(15);
    char plec;
    int licznik =0;
    wyswietlanie("6. Wprowadz plec (M/K): ", 15);
    cin >> plec;
        if(plec == 'k') {plec = 'K';}
        if(plec == 'm') {plec = 'M';}
    if(plec == 'M' || plec == 'K')
    {
                Sleep(20);
                    system("cls");
                    wyswietlanie("Wyszukane wyniki: \n \n", 15);
                    int z=1;
                    for(int i=0; i<liczba_osob; i++)
                    {
                        if(ludzie[i].plec == plec)
                        {
                        Sleep(25);
                        licznik++;
                         if(z%2)
                                {
                                    setcolor(14);
                                }
                            else
                                {
                                    setcolor(15);
                                }
                                z++;
                                    cout <<setw(3)<< licznik << ". " <<setw(13)<<ludzie[i].imie << " ";
                                    cout <<setw(13)<< ludzie[i].nazwisko << " ";
                                    cout <<setw(16)<< ludzie[i].miasto << " ";
                                    cout <<setw(15)<< ludzie[i].ulica << " ";
                                    cout <<setw(6)<< ludzie[i].nr_ul << " ";
                                    cout <<setw(1)<< ludzie[i].plec << " ";
                                    cout <<setw(3)<< ludzie[i].wiek << " ";
                                    cout <<setw(11)<< ludzie[i].pesel<< endl;
                        }
                    }
                    setcolor(15);
                             if(licznik==0) { Sleep(200);wyswietlanie("Brak wynikow. \n\nAby powrocic do MENU, nacisnij dowolny przycisk.", 10); getch(); menu(liczba_osob, ludzie);}
        else{
        string wyborstr;
        int wybor;
        int wybor2;
        string wybor2str;

        wyswietlanie("\n\n\n 2 - Edycja osoby.", 10);
        wyswietlanie("\n 1 - Usuwanie osoby.",10);
        wyswietlanie("\n 0 - Powrot do menu. \n",10);
        wyswietlanie("\n\n\n Wybierz liczbe:\n",10);
        cin >> wyborstr;
        if(isnum(wyborstr)){wybor = conv(wyborstr);}
        switch(wybor){
            case 0:
                {wyswietlanie("\n Wracam do MENU... ",15);
                Sleep(200);
                menu(liczba_osob, ludzie); break;}
            case 1: {wyswietlanie("\n Wpisz numer z listy osoby, ktora chcesz usunac: ", 10);
            cin >> wybor2str;

             if(isnum(wybor2str)){ wybor2 = conv(wybor2str); if(wybor2 >licznik) {wyswietlanie("\nNiepoprawna liczba. Wracam do MENU.", 15); Sleep(1000); menu(liczba_osob, ludzie);}}

             else{ wyswietlanie("\nTo nie jest liczba, wracam do MENU.", 15); Sleep(1000); menu(liczba_osob, ludzie);}
            licznik=0;

            for(int i=0; i<liczba_osob; i++)
                        {
                            if(ludzie[i].plec == plec)
                            {
                            ++licznik;
                            if(licznik==wybor2)
                                {
                                    ludzie.erase(ludzie.begin()+i);
                                    liczba_osob--;
                                    break;
                                }
                            }
                        }
                Sleep(200);
                wyswietlanie("\n Osoba usunieta, aby powrocic do MENU, nacisnij dowolny przycisk.",10);
                getch();
                menu(liczba_osob, ludzie);
                break;
            }
            case 2:
              {  edytuj_plec(liczba_osob, ludzie, plec); }

            default: {wyswietlanie("Nie ma takiej opcji! Wracam do MENU. \n", 15);
            Sleep(1000);
            menu(liczba_osob, ludzie);
            break;}
        }
        }


    }
    else
    {
        wyswietlanie("Niepoprawna plec. Wprowadz dane jeszcze raz.", 15);
        Sleep(750);
        cout << endl;
        wprowadz_plec2(liczba_osob, ludzie);
    }
}

void wprowadz_wiek2(int &liczba_osob, vector <osoba> &ludzie)
{   setcolor(15);
    string  wiek;
    int a;
    int licznik=0;
    Sleep(150); wyswietlanie("7. Wprowadz wiek: ", 10);
    cin >> wiek;
    if(isnum(wiek)){ a = conv(wiek);
        if(a>0 && a<300){
           system("cls");
                    wyswietlanie("Wyszukane wyniki: \n \n", 15);
                    int z=1;
                    for(int i=0; i<liczba_osob; i++)
                    {
                        if(ludzie[i].wiek == a)
                        {
                        Sleep(200);
                        licznik++;
                         if(z%2)
                                {
                                    setcolor(14);
                                }
                            else
                                {
                                    setcolor(15);
                                }
                                z++;
                                    cout <<setw(3)<< licznik << ". " <<setw(13)<<ludzie[i].imie << " ";
                                    cout <<setw(13)<< ludzie[i].nazwisko << " ";
                                    cout <<setw(16)<< ludzie[i].miasto << " ";
                                    cout <<setw(15)<< ludzie[i].ulica << " ";
                                    cout <<setw(6)<< ludzie[i].nr_ul << " ";
                                    cout <<setw(1)<< ludzie[i].plec << " ";
                                    cout <<setw(3)<< ludzie[i].wiek << " ";
                                    cout <<setw(11)<< ludzie[i].pesel<< endl;
                        }
                    }
                    setcolor(15);
                  if(licznik==0) { Sleep(200);wyswietlanie("Brak wynikow. \n\nAby powrocic do MENU, nacisnij dowolny przycisk.", 10); getch(); menu(liczba_osob, ludzie);}
        else{
        string wyborstr;
        int wybor;
        int wybor2;
        string wybor2str;

        wyswietlanie("\n\n\n 2 - Edycja osoby.", 10);
        wyswietlanie("\n 1 - Usuwanie osoby.",10);
        wyswietlanie("\n 0 - Powrot do menu. \n",10);
        wyswietlanie("\n\n\n Wybierz liczbe:\n",10);
        cin >> wyborstr;
        if(isnum(wyborstr)){wybor = conv(wyborstr);}
        switch(wybor){
            case 0:
                {wyswietlanie("\n Wracam do MENU...",15);
                Sleep(200);
                menu(liczba_osob, ludzie); break;}
            case 1: {wyswietlanie("\n Wpisz numer z listy osoby, ktora chcesz usunac: ", 10);
            cin >> wybor2str;

             if(isnum(wybor2str)){ wybor2 = conv(wybor2str); if(wybor2 >licznik) {wyswietlanie("\nNiepoprawna liczba. Wracam do MENU.", 15); Sleep(1000); menu(liczba_osob, ludzie);}}

             else{ wyswietlanie("\nTo nie jest liczba, wracam do MENU.", 15); Sleep(1000); menu(liczba_osob, ludzie);}
            licznik=0;

            for(int i=0; i<liczba_osob; i++)
                        {
                            if(ludzie[i].wiek == a)
                            {
                            ++licznik;
                            if(licznik==wybor2)
                                {
                                    ludzie.erase(ludzie.begin()+i);
                                    liczba_osob--;
                                    break;
                                }
                            }
                        }
                Sleep(200);
                wyswietlanie("\n Osoba usunieta, aby powrocic do MENU, nacisnij dowolny przycisk.",10);
                getch();
                menu(liczba_osob, ludzie);
                break;
            }
            case 2:
              {  edytuj_wiek(liczba_osob, ludzie, a); }

            default: {wyswietlanie("Nie ma takiej opcji! Wracam do MENU. \n", 15);
            Sleep(1000);
            menu(liczba_osob, ludzie);
            break;}
        }
        }

        }
        else{wyswietlanie("Niepoprawny wiek. Wprowadz poprawne dane.", 10);
        Sleep(750);
        cout << endl;
        wprowadz_wiek2(liczba_osob, ludzie);}}

    else{wyswietlanie("To nie jest liczba. Wprowadz poprawne dane.", 10);
    Sleep(750);
    cout << endl;
    wprowadz_wiek2(liczba_osob, ludzie);}
    }
void wprowadz_pesel2(int &liczba_osob, vector <osoba> &ludzie)
{   setcolor(15);
    string pesel;
    int licznik=0;
    wyswietlanie("Wprowadz pesel: ", 15);
    cin>> pesel;
    if(czypeselpoprawnyostateczniebool(pesel))
         {system("cls");
                    wyswietlanie("Wyszukane wyniki: \n \n", 15);
                    int z=1;
                    for(int i=0; i<liczba_osob; i++)
                    {
                        if(ludzie[i].pesel == pesel)
                        {
                        Sleep(200);
                        licznik++;
                         if(z%2)
                                {
                                    setcolor(14);
                                }
                            else
                                {
                                    setcolor(15);
                                }
                                z++;
                                    cout <<setw(3)<< licznik << ". " <<setw(13)<<ludzie[i].imie << " ";
                                    cout <<setw(13)<< ludzie[i].nazwisko << " ";
                                    cout <<setw(16)<< ludzie[i].miasto << " ";
                                    cout <<setw(15)<< ludzie[i].ulica << " ";
                                    cout <<setw(6)<< ludzie[i].nr_ul << " ";
                                    cout <<setw(1)<< ludzie[i].plec << " ";
                                    cout <<setw(3)<< ludzie[i].wiek << " ";
                                    cout <<setw(11)<< ludzie[i].pesel<< endl;
                        }
                    }
                    setcolor(15);
              if(licznik==0) { Sleep(200);wyswietlanie("Brak wynikow. \n\nAby powrocic do MENU, nacisnij dowolny przycisk.", 10); getch(); menu(liczba_osob, ludzie);}
        else{
        string wyborstr;
        int wybor;
        int wybor2;
        string wybor2str;

        wyswietlanie("\n\n\n 2 - Edycja osoby.", 10);
        wyswietlanie("\n 1 - Usuwanie osoby.",10);
        wyswietlanie("\n 0 - Powrot do menu. \n",10);
        wyswietlanie("\n\n\n Wybierz liczbe:\n",10);
        cin >> wyborstr;
        if(isnum(wyborstr)){wybor = conv(wyborstr);}
        switch(wybor){
            case 0:
                {wyswietlanie("\n Wracam do MENU...",15);
                Sleep(200);
                menu(liczba_osob, ludzie); break;}
            case 1: {wyswietlanie("\n Wpisz numer z listy osoby, ktora chcesz usunac: ", 10);
            cin >> wybor2str;

             if(isnum(wybor2str)){ wybor2 = conv(wybor2str); if(wybor2 >licznik) {wyswietlanie("\nNiepoprawna liczba. Wracam do MENU.", 15); Sleep(1000); menu(liczba_osob, ludzie);}}

             else{ wyswietlanie("\nTo nie jest liczba, wracam do MENU.", 15); Sleep(1000); menu(liczba_osob, ludzie);}
            licznik=0;

            for(int i=0; i<liczba_osob; i++)
                        {
                            if(ludzie[i].pesel == pesel)
                            {
                            ++licznik;
                            if(licznik==wybor2)
                                {
                                    ludzie.erase(ludzie.begin()+i);
                                    liczba_osob--;
                                    break;
                                }
                            }
                        }
                Sleep(200);
                wyswietlanie("\n Osoba usunieta, aby powrocic do MENU, nacisnij dowolny przycisk.",10);
                getch();
                menu(liczba_osob, ludzie);
                break;
            }
             case 2:
              {  edytuj_pesel(liczba_osob, ludzie, pesel); }

            default: {wyswietlanie("Nie ma takiej opcji! Wracam do MENU. \n", 15);
            Sleep(1000);
            menu(liczba_osob, ludzie);
            break;}
        }
        }


                                    }
    else{sprawdzampeselkomunikat(pesel); czypeselpoprawnyostateczniekomunikat(pesel);
    Sleep(1000);
    cout << endl;
    wprowadz_pesel2(liczba_osob, ludzie);}
}
void wyszukaj(int &liczba_osob, vector <osoba> &ludzie)
{
    int licznik=0;
    string imie;
    string nazwisko;
    string miasto;
    string ulica;
    int nr_ul;
    char plec;
    int wiek;
    string pesel;
    setcolor(15);
    system("cls");
    wyswietlanie("3. Wyszukiwanie \n \n", 10);
    wyswietlanie("Po czym chcesz wyszukac ludzi?\n",10);
    Sleep(150);
    wyswietlanie("1. Imie\n", 10);
    wyswietlanie("2. Nazwisko\n", 10);
    wyswietlanie("3. Miasto\n", 10);
    wyswietlanie("4. Ulica \n", 10);
    wyswietlanie("5. Numer domu \n", 10);
    wyswietlanie("6. Plec \n", 10);
    wyswietlanie("7. Wiek \n", 10);
    wyswietlanie("8. Pesel\n \n", 10);

    wyswietlanie("Wybierz cyfre: \n", 15);
    int wybor=getch();

    switch(wybor)
    {
        case 49: { wprowadz_imie2(liczba_osob, ludzie);
                    break;}
        case 50: { wprowadz_nazwisko2(liczba_osob, ludzie);
                    break;}
        case 51: { wprowadz_miasto2(liczba_osob, ludzie);
                    break;}
        case 52: { wprowadz_ulice2(liczba_osob, ludzie);
                    break;}
        case 53:  { wprowadz_nr2(liczba_osob, ludzie);
                    break;}
        case 54: {wprowadz_plec2(liczba_osob, ludzie);
            break;}
        case 55: {wprowadz_wiek2(liczba_osob, ludzie);
            break;}
        case 56: {wprowadz_pesel2(liczba_osob, ludzie);
            break;}

    }

}
void srednia_wiek(int &liczba_osob, vector<osoba> &ludzie)
{   float a,srednia;
    int z=0;
    setcolor(15);
    for(int i=0; i<liczba_osob; i++)
    {
       a=a+ludzie[i].wiek;
       z++;
    }
    wyswietlanie("\n Ludzi w bazie jest: ", 20);
    cout<<z;
    srednia=a/liczba_osob;
    wyswietlanie("\n Srednia wieku ludzi w bazie to ", 20);
    cout<<srednia;

    Sleep(1000);

}
void sredniawiekuoba(int &liczba_osob, vector<osoba> &ludzie)
{   float a=0,srednia=0;
    int z=0;
    setcolor(15);
    char znak1 = 178, znak2=219;
    for(int i=0; i<liczba_osob; i++)
    {
        if(ludzie[i].plec=='K')
        {
            a=a+ludzie[i].wiek;
            z++;
        }
       else
       {
           continue;
       }
    }
    srednia=a/z;
    wyswietlanie("\n Kobiet w bazie jest: ", 20);
    cout<<z<<endl<<" ";
    setcolor(13);
    for(int i=0;i<z;i++)
    {
       wyswietlaniechara(znak2,15);
    }
    setcolor(15);
    float a1=0,srednia1=0;
    int z1=0;
    for(int i=0; i<liczba_osob; i++)
    {
        if(ludzie[i].plec=='M')
        {
            a1=a1+ludzie[i].wiek;
            z1++;
        }
       else
       {
           continue;
       }
    }
    srednia1=a1/z1;
    wyswietlanie("\n Mezczyzn w bazie jest: ", 20);
    cout<<z1<<endl<<" ";
    setcolor(9);
    for(int i=0;i<z1;i++)
    {
        wyswietlaniechara(znak2,15);
    }
    setcolor(15);
    wyswietlanie("\n------------------------------------------------------------------------------------------------------------------",15);
    wyswietlanie("\n Srednia wieku kobiet to ", 20);
    cout<<srednia<<endl;
    cout<<" ";
    int f;
    f=srednia;
    setcolor(14);
    if((srednia-f)>=0.5)
    {
    for(int i=1;i<f+1; i++)
    {
        wyswietlaniechara(znak2,15);
    }
    }
    else
    {
        for(int i=1;i<f; i++)
    {
        wyswietlaniechara(znak2,15);
    }
    }
    setcolor(15);
    wyswietlanie("\n Srednia wieku mezczyzn to ", 20);
    cout<<srednia1<<endl;
    cout<<" ";
    int f1;
    f1=srednia1;
    setcolor(14);
    if((srednia1-f1)>=0.5)
    {
    for(int i=1;i<f1+1; i++)
    {
        wyswietlaniechara(znak2,15);
    }
    }
    else
    {
        for(int i=1;i<f1; i++)
    {
        wyswietlaniechara(znak2,15);
    }
    }
    setcolor(15);
    Sleep(1000);
}

void najmlodszy(int &liczba_osob, vector<osoba> &ludzie)
{   setcolor(15);
    int minimum=1000, z;
    for(int i=0; i<liczba_osob; i++)
    {
        if(ludzie[i].wiek<minimum)
        {
            minimum=ludzie[i].wiek;
            z=i;
        }
        else
        {
            continue;
        }
    }
    wyswietlanie("\n Najmlodsza osoba nazywa sie ", 15);
    wyswietlanie(ludzie[z].imie,15);
    cout<<" ";
    wyswietlanie(ludzie[z].nazwisko,15);
    wyswietlanie(" i ma ", 15);
    cout<<minimum;
    wyswietlanie(" lat ", 15);
    Sleep(1000);
}
void najstarszy(int &liczba_osob, vector<osoba> &ludzie)
{   setcolor(15);
    int maksimum=0, z;
    for(int i=0; i<liczba_osob; i++)
    {
        if(ludzie[i].wiek>maksimum)
        {
            maksimum=ludzie[i].wiek;
            z=i;
        }
        else
        {
            continue;
        }
    }
    wyswietlanie("\n Najstarsza osoba nazywa sie ", 15);
    wyswietlanie(ludzie[z].imie,15);
    cout<<" ";
    wyswietlanie(ludzie[z].nazwisko,15);
    wyswietlanie(" i ma ", 15);
    cout<<maksimum;
    wyswietlanie(" lat ", 15);
    Sleep(1000);
}
void najstarszygdziekolwiek(int &liczba_osob, vector<osoba> &ludzie)
{   setcolor(15);
    string miasto;
    wyswietlanie("\n Wprowadz miasto, z ktorego chcesz poznac najstarsza i najmlodsza osobe: ", 15);
    cin>>miasto;
    int maksimum=0, temp,licznik=0, licznik1=0,temp1, minimum=1000;

    if(sprawdz_imie(miasto))
    {
        for(int i=0; i<liczba_osob; i++)
        {   if(ludzie[i].miasto==miasto)
            {
                if(ludzie[i].wiek>maksimum)
                {
                    maksimum=ludzie[i].wiek;
                    temp=i;
                    licznik++;
                }
                else
                {
                    continue;
                }
            }
            else
            {
                continue;
            }
        }
    }
     else
     {
        wyswietlanie("Niepoprawne miasto, wracam do menu....", 10);
        cout << endl;
        Sleep(750);
        menu(liczba_osob, ludzie);
     }

        if(sprawdz_imie(miasto))
     {
        for(int i=0; i<liczba_osob; i++)
        {   if(ludzie[i].miasto==miasto)
            {
                if(ludzie[i].wiek<minimum)
                {
                    minimum=ludzie[i].wiek;
                    temp1=i;
                    licznik1++;
                }
                else
                {
                    continue;
                }
            }
            else
            {
                continue;
            }
        }
     }
     else
     {
        wyswietlanie("Niepoprawne miasto, wracam do menu...", 10);
        cout << endl;
        Sleep(750);
        menu(liczba_osob, ludzie);
     }
        if(temp1==temp)
        {
        wyswietlanie(" Najstarsza i najmlodsza jednoczenie osoba w ",15);
        wyswietlanie(miasto,15);
        wyswietlanie(" nazywa sie ",15);
        wyswietlanie(ludzie[temp].imie,15);
        cout<<" ";
        wyswietlanie(ludzie[temp].nazwisko,15);
        wyswietlanie(" i ma ",15);
        cout<<ludzie[temp].wiek;
        wyswietlanie(" lat ",15);
        }
        else
        {
        if(licznik==0) { Sleep(200);wyswietlanie(" Brak wynikow. \n\n Aby powrocic do MENU, nacisnij dowolny przycisk.", 10); getch(); menu(liczba_osob, ludzie);}
        {
        wyswietlanie(" Najstarsza osoba w ",15);
        wyswietlanie(miasto,15);
        wyswietlanie(" nazywa sie ",15);
        wyswietlanie(ludzie[temp].imie,15);
        cout<<" ";
        wyswietlanie(ludzie[temp].nazwisko,15);
        wyswietlanie(" i ma ",15);
        cout<<ludzie[temp].wiek;
        wyswietlanie(" lat ",15);
        }

        if(licznik1==0) { Sleep(200);wyswietlanie(" Brak wynikow. \n\nAby powrocic do MENU, nacisnij dowolny przycisk.", 10); getch(); menu(liczba_osob, ludzie);}
        {
        wyswietlanie("\n Najmlodsza osoba w ",15);
        wyswietlanie(miasto,15);
        wyswietlanie(" nazywa sie ",15);
        wyswietlanie(ludzie[temp1].imie,15);
        cout<<" ";
        wyswietlanie(ludzie[temp1].nazwisko,15);
        wyswietlanie(" i ma ",15);
        cout<<ludzie[temp1].wiek;
        wyswietlanie(" lat ",15);
        }
        }

}

void statystyki(int &liczba_osob, vector<osoba> &ludzie)
{   setcolor(15);
    system("cls");
    wyswietlanie("5. Statystyki \n \n", 10);

    string napis = "Wczytuje statystyki, prosze czekac...";

    wyswietlanie(napis, 15);
    Sleep(750);

    system("cls");
    setcolor(13);
    wyswietlanie(" ______    ______    ________    ______    __    __    ______    ______    __    __    __   __    __ \n", 7);
    wyswietlanie("|  ____|  |__  __|  |   __   |  |__  __|  |  |  |  |  |  ____|  |__  __|  |  |  |  |  |  | / /   |  |\n", 7);
    setcolor(15);
    wyswietlanie("| |____     |  |    |  |__|  |    |  |    |  |__|  |  | |____     |  |    |  |__|  |  |  |/ /_   |  |\n", 7);
    wyswietlanie("|____  |    |  |    |   __   |    |  |    |__    __|  |____  |    |  |    |__    __|  |   __  |  |  |\n", 7);
    setcolor(11);
    wyswietlanie(" ____| |    |  |    |  |  |  |    |  |       |  |      ____| |    |  |       |  |     |  |  | |  |  |\n", 7);
    wyswietlanie("|______|    |__|    |__|  |__|    |__|       |__|     |______|    |__|       |__|     |__|  |_|  |__|\n", 7);
    setcolor(15);
    srednia_wiek(liczba_osob, ludzie);
    wyswietlanie("\n------------------------------------------------------------------------------------------------------------------",15);
    sredniawiekuoba(liczba_osob, ludzie);
    wyswietlanie("\n------------------------------------------------------------------------------------------------------------------",15);
    najmlodszy(liczba_osob, ludzie);
    najstarszy(liczba_osob, ludzie);
    wyswietlanie("\n------------------------------------------------------------------------------------------------------------------",15);    najstarszygdziekolwiek(liczba_osob,ludzie);

    Sleep(2000);
    wyswietlanie("\n\n Aby wrocic do MENU, nacisnij dowolny przycisk", 10);
    getch();
    menu(liczba_osob, ludzie);

}
bool sortimie(const osoba& a, const osoba& b)
{
    return a.imie<b.imie;
}
bool sortnazwisko(const osoba& a, const osoba& b)
{
    if(a.nazwisko==b.nazwisko){ return sortimie(a,b);}
    return a.nazwisko<b.nazwisko;
}
bool sortwiekrosnaco(const osoba& a, const osoba& b)
{
    return a.wiek<b.wiek;
}

bool sortwiekmalejaco(const osoba& a, const osoba& b)
{
    return a.wiek>b.wiek;
}

bool sortpleck(const osoba& a, const osoba& b)
{
    return a.plec<b.plec;
}

bool sortplecm(const osoba& a, const osoba& b)
{
    return a.plec>b.plec;
}

void sortwszystkie (int &liczba_osob, vector <osoba> &ludzie)
{
    setcolor(15);
    system("cls");
    wyswietlanie("6. Sortowanie \n \n", 10);

    string napis = "Wczytuje sortowanie, prosze czekac...";

    wyswietlanie(napis, 15);
    Sleep(750);

    system("cls");
wyswietlanie("6. Sortowanie: ", 15);
wyswietlanie("\n\nWybierz metode sortowania: \n \n", 10);
wyswietlanie("1. Sortuj po nazwisku \n", 10);
wyswietlanie("2. Sortuj po imieniu \n", 10);
wyswietlanie("3. Sortuj po wieku \n", 10);
wyswietlanie("4. Sortuj po plci \n", 10);

    int wybor = getch();
if(wybor=='1'||wybor=='2'||wybor=='3'||wybor=='4')
    {
        if(wybor=='1')
        {
        cout << "1";
         Sleep(250);
        sort(ludzie.begin(), ludzie.end(), sortnazwisko);}
    else
        if(wybor=='2')
        {cout << "2";
           Sleep(250);
            sort(ludzie.begin(), ludzie.end(), sortimie);}
        else
            if(wybor=='3')
            {
                cout << "3";
                Sleep(250);
                cout << endl;
                cout << endl;
                wyswietlanie("Wybierz: \n", 10);
                wyswietlanie("1. Sortuj rosnaco \n", 10);
                wyswietlanie("2. Sortuj malejaco \n", 10);

                int wybor2 = getch();

                if(wybor2=='1')
                {
                cout << "1";
                    sort(ludzie.begin(), ludzie.end(), sortwiekrosnaco);}
                else if(wybor2=='2')
                    {
                    cout << "2";
                        sort(ludzie.begin(), ludzie.end(), sortwiekmalejaco);}

                else
                    {wyswietlanie("Nieprawidlowy numer, wybierz jeszcze raz.", 10);
                    Sleep(1000);
                    system("cls");
                    cout << endl;

                    sortwszystkie(liczba_osob, ludzie);
                    }

            }
            else
                if(wybor=='4')
                {
                    Sleep(250);
                    cout << endl;
                    cout << endl;
                    wyswietlanie("Wybierz: \n", 10);
                    wyswietlanie("1. Najpierw kobiety \n", 10);
                    wyswietlanie("2. Najpierw mezczyzni \n", 10);

                    int wybor3 = getch();
                    if(wybor3=='1')
                    {
                    cout << endl;

                        sort(ludzie.begin(), ludzie.end(), sortpleck);}
                    else
                       {
                           cout << endl;

                        sort(ludzie.begin(), ludzie.end(), sortplecm);}
                }


}
else {wyswietlanie("Nieprawidlowy numer, wybierz jeszcze raz.", 10);
                    Sleep(1000);
                    system("cls");
                    cout << endl;
                    sortwszystkie(liczba_osob, ludzie);
                    }

    Sleep(500);
    system("cls");
    wyswietlanie("Posortowano pomyslnie.\n",10);
    Sleep(500);
    int z=1;
    cout <<setw(4)<<"Nr.";
    cout <<setw(14)<<"Imie";
    cout <<setw(14)<<"Nazwisko";
    cout <<setw(17)<<"Miasto";
    cout <<setw(16)<<"Ulica";
    cout <<setw(8)<<"Nr.ul.";
    cout <<setw(6)<<"Plec";
    cout <<setw(6)<<"Wiek";
    cout <<setw(12)<<"Pesel"<< endl;
    cout << endl;
     for(int i=0;i<liczba_osob;i++)
     {  Sleep(20);
         if(z%2)
        {
            setcolor(11);
        }
        else
        {
            setcolor(15);
        }
        cout <<setw(3)<< i+1 << ". ";
        cout<<setw(13)<<ludzie[i].imie << " ";
        cout <<setw(13)<< ludzie[i].nazwisko << " ";
        cout <<setw(16)<< ludzie[i].miasto << " ";
        cout <<setw(15)<< ludzie[i].ulica << " ";
        cout <<setw(7)<< ludzie[i].nr_ul << " ";
        cout <<setw(5)<< ludzie[i].plec << " ";
        cout <<setw(5)<< ludzie[i].wiek << " ";
        cout <<setw(11)<< ludzie[i].pesel<< endl;
        z++;
     }
     setcolor(15);
     wyswietlanie("\n\nAby powrocic do MENU, nacisnij dowolny przycisk.", 10);
     getch(); menu(liczba_osob, ludzie);
}
void zapisywanie(int &liczba_osob, vector <osoba> &ludzie)
{
      ofstream file("dane.txt");
    for(int i=0; i<liczba_osob; i++)
    {
        file << ludzie[i].imie<<"\t";
        file << ludzie[i].nazwisko<<"\t";
        file << ludzie[i].miasto<<"\t";
        file << ludzie[i].ulica<<"\t";
        file << ludzie[i].nr_ul<<"\t";
        file << ludzie[i].plec<<"\t";
        file << ludzie[i].wiek<<"\t";
        file << ludzie[i].pesel;
        file << endl;
    }
}
void usuwanie(int &liczba_osob, vector <osoba> &ludzie)
{
        ofstream plik( "dane.txt" );
        plik << "";
        Sleep(500);


}
void zapisywanietekst(int &liczba_osob, vector <osoba> &ludzie)
{
    int wybor=getch();
    switch(wybor)
    {
    case '1':   {wyswietlanie(" Wybrano Tak. Zapisuje...", 15);
                zapisywanie(liczba_osob,ludzie);break;
                }
    case '2':   {wyswietlanie(" Wybrano Nie. Wracam do Menu...", 15);
                Sleep(500);
                menu(liczba_osob, ludzie);break;
                }
    default:    {wyswietlanie("\nNie ma takiej opcji!, Wpisz poprawna cyfre: \n", 10);
                zapisywanietekst(liczba_osob, ludzie);
                }
    }

wyswietlanie("\n Zapisywanie pliku powiodlo sie.", 10);
    Sleep(500);
wyswietlanie("\n\nAby powrocic do MENU, nacisnij dowolny przycisk.", 10);
     getch(); menu(liczba_osob, ludzie);
}
void usuwanietekst(int &liczba_osob, vector <osoba> &ludzie)
{
    setcolor(15);
    int wybor=getch();
    switch(wybor)
    {
    case '1':   {wyswietlanie(" Wybrano Tak. Usuwam...", 15);
                usuwanie(liczba_osob,ludzie);break;
                }
    case '2':   {wyswietlanie(" Wybrano Nie. Wracam do Menu...", 15);
                Sleep(500);
                menu(liczba_osob, ludzie);break;
                }
    default:    {wyswietlanie("\nNie ma takiej opcji!, Wpisz poprawna cyfre: \n", 10);
                usuwanietekst(liczba_osob, ludzie);
                }
    }

wyswietlanie("\n Usuwanie pliku powiodlo sie.", 10);
    Sleep(500);
wyswietlanie("\n\nAby powrocic do MENU, nacisnij dowolny przycisk.", 10);
     getch(); menu(liczba_osob, ludzie);
}

void zapisywaniewybor(int &liczba_osob, vector <osoba> &ludzie)
{
    setcolor(15);
    int wybor=getch();
    switch(wybor)
    {
        case '1':   {   system("cls");
                        wyswietlanie(" Czy na pewno chcesz zapisac? \n", 10);
                        setcolor(2);
                        wyswietlanie(" 1. TAK          ",10);setcolor(4);wyswietlanie("       2.NIE \n", 10);
                        setcolor(15);
                        zapisywanietekst(liczba_osob,ludzie);break;
                    }


        case '2': { system("cls");
                    wyswietlanie(" Czy na pewno chcesz usunac plik? Tego dzialania nie bedzie mozna cofnac \n", 10);
                    setcolor(2);
                    wyswietlanie(" 1. TAK          ",10);setcolor(4);wyswietlanie("       2.NIE \n", 10);
                    setcolor(15);
                    usuwanietekst(liczba_osob,ludzie);break;
                    }
        default: {wyswietlanie("\nNie ma takiej opcji!, Wpisz poprawna cyfre: \n", 10);
                zapisywaniewybor(liczba_osob, ludzie);
            }
    }

}
void zapisywanieusuwanie (int &liczba_osob, vector <osoba> &ludzie)
{   setcolor(15);
    system("cls");
    wyswietlanie("4. Zapisywanie/Usuwanie \n \n", 10);

    string napis = "Wczytuje zapisywanie/usuwanie, prosze czekac...";

    wyswietlanie(napis, 15);
    Sleep(750);
    system("cls");
    wyswietlanie("4. Zapisywanie/usuwanie: ", 15);
    wyswietlanie("\n Chcesz zapisac czy usunac plik?\n ", 15);
    wyswietlanie("1.Zapisywanie           2.Usuwanie ", 15);
    zapisywaniewybor(liczba_osob,ludzie);

}
void archiwizacja(int &liczba_osob, vector <osoba> &ludzie)
{
    Sleep(750);
    setcolor(15);
    system("cls");
    wyswietlanie(" Jak chcesz nazwac swoj plik?\n",15);
    wyswietlanie(" Wskazowka: nazwa musi konczyc sie rozszerzeniem. Przykladowe rozszerzenia to .txt, .doc, .docx\n",15);
    wyswietlanie(" W przypadku nie dopisania rozszerzenia archiwizacja i tak sie powiedzie, lecz nie bedzie mozna odczytac pilku \n ",15);
    string nazwa;
    getline(cin,nazwa);
    ofstream file(nazwa.c_str());
    for(int i=0; i<liczba_osob; i++)
    {
        file << ludzie[i].imie<<"\t";
        file << ludzie[i].nazwisko<<"\t";
        file << ludzie[i].miasto<<"\t";
        file << ludzie[i].ulica<<"\t";
        file << ludzie[i].nr_ul<<"\t";
        file << ludzie[i].plec<<"\t";
        file << ludzie[i].wiek<<"\t";
        file << ludzie[i].pesel;
        file << endl;
    }
}


void archiwizacjawybor(int &liczba_osob, vector <osoba> &ludzie)
{   setcolor(15);
    system("cls");
    wyswietlanie("7. Archiwizacja \n \n", 10);

    string napis = "Wczytuje archiwizacje, prosze czekac...";

    wyswietlanie(napis, 15);
    Sleep(750);
    system("cls");
    wyswietlanie("7. Archwizacja: ", 15);
    wyswietlanie("\n Czy na pewno chcesz archiwizowac? \n", 10);
    setcolor(2);
    wyswietlanie(" 1. TAK          ",10);setcolor(4);wyswietlanie("       2.NIE \n", 10);
    setcolor(15);
    int wybor=getch();
    switch(wybor)
    {
    case '1':   wyswietlanie(" Wybrano Tak. Przenosze do wyboru nazwy pliku...", 15);
                archiwizacja(liczba_osob,ludzie);break;
    case '2':   wyswietlanie(" Wybrano Nie. Wracam do Menu...", 15);
                Sleep(500);
                menu(liczba_osob, ludzie);break;
    default:    wyswietlanie("\nNie ma takiej opcji!, wracam do menu... \n", 10);
                Sleep(500);
                menu(liczba_osob, ludzie);


    }

wyswietlanie("\n Archiwizacja pliku powiodla sie.", 10);
    Sleep(500);
wyswietlanie("\n\nAby powrocic do MENU, nacisnij dowolny przycisk.", 10);
     getch(); menu(liczba_osob, ludzie);
}




void wybieranie(int &liczba_osob, vector <osoba> &ludzie){
    int wybor = getch();
    switch(wybor)
{   case 27:  wyswietlanie("\n\nOpuszczam program.", 15); Sleep(250); exit(0);
    case '0': cout << "0"; Sleep(250); wyswietlanie("\n\nOpuszczam program.", 15); Sleep(250);  exit(0);
    case '1': cout << "1"; Sleep(250); wyswietl(liczba_osob, ludzie); break;
    case '2': cout << "2"; Sleep(250); wprowadz(liczba_osob, ludzie); break;
    case '3': cout << "3"; Sleep(250); wyszukaj(liczba_osob, ludzie); break;
    case '4': cout << "4"; Sleep(250); zapisywanieusuwanie(liczba_osob, ludzie); break;
    case '5': cout << "5"; Sleep(250); statystyki(liczba_osob, ludzie); break;
    case '6': cout << "6"; Sleep(250); sortwszystkie(liczba_osob, ludzie); break;
    case '7': cout << "7"; Sleep(250); archiwizacjawybor(liczba_osob,ludzie); break;
    setcolor(15);
    default: {wyswietlanie("\nNie ma takiej opcji!, Wpisz poprawna cyfre: \n", 10);
                wybieranie(liczba_osob, ludzie);
            }
}
}

void menu(int &liczba_osob, vector<osoba> &ludzie)
{
    char z200=200,z201=201,z202=202,z203=203,z204=204,z205=205,z206=206,z182=182,z185=185,z186=186,z187=187,z188=188;
    system ("cls");
    cout << endl;
setcolor(12);    cout << "           ------------------------------------------     ";setcolor(11);cout<<z201<<z205<<z205<<z205<<z205<<z205<<z205<<endl;setcolor(7);
setcolor(12);    cout << "           ------------------";setcolor(15);cout<<" MENU ";setcolor(12);cout<<"------------------     ";setcolor(11);cout<<z186<< endl;setcolor(7);
setcolor(12);    cout << "           ------------------------------------------     ";setcolor(11);cout<<z204<<z205<<z205<<z205<<z205<<z205<< endl;setcolor(7);
setcolor(12);    cout << "           ---------";setcolor(15);cout<<" 0. Wyjscie z programu ";setcolor(12);cout<<"----------     ";setcolor(11);cout<<z186<< "       ILIP"<<endl;setcolor(7);
setcolor(12);    cout << "           ------------------------------------------     ";setcolor(11);cout<<z186<< endl;setcolor(7);
setcolor(12);    cout << "           --------";setcolor(15);cout<<" 1. Wyswietl baze danych ";setcolor(12);cout<<"---------     ";setcolor(12);cout<<z201<<z205<<z205<<z205<<z205<<z205<<z187<< endl;setcolor(7);
setcolor(12);    cout << "           ------------------------------------------     ";setcolor(12);cout<<z186<<"     "<<z186<< endl;setcolor(7);
setcolor(12);    cout << "           ------------";setcolor(15);cout<<" 2. Wprowadz dane ";setcolor(12);cout<<"------------     ";setcolor(12);cout<<z204<<z205<<z205<<z205<<z205<<z205<<z185<< endl;setcolor(7);
setcolor(12);    cout << "           ------------------------------------------     ";setcolor(12);cout<<z186<<"     "<<z186<<" LEKSANDRA"<< endl;setcolor(7);
setcolor(12);    cout << "           -----";setcolor(15);cout<<" 3. Wyszukaj/Edytuj/Usun dane ";setcolor(12);cout<<"-------     ";setcolor(12);cout<<z186<<"     "<<z186<< endl;setcolor(7);
setcolor(12);    cout << "           ------------------------------------------     ";setcolor(14);cout<<z201<<z187<<"   "<<z201<<z187<< endl;setcolor(7);
setcolor(12);    cout << "           -----------";setcolor(15);cout<<" 4. Zapisz/Usun dane ";setcolor(12);cout<<"----------     ";setcolor(14);cout<<z186<<z200<<z187<<" "<<z201<<z188<<z186<<endl;setcolor(7);
setcolor(12);    cout << "           ------------------------------------------     ";setcolor(14);cout<<z186<<" "<<z200<<z205<<z188<<" "<<z186<< endl;setcolor(7);
setcolor(12);    cout << "           --------------";setcolor(15);cout<<" 5. Statystki ";setcolor(12);cout<<"--------------     ";setcolor(14);cout<<z186<<"     "<<z186<< " ATEUSZ"<<endl;setcolor(7);
setcolor(12);    cout << "           ------------------------------------------     ";setcolor(14);cout<<z186<<"     "<<z186<< endl;setcolor(7);
setcolor(12);    cout << "           -------------";setcolor(15);cout<<" 6. Sortuj dane ";setcolor(12);cout<<"-------------   ";setcolor(15);cout<<" ,-.___,-.  "<< endl;setcolor(7);
setcolor(12);    cout << "           ------------------------------------------   ";setcolor(15);cout<<" \\_/_ _\\_/"<< endl;setcolor(7);
setcolor(12);    cout << "           -----------";setcolor(15);cout<<" 7. Archiwizuj dane ";setcolor(12);cout<<"-----------   ";setcolor(15);cout<<"   )O_O(    "<< endl;setcolor(7);
setcolor(12);    cout << "           ------------------------------------------   ";setcolor(15);cout<<"  { (_) } FAM"<< endl;setcolor(7);
setcolor(12);    cout << "                                                         ";setcolor(15);cout<<"  `-^-'    "<< endl;setcolor(7);
setcolor(12);    cout << "           -----------------------------------------   ";setcolor(15);cout<<"   |\\   /|"<< endl;setcolor(7);
setcolor(12);    cout << "          |         ";setcolor(15);cout<<"Wpisz odpowiednia cyfre.";setcolor(12);cout<<"        |  ";setcolor(15);cout<<"   | \\_/ |"<< endl;setcolor(7);
setcolor(12);    cout << "          |                                         |  ";setcolor(15);cout<<"   { O O } "<< endl;setcolor(7);
setcolor(12);    cout << "          |        ";setcolor(15);cout<<"ESC - Wyjscie z programu.";setcolor(12);cout<<"        |   ";setcolor(15);cout<<"   ==Y==  MAF"<< endl;setcolor(7);
setcolor(12);    cout << "           -----------------------------------------    ";setcolor(15);cout<<"    '-'   "<< endl;setcolor(7);



    wybieranie(liczba_osob, ludzie);
}


int main()
{
    ifstream file("dane.txt");
    vector <osoba> ludzie;
    string linia;
    int liczba_osob=0;
    while(getline(file, linia))
       {
            liczba_osob++;
       }
        file.clear();
        file.seekg(0, file.beg);
    osoba kolejna;
    for(int i=0; i<liczba_osob; i++)
    {
        file >> kolejna.imie;
        file >> kolejna.nazwisko;
        file >> kolejna.miasto;
        file >> kolejna.ulica;
        file >> kolejna.nr_ul;
        file >> kolejna.plec;
        file >> kolejna.wiek;
        file >> kolejna.pesel;
        ludzie.push_back(kolejna);
    }
setcolor(15);
start(liczba_osob, ludzie);





    return 0;
}

bool liczniksumykontrolnej(string pesel)
{   int sumakontrolna;
  sumakontrolna=((pesel[0]-48)*9+(pesel[1]-48)*7+(pesel[2]-48)*3+(pesel[3]-48)*1+(pesel[4]-48)*9+(pesel[5]-48)*7+(pesel[6]-48)*3+(pesel[7]-48)*1+(pesel[8]-48)*9+(pesel[9]-48)*7);
  if(sumakontrolna%10==(pesel[10]-48))
  {
      return true;
  }
}
bool czyrokjestprzestepny(string pesel)
{
    if(pesel[1]=='0'||pesel[1]=='4'||pesel[1]=='8')
    {
        if(pesel[0]=='0'||pesel[0]=='2'||pesel[0]=='4'||pesel[0]=='6'||pesel[0]=='8')
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    else
    {
         if(pesel[1]=='2'||pesel[1]=='6')
         {
                if(pesel[0]=='1'||pesel[0]=='3'||pesel[0]=='5'||pesel[0]=='7'||pesel[0]=='9')
                {
                    return true;
                }
                else
                {
                    return false;
                }
         }
         else
         {
                return false;
         }
    }
}
bool czymiesiacmatyledni(string pesel)
{
    if(pesel[2]=='0'||pesel[2]=='2'||pesel[2]=='8')
    {
        if(pesel[3]=='1'||pesel[3]=='3'||pesel[3]=='5'||pesel[3]=='7'||pesel[3]=='8')
        {
            if(pesel[4]=='0'||pesel[4]=='1'||pesel[4]=='2'||pesel[4]=='3')
            {
                if(pesel[4]=='3')
                {
                    if(pesel[5]=='0'||pesel[5]=='1')
                    {
                        return true;
                    }
                    else
                    {
                        return false;
                    }
                }
                else
                {
                    return true;
                }
            }
            else
            {
                return false;
            }

        }
        else
        {
            if(pesel[3]=='4'||pesel[3]=='6'||pesel[3]=='9')
            {
                if(pesel[4]=='0'||pesel[4]=='1'||pesel[4]=='2'||pesel[4]=='3')
                {
                    if(pesel[4]=='3')
                    {
                        if(pesel[5]=='0')
                        {
                            return true;
                        }
                        else
                        {
                            return false;
                        }
                    }
                    else
                    {
                        return true;
                    }
                }
                else
                {
                    return false;
                }
            }
            else
            {
                if(pesel[3]=='2'&&(czyrokjestprzestepny(pesel)==1))
                {
                    if(pesel[4]=='0'||pesel[4]=='1'||pesel[4]=='2')
                    {
                        return true;
                    }
                    else
                    {
                        return false;
                    }
                }
                else
                {
                    if(pesel[3]=='2'&&(czyrokjestprzestepny(pesel)==0))
                    {
                        if(pesel[4]=='0'||pesel[4]=='1'||pesel[4]=='2')
                        {
                            if(pesel[4]=='2')
                            {
                                if(pesel[5]=='9')
                                {
                                    return false;
                                }
                                else
                                {
                                    return true;
                                }
                            }
                            else
                            {
                                return true;
                            }
                        }
                        else
                        {
                            return false;
                        }
                    }
                }
            }
        }
    }
    else
    {
        if(pesel[2]=='1'||pesel[2]=='3'||pesel[2]=='9')
        {
            if(pesel[3]=='0'||pesel[3]=='2')
            {
                if(pesel[4]=='0'||pesel[4]=='1'||pesel[4]=='2'||pesel[4]=='3')
                {
                    if(pesel[4]=='3')
                    {
                        if(pesel[5]=='0'||pesel[5]=='1')
                        {
                            return true;
                        }
                        else
                        {
                            return false;
                        }
                    }
                    else
                    {
                        return true;
                    }
                }
                else
                {
                    return false;
                }
            }
            else
            {
                if(pesel[3]=='1')
                {
                    if(pesel[4]=='0'||pesel[4]=='1'||pesel[4]=='2'||pesel[4]=='3')
                    {
                        if(pesel[4]=='3')
                        {
                            if(pesel[5]=='0')
                            {
                                return true;
                            }
                            else
                            {
                                return false;
                            }
                        }
                        else
                        {
                            return true;
                        }
                    }
                    else
                    {
                        return false;
                    }
                }
                else
                {
                    return false;
                }
            }
        }
        else
        {
            return false;
        }
    }
}

bool czyjesttakimiesiac(string pesel)
{
    if(pesel[2]=='1'||pesel[2]=='3'||pesel[2]=='9')
    {
        if(pesel[3]=='0'||pesel[3]=='1'||pesel[3]=='2')
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    else
    {
        return true;
    }
}
bool czyjesttakimiesiacuzupelnienie(string pesel)
{
    if(pesel[4]=='0'&&pesel[5]=='0')
    {
        return false;
    }
    else
    {
        return true;
    }
}
void sprawdzampeselkomunikat(string pesel)
{
    if(pesel.length()!=11)
    {
        cout<<"Zla liczba cyfr (Powinno ich byc 11)";
    }
    else
    {
        if(pesel[2]!='0'&&pesel[2]!='1'&&pesel[2]!='2'&&pesel[2]!='3'&&pesel[2]!='8'&&pesel[2]!='9')
        {
            cout<<"Zla liczba miesiaca";
        }
        else
        {   if(pesel[4]!='0'&&pesel[4]!='1'&&pesel[4]!='2'&&pesel[4]!='3')
            {
                cout<<"Zla liczba dnia miesiaca";
            }
            else
            {
                if(liczniksumykontrolnej(pesel)==0)
                {
                     cout<<"Zla cyfra kontrolna";
                }
            }
        }
    }
}
bool sprawdzampeselbool(string pesel)
{
    if(pesel.length()!=11)
    {
        return false;
    }
    else
    {
        if(pesel[2]!='0'&&pesel[2]!='1'&&pesel[2]!='2'&&pesel[2]!='3'&&pesel[2]!='8'&&pesel[2]!='9')
        {
            return false;
        }
        else
        {   if(pesel[4]!='0'&&pesel[4]!='1'&&pesel[4]!='2'&&pesel[4]!='3')
            {
                return false;
            }
            else
            {
               if(liczniksumykontrolnej(pesel))
                {
                    return true;
                }
                else
                {
                    return false;
                }
            }
        }
    }
}
bool czypeselpoprawnyostateczniebool (string pesel)
{
    if(sprawdzampeselbool(pesel)&&czyjesttakimiesiac(pesel)&&czymiesiacmatyledni(pesel)&&czyjesttakimiesiacuzupelnienie(pesel))
    {
        return true;
    }
    else
    {
        return false;
    }
}

void czypeselpoprawnyostateczniekomunikat (string pesel)
{   if(sprawdzampeselbool(pesel)==1)
        {
            if(czyjesttakimiesiac(pesel)==0)
            {
                cout<<"Nie ma takiego miesiaca";
            }
            else
            {
                if(czymiesiacmatyledni(pesel)==0)
                {
                    cout<<"Ten miesiac nie ma tak wiele dni";
                }
                else
                {
                    if(czyjesttakimiesiacuzupelnienie(pesel)==0)
                    {
                        cout<<"Miesiac nie moze miec 0 dni";
                    }
                }
            }
        }
}









