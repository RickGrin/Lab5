#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <cstdlib>

using namespace std;

ifstream fin;
ofstream fout;

struct name
{
    string First_Name, Second_Name, Third_Name;
    friend ostream& operator<<(ostream& stream, name& name_obj)
    {
        stream << name_obj.First_Name << " " << name_obj.Second_Name << " " << name_obj.Third_Name << " ";
        return stream;
    }
    friend istream& operator>>(istream& stream, name& name_obj)
    {
        stream >> name_obj.First_Name >> name_obj.Second_Name >> name_obj.Third_Name;
        return stream;
    }
};

struct book
{
    int ID;
    name author;
    string title;
    int price;
    friend ostream& operator<<(ostream& stream, book& book_obj)
    {
        stream << "Индивидуальный номер - " << book_obj.ID << ", автор - " << book_obj.author << ", название " << book_obj.title << ", цена - " << book_obj.price;
        return stream;
    }
    friend istream& operator>>(istream& stream, book& book_obj)
    {
        stream >> book_obj.ID >> book_obj.author >> book_obj.title >> book_obj.price;
        return stream;
    }
};

void start()
{
    vector<book> books;

    fin.open("text.txt");

    while (!fin.eof())
    {
        books.push_back(book());
        fin >> books.back();
        cout << books.back() << endl;
    }
}

int main()
{
    setlocale(LC_ALL, "Russian");
    start();

    return 0;
}
