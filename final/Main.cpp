#include "Header.h"

int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Book* books = nullptr; // массив книг
	int countBooks = 0; // количество книг

	Journal* journals = nullptr; // массив журналов
	int countJournals = 0; // количество журналов

	Newspaper* newspapers = nullptr; // массив газет
	int countNewspapers = 0; // количество газет

	int ch = 0; // Переменная для первого вызова меню
	int ch1 = 0; // Переменная для второго вызова меню
	int ch2 = 0; // Переменная для третьего вызова меню

	Book B;//переменная для вызова метода(книги)
	Journal J;//переменная для вызова метода(журналы)
	Newspaper N;//переменная для вызова метода(газеты)

	ReadOfFile_Book(books, countBooks);
	ReadOfFile_Journal(journals, countJournals);//Чтения из файла
	ReadOfFile_Newspaper(newspapers, countNewspapers);

	do {
		cout << "Введите 1, чтобы войти как администратор" << endl;
		cout << "Введите 2, чтобы войти как пользователь" << endl;
		cout << "Введите 0, чтобы выйти из программы" << endl;
		cin >> ch1;

		switch (ch1)
		{
		case 1:
			do {
				cout << "------------Вы вошли как администратор------------" << endl;

				cout << " " << endl;
				cout << "Введите 1, если хотите добавить книгу" << endl;
				cout << "Введите 2, если хотите добавить журнал" << endl;
				cout << "Введите 3, если хотите добавить газету" << endl;
				cout << "Введите 4, если хотите удалить книгу" << endl;
				cout << "Введите 5, если хотите удалить журнал" << endl;
				cout << "Введите 6, если хотите удалить газету" << endl;
				cout << "Введите 7, если хотите вывести книгу" << endl;
				cout << "Введите 8, если хотите вывести журнал" << endl;
				cout << "Введите 9, если хотите вывести газету" << endl;
				cout << "Введите 0, если хотите выйти" << endl;
				cin >> ch;

				if (ch == 1)
				{
					Add_Book(books, countBooks);
					Save_inFileBook(books, countBooks);
				}
				else if (ch == 2)
				{
					Add_Journal(journals, countJournals);
					Save_inFileJournal(journals, countJournals);
				}
				else if (ch == 3)
				{
					Add_Newspaper(newspapers, countNewspapers);
					Save_inFileNewspaper(newspapers, countNewspapers);
				}
				else if (ch == 4)
				{
					B.DellBook(books, countBooks);
					Save_inFileBook(books, countBooks);
				}
				else if (ch == 5)
				{
					J.DellJournal(journals, countJournals);
					Save_inFileJournal(journals, countJournals);
				}
				else if (ch == 6)
				{
					N.DellNewspaper(newspapers, countNewspapers);
					Save_inFileNewspaper(newspapers, countNewspapers);
				}
				else if (ch == 7)
				{
					Print_Book(books, countBooks);
				}
				else if (ch == 8)
				{
					Print_Journal(journals, countJournals);
				}
				else if (ch == 9)
				{
					Print_Newspaper(newspapers, countNewspapers);
				}
				else
				{
					break;
				}
				break;
		case 2:
			do {
				cout << "------------Вы вошли как Пользовтель------------" << endl;

				cout << " " << endl;
				cout << "Введите 1, если хотите вывести книгу" << endl;
				cout << "Введите 2, если хотите вывести журнал" << endl;
				cout << "Введите 3, если хотите вывести газету" << endl;
				cout << "Введите 4, если хотите купить книгу" << endl;
				cout << "Введите 5, если хотите купить журнал" << endl;
				cout << "Введите 6, если хотите купить газету" << endl;
				cin >> ch2;
				if (ch2 == 1)
				{
					Print_Book(books, countBooks);
				}
				else if (ch2 == 2)
				{
					Print_Journal(journals, countJournals);
				}
				else if (ch2 == 3)
				{
					Print_Newspaper(newspapers, countNewspapers);
				}
				else if (ch2 == 4)
				{
					B.DellBook(books, countBooks);
					Save_inFileBook(books, countBooks);
				}
				else if (ch2 == 5)
				{
					J.DellJournal(journals, countJournals);
					Save_inFileJournal(journals, countJournals);
				}
				else if (ch2 == 6)
				{
					N.DellNewspaper(newspapers, countNewspapers);
					Save_inFileNewspaper(newspapers, countNewspapers);
				}
				else
				{
					break;
				}
				break;
			} while (ch2 != 0);
			} while (ch != 0);
		} 
	} while (ch1 != 0);
	system("pause");
	return 0;
}