#include <iostream>

#include <string.h>

#include <fstream>

#include <stdio.h>

#include <cctype>

using namespace std;

int main()

{

	setlocale(LC_ALL, "");

	ifstream fin("K.txt");

	int n = 0, i = 0, j = 0; int choose;

	char exit[50];

	struct k

	{

		int v; //Чит билет

		int k;// Цена

		char s[50];//Н книги

		char n[50];//ФИО

	};

	while (exit[0] != '!')

	{

		n++;

		fin.getline(exit, 50);

	}

	n--;

	k* arr_k = new k[n];

	fin.seekg(0, ios_base::beg);

	for (i = 0; i < n; i++)

	{

		fin >> arr_k[i].v;

		

		fin >> arr_k[i].s;

		fin >> arr_k[i].k;

		fin.getline(arr_k[i].n, 50);

		cout << "Номер читательского билета: " << arr_k[i].v << endl;

	

		cout << "Название книги: " << arr_k[i].s << endl;

		cout << "ФИО автора: " << arr_k[i].n << endl;

		cout << "стоимость книги в рублях: " << arr_k[i].k << endl << endl;

	}

	cout << "Введите номер задания-"; cin >> choose;

	

	if (choose == 2) 
	{

		for (i = 65; i < 91; i++)

		{

			for (j = 0; j < n; j++)

			{

				if ((arr_k[j].k > 100) && (arr_k[j].k <1000))

				{

					cout << "Номер читательского билета: " << arr_k[j].v << endl;

						cout << "Название книги: " << arr_k[j].s << endl;

						cout << "ФИО автора: " << arr_k[j].n << endl;

						cout << "стоимость книги в рублях:" << arr_k[j].k << endl << endl;

						return 0;
				}
			}

			

		}

		system("pause");

		return 0;

	}

}