#include <iostream>
#include <lmcons.h>
#include <Windows.h>

void DivideFunc() {

	double number1, number2;
	std::cout << "Insert a number: " << std::endl;
	std::cin >> number1;
	std::cout << "Insert another number: " << std::endl;
	std::cin >> number2;
	double outcome = number1 / number2;

	std::cout << number1 << " ÷ " << number2 << " = " << outcome << std::endl;

}

void MultiplyFunc() {

	double num1, num2;
	std::cout << "Insert a number: " << std::endl;
	std::cin >> num1;
	std::cout << "Insert another number: " << std::endl;
	std::cin >> num2;
	double output = num1 * num2;

	std::cout << num1 << " x " << num2 << " = " << output << std::endl;
}

void AddFunc() {

	double x, y;
	std::cout << "Insert a number: " << std::endl;
	std::cin >> x;
	std::cout << "Insert another number: " << std::endl;
	std::cin >> y;
	double result = x + y;

	std::cout << x << " + " << y << " = " << result << std::endl;

}

void SubtractFunc() {

	double e, a;
	std::cout << "Insert a number: " << std::endl;
	std::cin >> e;
	std::cout << "Insert another number: " << std::endl;
	std::cin >> a;
	double answer = e - a;

	std::cout << e << " + " << a << " = " << answer << std::endl;

}

int main() {

	//  0x41	-	A key
	//  0x42	-	B key
	//  0x43	-	C key
	//  0x44	-	D key
	// 	0x59	-	Y key
	//  0x4E	-	N key

	TCHAR username[UNLEN + 1]{}; // copied from this guy: https://www.youtube.com/watch?v=Z7ahuHV5eXY&t=63s
	DWORD username_len = UNLEN + 1; // copied from this guy: https://www.youtube.com/watch?v=Z7ahuHV5eXY&t=63s

	GetUserName((TCHAR*)username,&username_len); // copied from this guy: https://www.youtube.com/watch?v=Z7ahuHV5eXY&t=63s

	std::wcout << "Hello, " << username << std::endl; // copied from this guy: https://www.youtube.com/watch?v=Z7ahuHV5eXY&t=63s


	start:

		std::cout << "________________ \n a - add        ) \n b - subtract   ) \n c - multiply   ) \n d - divide     )\n----------------" << std::endl;

		while (true) {

			if (GetAsyncKeyState(0x41) & 1) { // add

				if (true == true) {

					AddFunc();

					std::cout << "Like this application? press Y to start again and N to close the application" << std::endl;

					while (true) {

						if (GetAsyncKeyState(0x59) & 1) { // y key

							goto start;

						} else if (GetAsyncKeyState(0x4E) & 1) { // n key

							return 0;

						}
					}
				}
			} else if (GetAsyncKeyState(0x42) & 1) { // subtract

				if (true == true) {

					SubtractFunc();

					std::cout << "Like this application? press Y to start again and N to close the application" << std::endl;

					while (true) {

						if (GetAsyncKeyState(0x59) & 1) { // y key

							goto start;

						} else if (GetAsyncKeyState(0x4E) & 1) { // n key

							return 0;

						}
					}
				}
			} else if (GetAsyncKeyState(0x43) & 1) { // multiply

				if (true == true) {

					MultiplyFunc();

					std::cout << "like this application? press Y to start again and N to close the application" << std::endl;

					while (true) {

						if (GetAsyncKeyState(0x59) & 1) { // y key

							goto start;

						} else if (GetAsyncKeyState(0x4E) & 1) { // n key

							return 0;

						}
					}
				}
			} else if (GetAsyncKeyState(0x44) & 1) { // divide

				if (true == true) {

					DivideFunc();

					std::cout << "like this application? press Y to start again and N to close the application" << std::endl;

					while (true) {

						if (GetAsyncKeyState(0x59) & 1) { // y key

							goto start;

						}
						else if (GetAsyncKeyState(0x4E) & 1) { // n key

							return 0;

						}
					}
				}
			}
		}

	std::cin.get();

}