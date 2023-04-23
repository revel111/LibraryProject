#include "Header.h"

void Date::Fill()//Метод запроса даты
{
    cout << "Введите год издания: ";
    cin >> year;
    cout << "Введите месяц издания: ";
    cin >> month;
    cout << "Введите день издания: ";
    cin >> day;
}
void Date::Print()//Метод выведения даты
{
    cout << year << "/" << month << "/" << day << endl;
}

//---------

void Book::Fill() {//Метод заполнения книги
    cin.ignore();
    cout << "Введите название книги" << endl;
    char temp[255];
    cin.getline(temp, 255);
    name = new char[strlen(temp) + 1];
    strcpy(name, temp);
    name[strlen(temp)] = '\0';  

    dateOfIssue.Fill();
    cin.ignore();
    cout << "Введите автора книги" << endl;
    char temp2[255];
    cin.getline(temp2, 255);
    author = new char[strlen(temp2) + 1];
    strcpy(author, temp2);
    author[strlen(temp2)] = '\0';

    cout << "Введите жанр книги" << endl;
    char temp3[255];
    cin.getline(temp3, 255);
    genre = new char[strlen(temp3) + 1];
    strcpy(genre, temp3);
    genre[strlen(temp3)] = '\0';
}

void Book::Print()//Метод выведения книг
{
    cout<< "Название: " << name << endl;
    dateOfIssue.Print();
    cout<< "Автор: " << author << endl;
    cout<< "Жанр: " << genre << endl;
}

void Book::DellBook(Book*& books, int& size)//Метод удаления книги
{
    char nname[255];
    cout << "Введите название книги" << endl;
    cin.ignore();
    cin.getline(nname, 255);
    cout << endl;
    Book* temp = new Book[size - 1];
    for (int i = 0; i < size; i++)
    {

        if (books[i].name == nname)
        {

            for (int j = 0; j < size; j++)
            {
                temp[i] = books[i];
            }
        }
    }
    if (books != NULL && size != 0)
    {
        // удаление старого массива если он существовал
        delete[]books;
    }
    size--; // уменьшаем размер массива
    books = temp; // назначаем указатель нового массива в старую переменную
    // т.к данный указатель был передан по ссылке он так же изменится в мэйне
}

//---------

void Journal::Fill()//Метод заполнения журнала
{
    cin.ignore();
    cout << "Введите название журнала" << endl;
    char temp[255];
    cin.getline(temp, 255);
    name = new char[strlen(temp) + 1];
    strcpy(name, temp);
    name[strlen(temp)] = '\0';

    dateOfIssue.Fill();

    cin.ignore();
    cout << "Введите издательство" << endl;
    char temp2[255];
    cin.getline(temp2, 255);
    author = new char[strlen(temp2) + 1];
    strcpy(author, temp2);
    author[strlen(temp2)] = '\0';

    cout << "Введите направление журнала" << endl;
    char temp3[255];
    cin.getline(temp3, 255);
    genre = new char[strlen(temp3) + 1];
    strcpy(genre, temp3);
    genre[strlen(temp3)] = '\0';
}

void Journal::Print()//Метод выведения журналов
{
    cout << "Название: " << name << endl;
    dateOfIssue.Print();
    cout << "Издательство: " << author << endl;
    cout << "Направление: " << genre << endl;
}

void Journal::DellJournal(Journal*& journals, int& size)//Метод удаления журнала
{
    char nname[255];
    cout << "Введите название журнала" << endl;
    cin.ignore();
    cin.getline(nname, 255);
    cout << endl;
    Journal* temp = new Journal[size - 1];
    for (int i = 0; i < size; i++)
    {

        if (journals[i].name == nname)
        {

            for (int j = 0; j < size; j++)
            {
                temp[i] = journals[i];
            }
        }
    }
    if (journals != NULL && size != 0)
    {
        // удаление старого массива если он существовал
        delete[]journals;
    }
    size--; // уменьшаем размер массива
    journals = temp; // назначаем указатель нового массива в старую переменную
    // т.к данный указатель был передан по ссылке он так же изменится в мэйне
}

//---------

