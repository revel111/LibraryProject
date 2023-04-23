#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <windows.h>
#include <conio.h>

using namespace std;

struct Date //Структура для дат
{
	int year = 0;
	int month = 0;
	int day = 0;
    void Fill();
    void Print();
};

struct Book //Структура для книг
{
    char* name = nullptr;
    char* author = nullptr;
    char* genre = nullptr;
    Date dateOfIssue;//дата издания
    void Fill();
    void Print();
    void DellBook(Book*& books, int& size);
};

struct Journal { //Структура для журналов
    char* name = nullptr;
    char* author = nullptr;
    char* genre = nullptr;
    Date dateOfIssue;
    void Fill();
    void Print();
    void DellJournal(Journal*& journals, int& size);
};

struct Newspaper { //Структура для газет
    char* name = nullptr;
    char* author = nullptr;
    char* genre = nullptr;
    Date dateOfIssue;
    void Fill();
    void Print();
    void DellNewspaper(Newspaper*& newspapers, int& size);
};

struct Lib //Структура библиотеки
{
    int listBook = 0;
    int listJournal = 0;
    int listNewspaper = 0;

    Book* books = nullptr;
    Journal* journals = nullptr;
    Newspaper* newspapers = nullptr;

    void FillBook();
    void FillJournal();
    void FillNewspaper();
};

void Add_Book(Book*& books, int& size);//Функция добавления книги
void Add_Journal(Journal*& journals, int& size);//Функция добавления журнала
void Add_Newspaper(Newspaper*& newspapers, int& size);//Функция добавления газеты


void Print_Book(Book*& books, int& size);//Функция выведения книги
void Print_Journal(Journal*& journals, int& size);//Функция выведения журнала
void Print_Newspaper(Newspaper*& newspapers, int& size);//Функция выведения газеты

void Save_inFileBook(Book*& books, int& size);//Функция сохранения в файл книги
void Save_inFileJournal(Journal*& journals, int& size);//Функция сохранения в файл журнала
void Save_inFileNewspaper(Newspaper*& newspapers, int& size);//Функция сохранения в файл газеты


void ReadOfFile_Book(Book*& books, int& size);//Функция чтения из файла книг
void ReadOfFile_Journal(Journal*& journals, int& size);//Функция чтения из файла журналов
void ReadOfFile_Newspaper(Newspaper*& newspapers, int& size);//Функция чтения из файла газет