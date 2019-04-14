#pragma once
#define _CRT_SECURE_WARNINGS
#define _USE_MATH_DEFINES
#include<iostream>
#include<conio.h> //do _getch()
#include <iomanip> // do precyzji(setprecision())
#include <math.h>
#include<cmath>
#include <cstdio>
#include<time.h>
#include <windows.h>
#include <cstdlib>
#include<string>
#include<algorithm>

using namespace std;

int menu();
float objetosc(float a, float b, float c);
float pole_kola(float r);
float obw_kola(float r);
float odleglosc_miedzy_pkt(int x_a, int y_a, int z_a, int x_b, int y_b, int z_b);
float pole_prostokata(float a, float b);
float obw_prostokata(float a, float b);
float pole_trojkata(float a, float b, float c);
float obw_trojkata(float a, float b, float c);
float kat(float a, float b, float c);
void dane_uzytkownika_cout();
void dane_uzytkownika_printf();
float BMI(float waga, float wzrost);
int reszta(int a, int b);
float sr_artm(int ilosc_liczb, float* wartosci);
float sr_geom(int ilosc_liczb, float* wartosci);
float sr_harm(int ilosc_liczb, float* wartosci);
float zmiana_na_radiany(float kat);
long long silnia(int x);
int dlugosc(char* napis);
int dlugosc_float(float* tablica);
void odwroc(char *tekst);
void sortowanie_babelkowe(float* tab, int n);
double oblicz_pi(double ilosc_iteracji);
void sortowanie_quicksort(float *tabela, int lewy, int prawy);
unsigned long long silnia_rekurecyjnie(unsigned long long liczba);
void ciag_fibonacciego(unsigned long long *wyrazy_ciagu, int n);
float zlota_proporcja(int n);
void zmniejszanie_liter(char *napis);
bool czy_pierwsza(int x);
int menu_figury();
double obliczabie_liczby_e(int liczba_iteracji);
int liczosc_spacji(char *napis);
