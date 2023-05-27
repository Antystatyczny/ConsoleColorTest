#include <Windows.h>
#include <iostream>

using std::cout;
using std::endl;

int main()
{
	WORD i;
	HANDLE hStdout = GetStdHandle(STD_OUTPUT_HANDLE);

	SetConsoleTitle(TEXT("Console Color test..."));

	for (i = 0; i < 16; i++)
	{
		SetConsoleTextAttribute(hStdout, i );
		cout << "Hello from windows console. This is color " << i << endl;
	}

	Sleep(2000);
	
	for (i = 0 ; i < 16 ; i++)
	{
		SetConsoleTextAttribute(hStdout, (i << 4) | FOREGROUND_GREEN);
		system("cls");
		cout << "Hello from windows console. This is color " << (i<<4) << endl;
		Sleep(500);
	}
	system("pause>nul");
}

//color 0 is Black.
//color 1 is DarkBlue.
//color 2 is DarkGreen.
//color 3 is DarkCyan.
//color 4 is DarkRed.
//color 5 is DarkMagenta.
//color 6 is DarkYellow.
//color 7 is Gray.
//color 8 is DarkGray.
//color 9 is Blue.
//color 10 is Green.
//color 11 is Cyan.
//color 12 is Red.
//color 13 is Magenta.
//color 14 is Yellow.
//color 15 is White.

