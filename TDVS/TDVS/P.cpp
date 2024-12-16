//ВНИМАНИЕ, подключите все библиотеки плиз!!
//в итоге функция получает строку которую нужно было написать (str1), строку введенную пользователем (str_pol);
//возвращает pravilnost_vvoda=1 если строка введена правильно, pravilnoat_vvoda=0 если неправильно, pravilnost_vvoda=0 если длина превышает ширину терминала
//побочки: если длина строки превышает ширину терминала выводит game over; новая строка с удвоеными ошибками хранится в str2 (местная переменная)
#include<iostream>
#include<string>
#include<windows.h>
#include<cstdlib>
#include<cstdio>
using namespace std;

bool pravilnost_vvoda = 1;
bool terminal_width=0;


bool checkuserline(string str1, string str_pol) 
{
	string str2;
	int dl1, dl2, dl_pol, i, d=0, width;
	dl1 = str1.length();
	dl_pol = str_pol.length();

	if (str_pol == str1) return pravilnost_vvoda;

	else
	{
		if (dl1 > dl_pol)
		{
			d = dl1 - dl_pol;
			for (i = 0; i < d; i++) str_pol = str_pol + "1";
			dl_pol = str_pol.length();
		}

		if (dl1 < dl_pol)
		{
			d = dl1 - dl_pol;
			const string empty;
			str_pol = str_pol.replace(dl1 + 1, d, empty);
			dl_pol = str_pol.length();
		}

		for (i = 0; i < dl_pol; i++)
		{
			if (str1[i] == str_pol[i])
				str2 = str2 + str1[i];
			else
				str2 = str2 + str1[i] + str1[i];
		}

		if (str2 == str1) pravilnost_vvoda = 1;
		else pravilnost_vvoda = 0;
	}

#ifdef _WIN32
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_SCREEN_BUFFER_INFO csbi;
	if (GetConsoleScreenBufferInfo(hConsole, &csbi))
		width=csbi.srWindow.Right - csbi.srWindow.Left + 1;
#else
	FILE* fp = popen("tput cols", "r");
	int width;
	fscanf(fp, "%d", &width);
	fclose(fp);
#endif
	dl2 = str2.length();
	if (dl2 > width)
	{
		cout << endl<<"GAME OVER" << endl;
		terminal_width = 1;
		return pravilnost_vvoda = 0;
	}

	cout << "vvesti v sled ras: " << str2 << endl;
	return pravilnost_vvoda;
}


