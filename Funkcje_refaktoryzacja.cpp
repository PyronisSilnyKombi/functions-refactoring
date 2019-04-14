#include"Nag³ówek_refaktoryzacja.h"

int menu()
{
	int wybor;
	cout << "1 - Obliczanie objetosci prostopadloscianu do 2 miejsc po przecinku" << endl;
	cout << "2 - Obliczanie pola i obwodu kola" << endl;
	cout << "3 - Obliczabie odleglosci pomiecdzy dwoma punktami w ukladzie trzech wspolrzednych" << endl;
	cout << "4 - Liczenie obwodu prostokata" << endl;
	cout << "5 - Obliczanie pola i obwodu w trojkacie, oraz jego katow" << endl;
	cout << "6 - Zamiana liczby calkowitej dziesietnej na szesnastkowa i osemkowa" << endl;
	cout << "7 - Dane uzytkownika" << endl;
	cout << "8 - BMI" << endl;
	cout << "9 - Reszta z dzielenia" << endl;
	cout << "10 - Kod ASCI" << endl;
	cout << "11 - Srednia arytmetyczna, geometryczna i harmoniczna" << endl;
	cout << "12 - Obliczanie funkcji trygonometrycznych podanego kata" << endl;
	cout << "13 - Obliczanie silni" << endl;
	cout << "14 - Odwracanie napisow" << endl;
	cout << "15 - Wartosc najwieksza, najmniejsza i srednia" << endl;
	cout << "16 - Wyswietlanie wszystkich znakow z tablicy ASCI" << endl;
	cout << "17 - Obloczanie wartosci PI" << endl;
	cout << "18 - Porownanie predkosci sortowania babelkowego i qicksort" << endl;
	cout << "19 - pierwiastek z liczby" << endl;
	cout << "20 - Obliczanie silni rekurencyjnie" << endl;
	cout << "21 - Lot samolotem" << endl;
	cout << "22 - Oblicanie reszty z dzielenia" << endl;
	cout << "23 - Obliczanie liczb z ciagu Fibonacciego oraz zlotej proporcji" << endl;
	cout << "24 - Zamienieanie duzych liter na male" << endl;
	cout << "25 - Czy to liczba pierwsza?" << endl;
	cout << "26 - Rysowanie figur" << endl;
	cout << "27 - wyznaczanie liczby e" << endl;
	cout << "28 - Wyswietl wszystkie dodatnie elementy z tablicy" << endl;
	cout << "29 - Liczenie wyrazow" << endl;
	cout << "30 - Najdlozszy wyraz" << endl;
	cout << "31 - Ile razy wystepuje w zadniu wyraz..." << endl;
	cout << "32 - Sortowanie alfabetyczne liter" << endl;
	cout << "33 - Najczesciej wystepujacy znak w posortowanej tablicy" << endl;

	cout << "Wybierz jedna z opcji : ";
	cin >> wybor;
	system("cls");
	return wybor;
}
float objetosc(float a, float b, float c)
{
	return a * b*c;
}
float pole_kola(float r)
{
	return pow(r, 2)*M_PI;
}
float obw_kola(float r)
{
	return 2 * r*M_PI;
}
float odleglosc_miedzy_pkt(int x_a, int y_a, int z_a, int x_b, int y_b, int z_b)
{
	return sqrt(pow((x_a - x_b), 2) + pow((y_a - y_b), 2) + pow((z_a - z_b), 2));
}
float pole_prostokata(float a, float b)
{
	return a * b;
}
float obw_prostokata(float a, float b)
{
	return 2 * a + 2 * b;
}
float pole_trojkata(float a, float b, float c)
{
	float obw_2 = obw_trojkata(a, b, c) / 2;
	return sqrt(obw_2*(obw_2 - a)*(obw_2 - b)*(obw_2 - c));
}
float obw_trojkata(float a, float b, float c)
{
	return a + b + c;
}
float kat(float a, float b, float c)
{
	return asin(pole_trojkata(a, b, c) * 2 / (b*c)) * 180 / M_PI;
}
void dane_uzytkownika_printf()
{
	cin.clear();
	cin.sync();
	cin.ignore(256, '\n');

	int fathers_age, mothers_age, birth_year, birth_month, birth_day, fathers_age2, mothers_age2;
	int day_now, month_now, year_now, age, age_together;
	int age_in_days;
	float fathers_age_ratio, mothers_age_ratio;
	char first_name[30], second_name[40], fathers_first_name[30];
	char mothers_first_name[30], mothers_family_name[40], birth_place[50];

	cout.setf(std::ios::fixed, std::ios::floatfield);
	cout.precision(2);

	// pobranie danych
	printf("Podaj imie : ");
	cin >> first_name;
	printf("Podaj nazwisko : ");
	cin >> second_name;
	printf("Podaj imie ojca : ");
	cin >> fathers_first_name;
	printf("Podaj wiek ojca : ");
	cin >> fathers_age;
	printf("Podaj imie matki : ");
	cin >> mothers_first_name;
	printf("Podaj wiek matki : ");
	cin >> mothers_age;
	printf("Podaj nazwisko rodowe matki : ");
	cin >> mothers_family_name;
	printf("Podaj miejsce urodzenia : ");
	cin >> birth_place;
	printf("Podaj swoja date urodzenia w formacie dd [spacja] mm [spacja] rrrr : ");
	cin >> birth_day >> birth_month >> birth_year;
	printf("Podaj dzisiejsza date w formacie dd [spacja] mm [spacja] rrrr : ");
	cin >> day_now >> month_now >> year_now;

	// czyszczenie
	system("cls");

	// obliczenia
	age = ((year_now - birth_year) * 365 + (month_now - birth_month) * 31 + (day_now - birth_day)) / 365;
	mothers_age2 = mothers_age - age;
	fathers_age2 = fathers_age - age;
	age_in_days = (year_now - birth_year) * 365 + (month_now - birth_month) * 31 + (day_now - birth_day);
	fathers_age_ratio = (float)fathers_age / age;
	mothers_age_ratio = (float)mothers_age / age;
	age_together = mothers_age + fathers_age + age;

	// Wyœwietlenie wszystkich podanych informacji
	printf("First name : %s\n", first_name);
	printf("Second name : %s\n", second_name);
	printf("Father's first name : %s\n", fathers_first_name);
	printf("Father’s age : %d\n", fathers_age);
	printf("Mother’s first name : %s\n", mothers_first_name);
	printf("Mother’s age : %d\n", mothers_age);
	printf("Mother’s family name : %s\n", mothers_family_name);
	printf("Birth place : %s\n", birth_place);
	printf("Birth year : %d\n", birth_year);
	printf("Birth month : %d\n", birth_month);
	printf("Birth day : %d\n", birth_day);
	printf("Today is %d.%d.%d, year has 365 days and month 31 days.\n", day_now, month_now, year_now);

	// Wyœwietlenie historyjki
	printf("Citizen %s %s was born in %s %d years ago.\n", first_name, second_name, birth_place, age);
	printf("His mother, mrs %s (of a %s ),", mothers_first_name, mothers_family_name);
	printf("was %d years old then and his father %d years old.\n", mothers_age2, fathers_age2);
	printf("%s %s till %d.%d.%d lived approximately %d days.\n", second_name, first_name, day_now, month_now, year_now, age_in_days);
	printf("His father is %.2f times older than him and mother %.2f times.\n", fathers_age_ratio, mothers_age_ratio);
	printf("It is an old family, because together they have %d years.\n", age_together);
}
void dane_uzytkownika_cout()
{
	cin.clear();
	cin.sync();
	cin.ignore(256, '\n');

	//sta³e
	int fathers_age, mothers_age, birth_year, birth_month, birth_day, fathers_age2, mothers_age2;
	int day_now, month_now, year_now, age, age_together;
	int age_in_days;
	float fathers_age_ratio, mothers_age_ratio;
	char first_name[30], second_name[40], fathers_first_name[30];
	char mothers_first_name[30], mothers_family_name[40], birth_place[50];

	// zmiana strumienia
	cout.setf(std::ios::fixed, std::ios::floatfield);
	cout.precision(2);

	// pobranie danych
	cout << "Podaj imie : ";
	cin >> first_name;
	cout << "Podaj nazwisko : ";
	cin >> second_name;
	cout << "Podaj imie ojca : ";
	cin >> fathers_first_name;
	cout << "Podaj wiek ojca : ";
	cin >> fathers_age;
	cout << "Podaj imie matki : ";
	cin >> mothers_first_name;
	cout << "Podaj wiek matki : ";
	cin >> mothers_age;
	cout << "Podaj nazwisko rodowe matki : ";
	cin >> mothers_family_name;
	cout << "Podaj miejsce urodzenia : ";
	cin >> birth_place;
	cout << "Podaj swoja date urodzenia w formacie dd [spacja] mm [spacja] rrrr : ";
	cin >> birth_day >> birth_month >> birth_year;
	cout << "Podaj dzisiejsza date w formacie dd [spacja] mm [spacja] rrrr : ";
	cin >> day_now >> month_now >> year_now;

	// czyszczenie
	system("cls");

	// obliczenia
	age = ((year_now - birth_year) * 365 + (month_now - birth_month) * 31 + (day_now - birth_day)) / 365;
	mothers_age2 = mothers_age - age;
	fathers_age2 = fathers_age - age;
	age_in_days = (year_now - birth_year) * 365 + (month_now - birth_month) * 31 + (day_now - birth_day);
	fathers_age_ratio = (float)fathers_age / age;
	mothers_age_ratio = (float)mothers_age / age;
	age_together = mothers_age + fathers_age + age;

	// Wyœwietlenie wszystkich podanych informacji
	cout << "First name : " << first_name << endl;
	cout << "Second name : " << second_name << endl;
	cout << "Father's first name : " << fathers_first_name << endl;
	cout << "Father’s age : " << fathers_age << endl;
	cout << "Mother’s first name : " << mothers_first_name << endl;
	cout << "Mother’s age : " << mothers_age << endl;
	cout << "Mother’s family name : " << mothers_family_name << endl;
	cout << "Birth place : " << birth_place << endl;
	cout << "Birth year : " << birth_year << endl;
	cout << "Birth month : " << birth_month << endl;
	cout << "Birth day : " << birth_day << endl;
	cout << "Today is " << day_now << "." << month_now << "." << year_now << ", year has 365 days and month 31 days." << endl << endl;

	// Wyœwietlenie historyjki
	cout << "Citizen " << first_name << " " << second_name << " was born in " << birth_place << " " << age << " years ago." << endl;
	cout << "His mother, mrs " << mothers_first_name << " (of a " << mothers_family_name << " )," << endl;
	cout << "was " << mothers_age2 << " years old then and his father " << fathers_age2 << " years old." << endl;
	cout << second_name << " " << first_name << " till " << day_now << "." << month_now << "." << year_now << " lived approximately " << age_in_days << " days." << endl;
	cout << "His father is " << fathers_age_ratio << " times older than him and mother " << mothers_age_ratio << " times." << endl;
	cout << "It is an old family, because together they have " << age_together << " years." << endl;
}
float BMI(float waga, float wzrost)
{
	return waga / (pow(wzrost, 2));
}
int reszta(int a, int b)
{
	return a % b;
}
float sr_artm(int ilosc_liczb, float* wartosci)
{
	float suma = 0;
	for (int i = 0; i <= ilosc_liczb - 1; i++)
	{
		suma += wartosci[i];
	}
	return suma / ilosc_liczb;
}
float sr_geom(int ilosc_liczb, float* wartosci)
{
	float iloczyn = 1;
	for (int i = 0; i <= ilosc_liczb - 1; i++)
	{
		iloczyn *= wartosci[i];
	}
	return pow(iloczyn, (1.0 / ilosc_liczb));
}
float sr_harm(int ilosc_liczb, float* wartosci)
{
	float suma = 0, suma1;
	for (int i = 0; i <= ilosc_liczb -1; i++)
	{
		suma += 1/wartosci[i];
	}
	suma1 = suma;
	return ilosc_liczb / suma1;
}
float zmiana_na_radiany(float kat)
{
	return kat*M_PI / 180;
}
long long silnia(int x)
{
	long long wynik=1;
		for (int i = 1; i <= x; i++) {
			wynik *= i;
		}
		return wynik;
		cout << wynik;
}
int dlugosc(char* napis)
{
	int acc = 0;
	for (int i = 0; napis[i] != 0; i++){
		acc++;
	}
	return acc;
}
void odwroc(char* tekst)
{
	int dlugosc_napisu = dlugosc(tekst);
	char *wynik = new char[dlugosc_napisu + 1];
	wynik[dlugosc_napisu] = 0;
	for (int i = dlugosc_napisu - 1; i >= 0; i--)
		wynik[i] = tekst[dlugosc_napisu - i];

	for (int j=0 ; j < dlugosc_napisu; j++)
		cout << wynik[j];
	cout << tekst[0] << endl;
}
int dlugosc_float(float* tablica)
{
	int acc = 0;
	for (int i = 0; tablica[i] != 0; i++) {
		acc++;
	}
	return acc;
}
void sortowanie_babelkowe(float* tab,int n)
{
	for (int i=1; i<n;i++){
		for (int j = n-1; j>=1; j--) {
			if (tab[j] < tab[j-1]) {
				float acc;
				acc = tab[j-1];
				tab[j-1] = tab[j];
				tab[j] = acc;
			}
		}
	}
}
double oblicz_pi(double ilosc_iteracji)
{
	double suma=0;
	
	for (int i = 0; i<= ilosc_iteracji; i++){
		suma += 4 * pow(-1, i) / (2 * i + 1);
	}
	return suma;
}
void sortowanie_quicksort(float *tablica, int lewy, int prawy)
{
	int v = tablica[(lewy + prawy) / 2];
	int i, j, x;
	i = lewy;
	j = prawy;
	do{
		while (tablica[i] < v) i++;
		while (tablica[j] > v) j--;
		if (i <= j){
			x = tablica[i];
			tablica[i] = tablica[j];
			tablica[j] = x;
			i++;
			j--;
		}
	} while (i <= j);
	if (j > lewy) sortowanie_quicksort(tablica, lewy, j);
	if (i < prawy) sortowanie_quicksort(tablica, i, prawy);
}
unsigned long long silnia_rekurecyjnie(unsigned long long liczba)
{
	unsigned long long wynik;
	if (liczba == 0) {
		wynik=1;
	}
	else {
		wynik= liczba * silnia_rekurecyjnie(liczba - 1);
	}
	return wynik;
}
void ciag_fibonacciego(unsigned long long *wyrazy_ciagu, int n)
{
	wyrazy_ciagu[0] = 1;
	wyrazy_ciagu[1] = 1;
	for (int i = 2; i <= n; i++){
		wyrazy_ciagu[i] = wyrazy_ciagu[i - 1] + wyrazy_ciagu[i - 2];
	}
}
float zlota_proporcja(int n)
{
	unsigned long long* wyrazy_ciagu = new unsigned long long[n];
	ciag_fibonacciego(wyrazy_ciagu ,n);
	return ((float)wyrazy_ciagu[n] / wyrazy_ciagu[n - 1]);
}
void zmniejszanie_liter(char *napis)
{
	for (int i = 0; i < dlugosc(napis); i++) {
		if (napis[i] >= 'A' && napis[i] <= 'Z') napis[i] += ('a' - 'A'); //standardowo
	}
}
bool czy_pierwsza(int x)//do naprawy
{
	if (x == 1)
		return 0;
	if (x == 2)
		return 1;
	for (int i = 2; i <= x; i++){
		if (x%i == 0) return 0;
		else return 1;
	}
}
int menu_figury()
{
	int wybor;
	cout << "1 - trojkat z wypelnieniem" << endl;
	cout << "2 - trojkat bez wypelnienia" << endl;
	cout << "3 - prostokat z wypelnieniem" << endl;
	cout << "4 - prostokat bez wypelnienia" << endl;
	cout << "5 - kwadrat z przekatna" << endl;
	cout << "6 - prostokat z przekatna" << endl;
	cout << "7 - kolo" << endl;

	cout << "Wybierz jedna z opcji : ";
	cin >> wybor;
	system("cls");
	return wybor;
}
double obliczabie_liczby_e(int liczba_iteracji)
{
	double e = 0, silnia = 1;
	for (int i = 0; i <= liczba_iteracji - 1; i++)
	{
		e += 1 / silnia;
		silnia *= (i + 1);
	}
	return e;
}
int liczosc_spacji(char *napis)
{
	int ilosc_spacji_w_zdaniu = 0;
	for (int i = 0; napis[i] != 0; i++) {
		if (napis[i] == ' ') {
			ilosc_spacji_w_zdaniu++;
		}
	}
	return ilosc_spacji_w_zdaniu;
}