void Newspaper::Fill()//Метод заполнения газеты
{
    cin.ignore();
    cout << "Введите название газеты" << endl;
    char temp[255];
    cin.getline(temp, 255);
    name = new char[strlen(temp) + 1];
    strcpy(name, temp);
    name[strlen(temp)] = '\0';

    dateOfIssue.Fill();
    cin.ignore();
    cout << "Введите издательство" << endl;
    char temp2[255];
    cin.getline(temp2, 255);
    author = new char[strlen(temp2) + 1];
    strcpy(author, temp2);
    author[strlen(temp2)] = '\0';

    cout << "Введите направление газеты" << endl;
    char temp3[255];
    cin.getline(temp3, 255);
    genre = new char[strlen(temp3) + 1];
    strcpy(genre, temp3);
    genre[strlen(temp3)] = '\0';
}

void Newspaper::Print()//Метод выведения газет
{
    cout << "Название: " << name << endl;
    dateOfIssue.Print();
    cout << "Издательство: " << author << endl;
    cout << "Направление: " << genre << endl;
}

void Newspaper::DellNewspaper(Newspaper*& newspapers, int& size)//Метод удаления газеты
{
    char nname[255];
    cout << "Введите название газеты" << endl;
    cin.ignore();
    cin.getline(nname, 255);
    cout << endl;
    Newspaper* temp = new Newspaper[size - 1];
    for (int i = 0; i < size; i++)
    {

        if (newspapers[i].name == nname)
        {

            for (int j = 0; j < size; j++)
            {
                temp[i] = newspapers[i];
            }
        }
    }
    if (newspapers != NULL && size != 0)
    {
        // удаление старого массива если он существовал
        delete[]newspapers;
    }
    size--; // уменьшаем размер массива
    newspapers = temp; // назначаем указатель нового массива в старую переменную
    // т.к данный указатель был передан по ссылке он так же изменится в мэйне
}

//---------

void Lib::FillBook()
{
    Book* temp = new Book[listBook + 1];
    for (int i = 0; i < listBook; i++)
    {
        temp[i] = books[i];
    }
    temp[listBook].Fill();
    if (books != NULL && listBook != 0)
    {
        delete[]books;
    }
    listBook++;
    books = temp;
}

void Lib::FillJournal()
{
    Journal* temp = new Journal[listJournal + 1];
    for (int i = 0; i < listJournal; i++)
    {
        temp[i] = journals [i] ;
    }
    temp[listJournal].Fill();
    if (journals != NULL && listJournal != 0)
    {
        delete[]journals;
    }
    listJournal++;
    journals = temp;
}

void Lib::FillNewspaper()
{
    Newspaper* temp = new Newspaper[listNewspaper + 1];
    for (int i = 0; i < listNewspaper; i++)
    {
        temp[i] = newspapers[i];
    }
    temp[listNewspaper].Fill();
    if (newspapers != NULL && listNewspaper != 0)
    {
        delete[]newspapers;
    }
    listNewspaper++;
    newspapers = temp;
}

//---------

void Add_Book(Book*& books, int& size)
{
    Book* temp = new Book[size + 1];
    for (int i = 0; i < size; i++)
    {
        temp[i].name = new char[strlen(books[i].name) + 1];
        strcpy(temp[i].name, books[i].name);

        temp[i].author = new char[strlen(books[i].author) + 1];
        strcpy(temp[i].author, books[i].author);

        temp[i].genre = new char[strlen(books[i].genre) + 1];
        strcpy(temp[i].genre, books[i].genre);
    }
    temp[size].Fill();
    if (books != NULL && size != 0)
    {
        delete[]books;
    }
    size++;
    books = temp;
}

void Add_Journal(Journal*& journals, int& size)
{
    Journal* temp = new Journal[size + 1];
    for (int i = 0; i < size; i++)
    {
        temp[i].name = new char[strlen(journals[i].name) + 1];
        strcpy(temp[i].name, journals[i].name);

        temp[i].author = new char[strlen(journals[i].author) + 1];
        strcpy(temp[i].author, journals[i].author);

        temp[i].genre = new char[strlen(journals[i].genre) + 1];
        strcpy(temp[i].genre, journals[i].genre);
    }
    temp[size].Fill();
    if (journals != NULL && size != 0)
    {
        delete[]journals;
    }
    size++;
    journals = temp;
}

