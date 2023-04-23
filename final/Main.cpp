#include "Header.h"

int main() {

	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Book* books = nullptr; // ������ ����
	int countBooks = 0; // ���������� ����

	Journal* journals = nullptr; // ������ ��������
	int countJournals = 0; // ���������� ��������

	Newspaper* newspapers = nullptr; // ������ �����
	int countNewspapers = 0; // ���������� �����

	int ch = 0; // ���������� ��� ������� ������ ����
	int ch1 = 0; // ���������� ��� ������� ������ ����
	int ch2 = 0; // ���������� ��� �������� ������ ����

	Book B;//���������� ��� ������ ������(�����)
	Journal J;//���������� ��� ������ ������(�������)
	Newspaper N;//���������� ��� ������ ������(������)

	ReadOfFile_Book(books, countBooks);
	ReadOfFile_Journal(journals, countJournals);//������ �� �����
	ReadOfFile_Newspaper(newspapers, countNewspapers);

	do {
		cout << "������� 1, ����� ����� ��� �������������" << endl;
		cout << "������� 2, ����� ����� ��� ������������" << endl;
		cout << "������� 0, ����� ����� �� ���������" << endl;
		cin >> ch1;

		switch (ch1)
		{
		case 1:
			do {
				cout << "------------�� ����� ��� �������������------------" << endl;

				cout << " " << endl;
				cout << "������� 1, ���� ������ �������� �����" << endl;
				cout << "������� 2, ���� ������ �������� ������" << endl;
				cout << "������� 3, ���� ������ �������� ������" << endl;
				cout << "������� 4, ���� ������ ������� �����" << endl;
				cout << "������� 5, ���� ������ ������� ������" << endl;
				cout << "������� 6, ���� ������ ������� ������" << endl;
				cout << "������� 7, ���� ������ ������� �����" << endl;
				cout << "������� 8, ���� ������ ������� ������" << endl;
				cout << "������� 9, ���� ������ ������� ������" << endl;
				cout << "������� 0, ���� ������ �����" << endl;
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
				cout << "------------�� ����� ��� �����������------------" << endl;

				cout << " " << endl;
				cout << "������� 1, ���� ������ ������� �����" << endl;
				cout << "������� 2, ���� ������ ������� ������" << endl;
				cout << "������� 3, ���� ������ ������� ������" << endl;
				cout << "������� 4, ���� ������ ������ �����" << endl;
				cout << "������� 5, ���� ������ ������ ������" << endl;
				cout << "������� 6, ���� ������ ������ ������" << endl;
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