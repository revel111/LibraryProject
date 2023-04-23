#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <windows.h>
#include <conio.h>

using namespace std;

struct Date //��������� ��� ���
{
	int year = 0;
	int month = 0;
	int day = 0;
    void Fill();
    void Print();
};

struct Book //��������� ��� ����
{
    char* name = nullptr;
    char* author = nullptr;
    char* genre = nullptr;
    Date dateOfIssue;//���� �������
    void Fill();
    void Print();
    void DellBook(Book*& books, int& size);
};

struct Journal { //��������� ��� ��������
    char* name = nullptr;
    char* author = nullptr;
    char* genre = nullptr;
    Date dateOfIssue;
    void Fill();
    void Print();
    void DellJournal(Journal*& journals, int& size);
};

struct Newspaper { //��������� ��� �����
    char* name = nullptr;
    char* author = nullptr;
    char* genre = nullptr;
    Date dateOfIssue;
    void Fill();
    void Print();
    void DellNewspaper(Newspaper*& newspapers, int& size);
};

struct Lib //��������� ����������
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

void Add_Book(Book*& books, int& size);//������� ���������� �����
void Add_Journal(Journal*& journals, int& size);//������� ���������� �������
void Add_Newspaper(Newspaper*& newspapers, int& size);//������� ���������� ������


void Print_Book(Book*& books, int& size);//������� ��������� �����
void Print_Journal(Journal*& journals, int& size);//������� ��������� �������
void Print_Newspaper(Newspaper*& newspapers, int& size);//������� ��������� ������

void Save_inFileBook(Book*& books, int& size);//������� ���������� � ���� �����
void Save_inFileJournal(Journal*& journals, int& size);//������� ���������� � ���� �������
void Save_inFileNewspaper(Newspaper*& newspapers, int& size);//������� ���������� � ���� ������


void ReadOfFile_Book(Book*& books, int& size);//������� ������ �� ����� ����
void ReadOfFile_Journal(Journal*& journals, int& size);//������� ������ �� ����� ��������
void ReadOfFile_Newspaper(Newspaper*& newspapers, int& size);//������� ������ �� ����� �����