void Add_Newspaper(Newspaper*& newspapers, int& size) {
    Newspaper* temp = new Newspaper[size + 1];
    for (int i = 0; i < size; i++)
    {
        temp[i].name = new char[strlen(newspapers[i].name) + 1];
        strcpy(temp[i].name, newspapers[i].name);

        temp[i].author = new char[strlen(newspapers[i].author) + 1];
        strcpy(temp[i].author, newspapers[i].author);

        temp[i].genre = new char[strlen(newspapers[i].genre) + 1];
        strcpy(temp[i].genre, newspapers[i].genre);
    }
    temp[size].Fill();
    if (newspapers != NULL && size != 0)
    {
        delete[]newspapers;
    }
    size++;
    newspapers = temp;
}

//---------

void Print_Book(Book*& books, int& size)
{
    for (int i = 0; i < size; i++)
    {
        cout << i + 1 << " : ";
        cout << books[i].name << endl;
        cout << books[i].author << endl;
        cout << books[i].genre << endl;
    }
    int ch = 1;
    while (ch > 0) {
        cout << "Вывести по номеру (0 - Выйти из меню)" << endl;
        cin >> ch;
        if (ch > 0 && ch <= size)
        {
            cout << "---------------------->" << endl;
            books[ch - 1].Print();
            cout << "______________________>" << endl;
        }
    }
}

void Print_Journal(Journal*& journals, int& size)
{
    for (int i = 0; i < size; i++)
    {
        cout << i + 1 << " : ";
        cout << journals[i].name << endl;
        cout << journals[i].author << endl;
        cout << journals[i].genre << endl;
    }
    int ch = 1;
    while (ch > 0) {
        cout << "Вывести по номеру (0 - Выйти из меню)" << endl;
        cin >> ch;
        if (ch > 0 && ch <= size)
        {
            cout << "---------------------->" << endl;
            journals[ch - 1].Print();
            cout << "______________________>" << endl;
        }
    }
}

void Print_Newspaper(Newspaper*& newspapers, int& size)
{
    for (int i = 0; i < size; i++)
    {
        cout << i + 1 << " : ";
        cout << newspapers[i].name << endl;
        cout << newspapers[i].author << endl;
        cout << newspapers[i].genre << endl;
    }
    int ch = 1;
    while (ch > 0) {
        cout << "Вывести по номеру (0 - Выйти из меню)" << endl;
        cin >> ch;
        if (ch > 0 && ch <= size)
        {
            cout << "---------------------->" << endl;
            newspapers[ch - 1].Print();
            cout << "______________________>" << endl;
        }
    }
}


//---------

void Save_inFileBook(Book*& books, int& size)
{
    FILE* file;
    file = fopen("save_book.bin", "wb");
    if (file == NULL)
    {
        cout << "Ошибка открытия файла" << endl;
        return;
    }
    fwrite(&size, sizeof(int), 1, file);
    for (int i = 0; i < size; i++)
    {
        int s1 = strlen(books[i].name);
        fwrite(&s1, sizeof(int), 1, file);
        fwrite(books[i].name, sizeof(char), s1,file);
        int s2 = strlen(books[i].author);
        fwrite(&s2, sizeof(int), 1, file);
        fwrite(books[i].author, sizeof(char), s2, file);
        int s3 = strlen(books[i].genre);
        fwrite(&s3, sizeof(int), 1, file);
        fwrite(books[i].genre, sizeof(char), s3, file);
        fwrite(&books[i].dateOfIssue, sizeof(Date), 1, file);
    }
    fclose(file);
}

