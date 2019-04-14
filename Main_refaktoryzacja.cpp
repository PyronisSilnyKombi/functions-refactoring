#include "Nag³ówek_refaktoryzacja.h"

int main()
{
	int wybor, roznica = 0;
	int tablica[100], ilosc_spacji_w_zdaniu;
	int ilosc_elementow;
	char napis[100];
	string napis_s;

	for (;;) {
		int wybor;
		wybor = menu();

		switch (wybor)
		{
		case 1:
		{
			cout.setf(ios::fixed, ios::floatfield);
			cout.precision(2);
			cout << "1 - Obliczanie objetosci prostopadloscianu do 2 miejsc po przecinku" << endl;
			cout << "Podaj trzy dlugosci bokow prostopadloscianu a, b i c : ";
			float a, b, c;
			cin >> a >> b >> c;
			cout << "Wyswietlane za pomoca cout" << endl;
			cout << "Objetosc wynosi : " << objetosc(a, b, c) << endl;
			cout << "Wyswietlane za pomoca printf" << endl;
			printf_s("Objetosc wynosi : %.2f\n", objetosc(a, b, c));
			system("pause");
			system("cls");
			break;
		}
		case 2:
		{
			cout << "2 - Obliczanie pola i obwodu kola" << endl;
			float r;
			cout << "Podaj promien kola : ";
			cin >> r;
			cout << "Pole kola wynosi : " << pole_kola(r) << endl;
			cout << "Obwod kola wynosi : " << obw_kola(r) << endl;
			system("pause");
			system("cls");
			break;
		}
		case 3:
		{
			cout << "3 - Obliczabie odleglosci pomiecdzy dwoma punktami w ukladzie trzech wspolrzednych" << endl;
			int x_a, y_a, z_a, x_b, y_b, z_b;
			cout << "Podaj 3 calkowite wspolrzedne punktu A : ";
			cin >> x_a >> y_a >> z_a;
			cout << "Podaj 3 calkowite wspolrzedne punktu B : ";
			cin >> x_b >> y_b >> z_b;
			cout << "Odleglosc miedzy punktami wynosi : " << odleglosc_miedzy_pkt(x_a, y_a, z_a, x_b, y_b, z_b) << endl;
			system("pause");
			system("cls");
			break;
		}
		case 4:
		{
			cout << "4 - Liczenie obwodu prostokata" << endl;
			float a, b;
			cout << "Podaj dwa boki prostokata : ";
			cin >> a >> b;
			cout << "Pole prostokata wynosi " << pole_prostokata(a, b) << ", a obwod " << obw_prostokata << endl;
			system("pause");
			system("cls");
			break;
		}
		case 5:
		{
			cout << "5 - Obliczanie pola i obwodu w trojkacie, oraz jego katow" << endl;
			float a, b, c;
			cout << "Podaj trzy boki trojkata : ";
			cin >> a >> b >> c;
			cout << "Pole trojkata : " << pole_trojkata(a, b, c) << endl;
			cout << "Obwod trojkata : " << obw_trojkata(a, b, c) << endl;
			cout << "Katy w stopniach w tym trojkacie wynosza : " << kat(a, b, c) << ", " << kat(b, c, a) << ", " << kat(c, a, b) << endl;
			system("pause");
			system("cls");
			break;
		}
		case 6:
		{
			cout << "6 - Zamiana liczby calkowitej dziesietnej na szesnastkowa i osemkowa" << endl;
			int liczba;
			cout << "Podaj liczbe calkowita dziesietna : ";
			cin >> liczba;
			cout << "Liczba w systemie dziesietnym : " << liczba << endl;
			cout.setf(ios::oct, ios::basefield);
			cout << "Liczba w systemie osemkowym (cout) : " << liczba << endl;
			printf_s("Liczba w systemie osemkowym (printf) : %o\n", liczba);
			cout.setf(ios::hex, ios::basefield);
			cout << "Liczba w systemie szesnastkowym (cout) : " << liczba << endl;
			printf_s("Liczba w systemie osemkowym (printf) : %x\n", liczba);
			system("pause");
			system("cls");
			break;
		}
		case 7:
		{
			int wybor1;
			cout << "7 - Dane uzytkownika" << endl;
			cout << "Jak ma zostac zrealizowane to polecenie?" << endl;
			cout << "1 - cout" << endl;
			cout << "2 - printf" << endl;
			cout << "Wprowadz cyfre : ";
			cin >> wybor1;
			if (wybor1 = 1) {
				dane_uzytkownika_cout();
			}
			else if (wybor1 = 2) {
				dane_uzytkownika_printf();
			}
			system("pause");
			system("cls");
			break;
		}
		case 8:
		{
			cout << "8 - BMI" << endl; 
			float waga, wzrost;
			cout << "Podaj wage w kologramach : ";
			cin >> waga;
			cout << "Podaj wzrost w metrach : ";
			cin >> wzrost;
			cout << "BMI wynosi : " << BMI(waga, wzrost) << endl;
			system("pause");
			system("cls");
			break;
		}
		case 9:
		{
			cout << "9 - Reszta z dzielenia" << endl;
			int a, b;
			cout << "Podaj dwie liczby calkowite (dzielna, dzielnik) : ";
			cin >> a >> b;
			cout << reszta(a, b) << endl;
			system("pause");
			system("cls");
			break;
		}
		case 10:
		{
			cout << "10 - Kod ASCI" << endl;
			char znak;
			cout << "Podaj znak z klawiatury : ";
			cin >> znak;
			cout << "Znak : " << znak << endl;
			printf_s("Liczba odpowiadajaca znakowi %c w kodzie ASCI : %d\n", znak, znak);
			system("pause");
			system("cls");
			break;
		}
		case 11:
		{
			cout << "11 - Srednia arytmetyczna, geometryczna i harmoniczna" << endl;
			int ilosc = 0;
			float wartosci[100];
			cout << "Ile liczb calkowitych chcesz wprowadzic?" << endl;
			cout << "Podaj ilosc : ";
			cin >> ilosc;
			for (int i = 0; i <= ilosc-1; i++) {
				cout << "Podaj " << i+1 << " wartosc : ";
				cin >> wartosci[i];
			}
			cout.setf(ios::fixed, ios::floatfield);
			cout.precision(2);
			cout << "Srednia arytmetyczna : " << sr_artm(ilosc, wartosci) << endl;
			cout << "Srednia geometryczna : " << sr_geom(ilosc, wartosci) << endl;
			cout << "Srednia harmoniczna : " << sr_harm(ilosc, wartosci) << endl;
			system("pause");
			system("cls");
			break;
		}
		case 12:
		{
			cout << "12 - Obliczanie funkcji trygonometrycznych podanego kata" << endl;
			float kat;//w stopniach
			cout << "Podaj kat w stopniach : ";
			cin >> kat;
			kat = zmiana_na_radiany(kat);
			cout.setf(ios::fixed, ios::floatfield);
			cout.precision(3);
			cout.setf(ios::right, ios::adjustfield);
			cout << "sin : " << sin(kat) << endl;
			cout << "cos : " << cos(kat) << endl;
			cout << "tg  : " << tan(kat) << endl;
			system("pause");
			system("cls");
			break;
		}
		case 13:
		{
			cout << "13 - Obliczanie silni" << endl;
			int liczba;
			cout << "Podaj liczbe calkowita : ";
			cin >> liczba;
			cout << "Silnia z liczby " << liczba << " wynosi : " << silnia(liczba) << endl;
			system("pause");
			system("cls");
			break;
		}
		case 14:
		{
			cout << "14 - Odwracanie napisow" << endl;
			char napis[100];
			//char odwrocony[1000];
			cout << "Podaj napis : ";
			cin.ignore();
			cin.getline(napis, 100);
			int dlugosc_napisu;
			dlugosc_napisu = dlugosc(napis);
			odwroc(napis);
			system("pause");
			system("cls");
			break;
		}
		case 15:
		{
			cout << "15 - Wartosc najwieksza, najmniejsza i srednia" << endl;
			int ilosc_liczb;
			cout << "Podaj ilosc liczb ktora chcesz wprowadzic : ";
			cin >> ilosc_liczb;
			if (ilosc_liczb > 100) {
				cout << "Maxymalna wartosc to 100, sprobuj ponownie." << endl;
				system("pause");
				system("cls"); 
				break;
			}
			float tablica[100];
			for (int i = 0; i <= ilosc_liczb - 1; i++) {
				cout << "Podaj liczbe : ";
				cin >> tablica[i];
			}
			cout << "Wartosc srednia : " << sr_artm(ilosc_liczb, tablica) << endl;
			for (int i = 0; i <= ilosc_liczb - 1; i++) {
				cout << tablica[i] << endl;
			}
			cout << endl;

			sortowanie_babelkowe(tablica, ilosc_liczb);
			
			cout << endl << endl;
			for (int i = 0; i <= ilosc_liczb-1; i++) {
				cout << tablica[i] << endl;
			}
			cout << "Wartosc maksymalna : " << tablica[ilosc_liczb-1] << endl;
			cout << "Wartosc minimalna : " << tablica[0] << endl;
			system("pause");
			system("cls");
			break;
		}
		case 16:
		{
			cout << "16 - Wyswietlanie wszystkich znakow z tablicy ASCI" << endl;
			
			for (int i = 1; i <= 255; i++) {
				printf_s("%d - %c\n", i, i);
				if (i % 40 == 0) {
					system("pause");
				}
			}
			system("pause");
			system("cls");
			break;
		}
		case 17:
		{
			cout << "17 - Obloczanie wartosci PI" << endl;
			double ilosc_iteracji;
			double pi;
			cout << "Podaj ilosc iteracji wyliczenia : ";
			cin >> ilosc_iteracji;
			cout.setf(ios::fixed, ios::floatfield);
			cout.precision(15);
			pi = oblicz_pi(ilosc_iteracji);
			cout << "Pi = " << pi << endl;
			system("pause");
			system("cls");
			break;
		}
		case 18:
		{
			cout << "18 - Porownanie predkosci sortowania babelkowego i qicksort" << endl;
			int wielkosc_tablicy;
			clock_t start, stop;
			double czas;
			cout << "Jak duza tablica losowych liczb ma byc posortowana??" << endl << "Podaj ilosc : ";
			cin >> wielkosc_tablicy;
			float *tablica;
			tablica = new float [wielkosc_tablicy];
			float *tablica2;
			tablica2 = new float[wielkosc_tablicy];
			srand(time(NULL));
			for (int i = 0; i < wielkosc_tablicy; i++) {
				tablica[i] = rand() % 10000 + 1;
			}
			for (int i = 0; i < wielkosc_tablicy; i++) {
				tablica2[i] = tablica[i];
			}

			/*for (int i = 0; i < wielkosc_tablicy; i++) {
				cout << tablica[i] << endl;
			}*/
			cout << "Sortuje, prosze czekac..." << endl;
			start = clock();
			sortowanie_babelkowe(tablica, wielkosc_tablicy);
			stop = clock();
			czas = double(stop - start)/CLOCKS_PER_SEC;
			cout << "Czas (babelkowe) : " << czas << endl;
			/*for (int i = 0; i < wielkosc_tablicy; i++) {
				cout << tablic[i] << endl;
			}*/

			/*for (int i = 0; i < wielkosc_tablicy; i++) {
				cout << tablica2[i] << endl;
			}*/
			cout << "Sortuje, prosze czekac..." << endl;
			start = clock();
			sortowanie_quicksort(tablica2, 0, wielkosc_tablicy - 1);
			stop = clock();
			czas = double(stop - start) / CLOCKS_PER_SEC;
			cout << "Czas (qicksort) : " << czas << endl;
			//for (int i = 0; i < wielkosc_tablicy; i++) {
			//	cout << tablica2[i] << endl;
			//}

			delete[] tablica;
			delete[] tablica2;
			system("pause");
			system("cls");
			break;
		}
		case 19:
		{
			cout << "19 - pierwiastek z liczby" << endl;
			float liczba;
			for (;;) {
				cout << "Podaj liczbe do spierwiastkowania : ";
				cin >> liczba;
				if (liczba <= 0)
					cout << "Podaj liczbe nie ujemnia!!!" << "\a" << endl;
				else break;
			}
			cout << "Pierwiastek z liczby " << liczba << " wynosi : " << sqrt(liczba) << endl;
			system("pause");
			system("cls");
			break;
		}
		case 20:
		{
			cout << "20 - Obliczanie silni rekurencyjnie" << endl;
			cout << "Podaj liczbe : ";
			unsigned long long liczba;
			cin >> liczba;
			if (liczba > 65) { cout << "Podaj mniejsza liczbe : "; cin >> liczba; }
			cout << "Silnia z liczby " << liczba << " wnosi : " << silnia_rekurecyjnie(liczba) << endl;
			system("pause");
			system("cls");
			break;
		}
		case 21:
		{
			cout << "21 - Lot samolotem" << endl;
			float wysokosc;
			for (;;) {
				cout << "Podaj wysokosc na ktorej lecisz : ";
				cin >> wysokosc;
				if (wysokosc < 100) cout << "Lecisz na nisko!!!" << endl;
				else if ((wysokosc > 100) && (wysokosc < 1000)) {
					cout << "Lecisz na odowiedniej wysokosci." << endl; break;
				}
				else cout << "Lecisz za wysoko!!!" << endl;
			}
			system("pause");
			system("cls");
			break;
		}
		case 22:
		{
			cout << "22 - Oblicanie reszty z dzielenia" << endl;
			int dzielna, dzielnik;
			cout << "Podaj dzielna i dzielnik : ";
			cin >> dzielna >> dzielnik;
			if (reszta(dzielna, dzielnik) == 0) cout << "Reszta z dzielenia wynosi 0" << endl;
			else cout << "Reszta z dzielenia " << dzielna << " przez " << dzielnik << " wynosi : " << reszta(dzielna, dzielnik) << endl;
			system("pause");
			system("cls");
			break;
		}
		case 23:
		{
			cout << "23 - Obliczanie liczb z ciagu Fibonacciego oraz zlotej proporcji" << endl;
			int n=0;
		/*	unsigned long long wyrazy_ciagu[100];*/
			cout << "Ile wyrazow ciagu chcesz obliczyc : ";
			cin >> n;
			unsigned long long *wyrazy_ciagu = new unsigned long long[n];
			ciag_fibonacciego(wyrazy_ciagu, n);
			for (int i = 0; i <= n; i++){
				cout << wyrazy_ciagu[i] << endl;
			}
			cout.setf(ios::fixed, ios::floatfield);
			cout.precision(15);
			cout << "Zlota proporcja : " << zlota_proporcja(n) << endl;
			//delete[] wyrazy_ciagu;
			system("pause");
			system("cls");
			break;
		}
		case 24:
		{
			cout << "24 - Zamienieanie duzych liter na male" << endl;
			char napis[100];
			cout << "Podaj tekst : ";
			cin.ignore();
			cin.getline(napis, 100);
			zmniejszanie_liter(napis);
			for (int i = 0; i < dlugosc(napis); i++) {
				cout << napis[i];
			}
			cout << endl;
			system("pause");
			system("cls");
			break;
		}
		case 25:
		{
			cout << "25 - Czy to liczba pierwsza?" << endl;
			cout << "Podaj liczbe : ";
			int liczba;
			cin >> liczba;
			if (czy_pierwsza(liczba)!=0)
			{
				cout << "TAK" << endl;
			}
			else {
				cout << "NIE" << endl;
			}
			system("pause");
			system("cls");
			break;
		}
		case 26:
		{
			cout << "26 - Rysowanie figur" << endl;
			
			int wybor;
			wybor = menu_figury();
			switch (wybor)
			{		
			case 1 :
			{
				cout << "Podaj h : ";
				int h;
				cin >> h;

				for (int i = 1; i <= h; i++){
					for (int j = 0; j < (h-i); j++){
						cout << " ";
					}
					
					for (int k = 0; k < 2 * i; k++){
						cout << "*";
					}
					cout << endl;
				}
				break;
			}
			case 2:
			{
				cout << "Podaj h : ";
				int h;
				cin >> h;
				if (h == 1) cout << "*";
				else if (h == 2) cout << " **" << endl << "****" << endl;
				else {
					for (int i = 1; i <= h-1; i++) {
						for (int j = 1; j <= (h - i); j++){
							cout << " ";
						}
						cout << "*";
						for (int k = 1; k <= (i - 1); k++) {
							cout << "  ";
						}
						cout << "*";
						cout << endl;
					}
					for (int i = 0; i < 2*h; i++)cout << "*";
					cout << endl;
				}
				break;
			}
			case 3:
			{
				cout << "Podaj wysokosc i szerokosc prostokata : ";
				int h, b;
				cin >> h >> b;
				for (int i = 0; i < h; i++) {
					for (int j = 0; j < b; j++) cout << "*"; cout << endl;
				}
				break;
			}
			case 4:
			{
				cout << "Podaj wysokosc i szerokosc prostokata : ";
				int h, b;
				cin >> h >> b;
				for (int i = 0; i < b; i++) cout << "*"; cout << endl;
				for (int i = 0; i < h-2; i++) {
					cout << "*";
					for (int j = 0; j < b-2; j++)cout << " "; cout << "*"; cout << endl;
				}
				for (int i = 0; i < b; i++) cout << "*"; cout << endl;
				break;
			}
			case 5:
			{
				cout << "Podaj bok kwadratu : ";
				int a;
				cin >> a;
				for (int i = 0; i < a; i++) cout << "*"; cout << endl;
				for (int i = 0; i < a - 2; i++) {
					cout << "*";
					for (int k = 0; k < i; k++)cout << " ";
					cout << "*";
					for (int j = a-3; j > i; j--)cout << " ";
					cout << "*";
					cout << endl;
				}
				for (int i = 0; i < a; i++) cout << "*"; cout << endl;
				break;
			}
			case 6:
			{
				cout << "Podaj wysokosc i szerokosc prostokata : ";
				int h, b;
				cin >> h >> b;
			}
			case 7:
			{
			/*	cout << "Podaj promien kola : ";
				int r, d;
				cin >> r;
				d = r * 2;
				for (int i = 0; i < d; i++)
				{
					char *tab = new char[d];
						for (int j = 0; j < d; j++) {
							if (sqrt(pow(r, 2) +pow((r-j),2))==r) tab[j]='*';
							else tab[j] = ' ';
							cout << tab[j];
					}
						cout << endl;	
				}
			}*/
			//****************************************************
			//cout << "Podaj promien kola : ";
			//int r, d;
			//cin >> r;
			//d = r * 2;
			//for (int i = 0; i < d; i++)
			//{
			//	for (int j = 0; j < d; j++) {
			//		if (sqrt(pow(r, 2) + pow((r - j), 2)) == r) cout << "*";
			//		else cout << " ";
			//	}
			//	cout << endl;
			//}
			}
			}

			system("pause");
			system("cls");
			break;
		}
		case 27:

		{
			cout << "27 - wyznaczanie liczby e" << endl;
			int n = 1;
			do
			{
				if (n <= 99999999)
				{
					cout << "Podaj liczbe iteracji (dokladnosc) \"n\" : ";
				}
				else
				{
					cout << "Podaj liczbe iteracji mniejsza od 99999999 : ";
					cin.clear();
					cin.sync();
					cin.ignore(256, '\n');
				}
				cin >> n;
			} while (n >= 99999999);
			cout.precision(30);
			cout << "Liczba e przy " << n << " liczbie iteracji wynosi : " << obliczabie_liczby_e(n) << endl;
			system("pause");
			system("cls");
			break;
		}
		case 28:
		{
			cout << "28 - Wyswietl wszystkie dodatnie elementy z tablicy" << endl;
			cout << "Ile elementow chcesz wprowadzic : ";
			cin >> ilosc_elementow;
			cout << "Podaj liczby : ";

			for (int i = 0; i < ilosc_elementow; i++){
				int liczba;
				cin >> liczba;
				tablica[i] = liczba;
			}
			for (int i = 0; i < ilosc_elementow; i++){
				if (tablica[i] > 0){
					cout << tablica[i] << endl;
				}
			}
			system("pause");
			system("cls");
			break;
		}
		case 29:
		{
			cout << "29 - Liczenie wyrazow" << endl;
			cout << "Podaj zdanie : ";
			cin.ignore();
			cin.getline(napis, 100);
			int ilosc_spacji_w_zdaniu = liczosc_spacji(napis);
			cout << "Ilosc wyrazow w zdaniu : " << ilosc_spacji_w_zdaniu + 1 << endl;
			cout << "Ilosc spacji w zdaniu : " << ilosc_spacji_w_zdaniu << endl;

			system("pause");
			system("cls");
			break;
		}
		case 30:
		{
			cout << "30 - Najdlozszy wyraz" << endl;
			int najdluzszy_wyraz = 0, tymczasowo_najdluzszy_wyraz = 0, ilosc_spacji_w_zdaniu = 0, ilosc_liter = 0, punkt_konca_najdluzszego_wyrazu = 0, roznica = 0;
			char czy_zdanie_zostalo_wprowadzone_w_punkcie_3, wyraz[40];
			
			cout << "Podaj zdanie : ";
			cin.ignore();
			cin.getline(napis, 100);
			
			strcat_s(napis, " ");
			cout << "Dlugosci poszczegolnych wyrazow : " << endl;

			for (int i = 0; napis[i] != 0; i++)
			{
				if (napis[i] == ' ')
				{
					if (tymczasowo_najdluzszy_wyraz > najdluzszy_wyraz)
					{
						punkt_konca_najdluzszego_wyrazu = i;
						najdluzszy_wyraz = tymczasowo_najdluzszy_wyraz;
						roznica = punkt_konca_najdluzszego_wyrazu - najdluzszy_wyraz + 1;
					}

					cout << tymczasowo_najdluzszy_wyraz << ", ";
					tymczasowo_najdluzszy_wyraz = 0;
				}
				else
				{
					tymczasowo_najdluzszy_wyraz++;
				}


			}
			cout << endl;
			for (int k = roznica; napis[k] == ' '; k++)
			{
				wyraz[k - roznica] = napis[k];
				cout << wyraz[k - roznica];
			}


			//for (int k = roznica; napis[k] == ' '; k++)
			//{
			//	cout << k;
			//}


			cout << "Najdlozszy wyraz " << wyraz << " ma " << najdluzszy_wyraz << " liter" << endl;

			system("pause");
			system("cls");
			break;
		}
		case 31 :
		{
			cout << "6 - Ile razy wystepuje w zadniu wyraz..." << endl;
			string szukana;
			int ilosc = 0;

			cout << "Podaj zdanie : ";
			getline(cin, napis_s);
			getline(cin, napis_s);
			cout << "Podaj wyraz lub litere do wyszukania : ";
			getline(cin, szukana);


			size_t znalezionaPozycja = napis_s.find(szukana);
			if (znalezionaPozycja == string::npos)
			{
				cout << "Nie znaleziono frazy w tekscie" << endl;
				system("pause");
				return 1;
			}

			do
			{
				ilosc++;
				znalezionaPozycja = napis_s.find(szukana, znalezionaPozycja + szukana.size());
			} while (znalezionaPozycja != string::npos);

			cout << "Ilosc wystapienia wyrazu : " << ilosc;
			cout << endl;
			system("pause");
			system("cls");
			break;
		}
		case 32 :
		{
			char czy_zdanie_zostalo_wprowadzone_w_punkcie_6;
			cout << "Czy zdanie zostalo wprowadzone w punkcie 6 (t/n)? : ";
			cin >> czy_zdanie_zostalo_wprowadzone_w_punkcie_6;

			if (czy_zdanie_zostalo_wprowadzone_w_punkcie_6 == 78 || czy_zdanie_zostalo_wprowadzone_w_punkcie_6 == 110)
			{
				cout << "podaj ciag znakow: ";
				getline(cin, napis_s);
				getline(cin, napis_s);
			}

			transform(napis_s.begin(), napis_s.end(), napis_s.begin(), ::tolower);
			int dlugosc = napis_s.size();
			for (int i = 1; i < dlugosc - 1; i++)
			{
				for (int j = dlugosc - 1; j >= 1; j--)
				{
					if (napis_s[j] < napis_s[j - 1])
					{
						char acc;
						acc = napis_s[j - 1];
						napis_s[j - 1] = napis_s[j];
						napis_s[j] = acc;
					}
				}
			}
			cout << "posortowany zbior: " << napis_s << endl;
			system("pause");
			system("cls");
			break;
		}
		case 33:
		{

			char czy_zdanie_zostalo_wprowadzone_w_punkcie_6;
			cout << "Czy zdanie zostalo wprowadzone w punkcie 6 (t/n)? : ";
			cin >> czy_zdanie_zostalo_wprowadzone_w_punkcie_6;

			if (czy_zdanie_zostalo_wprowadzone_w_punkcie_6 == 78 || czy_zdanie_zostalo_wprowadzone_w_punkcie_6 == 110)
			{
				cout << "podaj ciag znakow: ";
				getline(cin, napis_s);
				getline(cin, napis_s);


				transform(napis_s.begin(), napis_s.end(), napis_s.begin(), ::tolower);
				int dlugosc = napis_s.size();
				for (int i = 1; i < dlugosc - 1; i++)
				{
					for (int j = dlugosc - 1; j >= 1; j--)
					{
						if (napis_s[j] < napis_s[j - 1])
						{
							char acc;
							acc = napis_s[j - 1];
							napis_s[j - 1] = napis_s[j];
							napis_s[j] = acc;
						}
					}
				}
			}
			cout << "posortowany zbior: " << napis_s << endl;

			char znak_ktorego_jest_najwiecej;
			int tymczasowa_ilosc_takich_samych_znakow = 1, ilosc_takich_samych_znakow = 0;



			for (int i = 1; napis_s[i - 1] != 0; i++)
			{
				if (napis_s[i] == napis_s[i - 1])
				{
					tymczasowa_ilosc_takich_samych_znakow++;
				}
				else
				{

					if (ilosc_takich_samych_znakow < tymczasowa_ilosc_takich_samych_znakow)
					{
						ilosc_takich_samych_znakow = tymczasowa_ilosc_takich_samych_znakow;
						znak_ktorego_jest_najwiecej = napis_s[i - 1];
						cout << znak_ktorego_jest_najwiecej << ilosc_takich_samych_znakow << endl;
					}
					tymczasowa_ilosc_takich_samych_znakow = 1;
				}
			}

			cout << "Najwiecej jest znakow : " << znak_ktorego_jest_najwiecej << endl;
			cout << "Jest ich : " << ilosc_takich_samych_znakow << endl;

			system("pause");
			system("cls");
			break;
		}
		default :
		{
			cout << "PODAJ PRAWIDLOWA LICZBE!!!" << endl << "\a";
		}

		}
	}
	return 0;
}
