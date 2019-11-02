#include "pch.h"
#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{
	int num1, num2;
	string plus = "+";
	string minus = "-";
	string multiply = "*";
	string division = "/";
	string remainder = "%";
	
	string choice;


	cout << R"( ____    ____  _____ ____   __         __   ____  _        __  __ __  _       ____  ______   ___   ____  
|    \  /    |/ ___/|    | /  ]       /  ] /    || |      /  ]|  |  || |     /    ||      | /   \ |    \ 
|  o  )|  o  (   \_  |  | /  /       /  / |  o  || |     /  / |  |  || |    |  o  ||      ||     ||  D  )
|     ||     |\__  | |  |/  /       /  /  |     || |___ /  /  |  |  || |___ |     ||_|  |_||  O  ||    / 
|  O  ||  _  |/  \ | |  /   \_     /   \_ |  _  ||     /   \_ |  :  ||     ||  _  |  |  |  |     ||    \ 
|     ||  |  |\    | |  \     |    \     ||  |  ||     \     ||     ||     ||  |  |  |  |  |     ||  .  \
|_____||__|__| \___||____\____|     \____||__|__||_____|\____| \__,_||_____||__|__|  |__|   \___/ |__|\_|
                                                                                                         )" << '\n';

	cout << "Enter first number: ";
	cin >> num1;

	cout << "What math operation are we doing? ";
	cin >> choice;

	cout << "Enter second number: ";
	cin >> num2;

	if (choice == plus)
	{
		cout << num1 + num2;
	}
	else if (choice == minus)
	{
		cout << num1 - num2;
	}
	else if (choice == multiply)
	{
		cout << num1 * num2;
	}
	else if (choice == division)
	{
		cout << num1 / num2;
	}
	else if (choice == remainder)
	{
		cout << num1 % num2;
	}

	return 0;
}