void Save_inFileJournal(Journal*& journals, int& size)
{
    FILE* file;
    file = fopen("save_journal.bin", "wb");
    if (file == NULL)
    {
        cout << "Ошибка открытия файла" << endl;
        return;
    }
    fwrite(&size, sizeof(int), 1, file);
    for (int i = 0; i < size; i++)
    {
        int s1 = strlen(journals[i].name);
        fwrite(&s1, sizeof(int), 1, file);
        fwrite(journals[i].name, sizeof(char), s1, file);
        int s2 = strlen(journals[i].author);
        fwrite(&s2, sizeof(int), 1, file);
        fwrite(journals[i].author, sizeof(char), s2, file);
        int s3 = strlen(journals[i].genre);
        fwrite(&s3, sizeof(int), 1, file);
        fwrite(journals[i].genre, sizeof(char), s3, file);
        fwrite(&journals[i].dateOfIssue, sizeof(Date), 1, file);
    }
    fclose(file);
}
void Save_inFileNewspaper(Newspaper*& newspapers, int& size)
{
    FILE* file;
    file = fopen("save_newspaper.bin", "wb");
    if (file == NULL)
    {
        cout << "Ошибка открытия файла" << endl;
        return;
    }
    fwrite(&size, sizeof(int), 1, file);
    for (int i = 0; i < size; i++)
    {
        int s1 = strlen(newspapers[i].name);
        fwrite(&s1, sizeof(int), 1, file);
        fwrite(newspapers[i].name, sizeof(char), s1, file);
        int s2 = strlen(newspapers[i].author);
        fwrite(&s2, sizeof(int), 1, file);
        fwrite(newspapers[i].author, sizeof(char), s2, file);
        int s3 = strlen(newspapers[i].genre);
        fwrite(&s3, sizeof(int), 1, file);
        fwrite(newspapers[i].genre, sizeof(char), s3, file);
        fwrite(&newspapers[i].dateOfIssue, sizeof(Date), 1, file);
    }
    fclose(file);
}

//---------

void ReadOfFile_Book(Book*& books, int& size)
{
    FILE* file = fopen("save_book.bin", "rb");
    if (file != NULL) {
        if (books != nullptr) {
            delete[] books;
        }
        fread(&size, 4, 1, file);
        int temp = 0;
        books = new Book[size];
        for (int i = 0; i < size; i++)
        {
            fread(&temp, 4, 1, file);
            books[i].name = new char[temp + 1];
            fread(books[i].name, 1, temp, file);
            books[i].name[temp] = '\0';

            fread(&temp, 4, 1, file);
            books[i].genre = new char[temp + 1];
            fread(books[i].genre, 1, temp, file);
            books[i].genre[temp] = '\0';

            fread(&temp, 4, 1, file);
            books[i].author = new char[temp + 1];
            fread(books[i].author, 1, temp, file);
            books[i].author[temp] = '\0';

            fread(&books[i].dateOfIssue, sizeof(Date), 1, file);
        }
        fclose(file);
    }
}

void ReadOfFile_Journal(Journal*& journals, int& size)
{
    FILE* file = fopen("save_journal.bin", "rb");
    if (file != NULL) {
        if (journals != nullptr) {
            delete[] journals;
        }
        fread(&size, 4, 1, file);
        int temp = 0;
        journals = new Journal[size];
        for (int i = 0; i < size; i++)
        {
            fread(&temp, 4, 1, file);
            journals[i].name = new char[temp + 1];
            fread(journals[i].name, 1, temp, file);
            journals[i].name[temp] = '\0';

            fread(&temp, 4, 1, file);
            journals[i].genre = new char[temp + 1];
            fread(journals[i].genre, 1, temp, file);
            journals[i].genre[temp] = '\0';

            fread(&temp, 4, 1, file);
            journals[i].author = new char[temp + 1];
            fread(journals[i].author, 1, temp, file);
            journals[i].author[temp] = '\0';
            fread(&journals[i].dateOfIssue, sizeof(Date), 1, file);
        }
        fclose(file);
    }
}

void ReadOfFile_Newspaper(Newspaper*& newspapers, int& size)
{
    FILE* file = fopen("save_newspaper.bin", "rb");
    if (file != NULL) {
        if (newspapers != nullptr) {
            delete[] newspapers;
        }
        fread(&size, 4, 1, file);
        int temp = 0;
        newspapers = new Newspaper[size];
        for (int i = 0; i < size; i++)
        {
            fread(&temp, 4, 1, file);
            newspapers[i].name = new char[temp + 1];
            fread(newspapers[i].name, 1, temp, file);
            newspapers[i].name[temp] = '\0';

            fread(&temp, 4, 1, file);
            newspapers[i].genre = new char[temp + 1];
            fread(newspapers[i].genre, 1, temp, file);
            newspapers[i].genre[temp] = '\0';

            fread(&temp, 4, 1, file);
            newspapers[i].author = new char[temp + 1];
            fread(newspapers[i].author, 1, temp, file);
            newspapers[i].author[temp] = '\0';
            fread(&newspapers[i].dateOfIssue, sizeof(Date), 1, file);
        }
        fclose(file);
    }
}

//---------