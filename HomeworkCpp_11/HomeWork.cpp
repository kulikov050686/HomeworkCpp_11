#include "HomeWork.h"

void HomeWork::Run()
{
	system("cls");
	setlocale(LC_ALL, "Russian.utf8");

	bool exit = false;
	std::string text = "Выберите пункт меню";
	std::vector<std::string> item = { "Задача 1",
									  "Задача 2",
									  "Задача 3",									  
									  "Выход" };

	MenuController menu(item);

	while (!exit)
	{
		switch (menu.selectedMenuItem(text))
		{
		case 0:
			Task1();
			break;
		case 1:
			Task2();
			break;
		case 2:
			Task3();
			break;		
		case 3:
			exit = true;
			break;
		}

		_getch();
	}
}

void HomeWork::Task1()
{
	system("cls");
	setlocale(LC_ALL, "Russian.utf8");

	int n = 0;
	std::cout << "Введите количество чисел:";
	std::cin >> n;

	std::vector<int> vec_1(n);
	
	for (std::vector<int>::iterator i = vec_1.begin(); i != vec_1.end(); i++)
	{
		std::cout << "Введите число: ";
		std::cin >> *i;
	}

	int number = 0;
	int k = 0;
	std::cout << "Введите число которое надо удалить: ";
	std::cin >> number;

	for (size_t i = 0; i < vec_1.size(); i++)
	{
		if (vec_1[i] != number)
		{
			vec_1[k] = vec_1[i];
			k++;
		}
	}

	std::vector<int>::iterator iterator = vec_1.begin();

	vec_1.erase(iterator + k, iterator + vec_1.size());

	for (std::vector<int>::iterator i = vec_1.begin(); i != vec_1.end(); i++)
	{
		std::cout << *i << std::endl;
	}
}

void HomeWork::Task2()
{
	system("cls");
	setlocale(LC_ALL, "Russian.utf8");

	std::vector<double> prices = { 2.5, 4.25, 3.0, 10.0 };
	std::vector<int> purchases = { 1, 1, 0, 3 };

	double sum = 0;

	for (std::vector<int>::iterator i = purchases.begin(); i != purchases.end(); i++)
	{
		sum += prices.at(*i);
	}

	std::cout << "Суммарная стоимость равна: " << sum << std::endl;
}

void HomeWork::Task3()
{
	system("cls");
	setlocale(LC_ALL, "Russian.utf8");

	std::vector<int> vec(5);
	int number = 0;
	int k = 0;

	for (std::vector<int>::iterator i = vec.begin(); i != vec.end(); i++)
	{
		std::cout << "Введите целое число: ";
		std::cin >> number;

		if (number != -1)
		{
			*i = number;
			k++;
		}
		else
		{
			break;
		}			
	}
	
	while (number != -1)
	{
		std::cout << "Введите целое число: ";
		std::cin >> number;

		if (number != -1)
		{
			std::vector<int>::iterator i = vec.begin();

			vec.erase(i);
			vec.push_back(number);
		}						
	}

	for (size_t i = 0; i < k; i++)
	{
		std::cout << vec[i] << std::endl;
	}		
}
