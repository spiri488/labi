#include <iostream>
#include <locale>
#include <cmath>>
using namespace std;
int main()
{
	float x, y, sqrtt, bkrug, mkrug, pryam, kub;
	setlocale(LC_ALL, "RUS");
	cout << " Введите координаты Х и Y в промежутке [-3; 3] " << endl;
	cin >> x;
	cin >> y;
	int res = -1;
	if (x > 3 || x < -3 || y>3 || y < -3) {
		cout << "Ошибка. Введите числа в промежутке [-3 ; 3]";
	}
	else {
		sqrtt = (-1) * sqrt(x) + 1;
		kub = pow((x - 1), 3);
		mkrug = sqrt((x * x) + (y - 0, 5) * (y - 0, 5));
		bkrug = sqrt((x * x) + (y * y));
		pryam = ((-1) * x - 0, 5);
	}

	if (y > pryam) {
		if (y > 0) {
			if (x > 0) {
				if (2 < bkrug) {
					if (x > kub) {
						res = 4;
					}
					else
						res = 5;
				}
				else if (mkrug > 0.5) {
					if (x > kub && y > sqrtt) {
						res = 13;
					}
					if (y <= sqrtt) {
						res = 24;
					}
					if (y > sqrtt && x < kub) {
						res = 14;
					}

				}
				else if (mkrug <= 0.5) {
					if (y > sqrtt) {
						res = 22;
					}
					else {
						res = 23;
					}

				}

			}
			else if (2 < bkrug) {
				res = 6;
			}
			else if (2 >= bkrug && mkrug > 0.5) {
				if (y > kub) {
					res = 15;
				}
				else {
					res = 26;
				}
			}
			else if (2 >= bkrug && mkrug <= 0.5) {
				if (y > kub) {
					res = 21;
				}
				else {
					res = 25;
				}
			}

		}
		else {
			if (2 < bkrug) {
				if (y >= sqrtt) {
					res = 3;
				}
				else {
					res = 2;
				}
			}

			else if (y > pryam && x < 0) {
				res = 19;
			}
			else {
				if (y >= sqrtt) {
					res = 12;
				}
				else {
					res = 11;
				}
			}
		}

	}
	if (y < pryam) {
		if (2 <= bkrug) {
			if (y < 0 && x > 0) {
				res = 1;
			}
			else if (y < 0 && x <= 0 && x >= kub) {
				res = 9;
			}
			else if (y < 0 && x < 0 && x < kub) {
				res = 8;
			}
			else if (y > 0 && x < 0) {
				res = 7;
			}
		}
		else {
			if (x <= 0 && y <= 0 && x >= kub) {
				res = 18;
			}
			else if (x <= 0 && y <= 0 && x < kub) {
				res = 17;
			}
			else if (x < 0 && y > 0 && y > kub) {
				res = 16;
			}
			else if (x < 0 && y >= 0 && y < kub) {
				res = 20;
			}
			else if (x > 0 && y < 0) {
				res = 10;
			}

		}

	}
	if (y == 0)
	{
		if (x < -2)
		{
			res = 8;
		}
		else if (x < kub)
		{
			res = 17;
		}
		else if (x == kub)
		{
			res = 18;
		}
		else if (x < pryam)
		{
			res = 20;
		}
		else if (x <= 0)
		{
			res = 26;
		}
		else if (x <= sqrtt)
		{
			res = 24;
		}
		else if (x <= 2)
		{
			res = 13;
		}
		else
		{
			res = 4;
		}
	}
	if (x == 0)
	{
		if (y < -2)
		{
			res = 9;
		}
		else if (y < pryam)
		{
			res = 18;
		}
		else if (y < 0)
		{
			res = 19;
		}
		else if (y > 0 && y <= 1)
		{
			res = 25;
		}
		else if (y > 1 && y <= 2)
		{
			res = 15;
		}
		else
		{
			res = 6;
		}
	}
	if (y = (-1) * x - 0, 5)
	{
		if (2 < bkrug)
		{
			if (y > 0)
			{
				res = 7;
			}
			else
			{
				res = 2;
			}
		}
		else
		{
			if (x > 0)
			{
				res = 11;
			}
			else if (y < 0)
			{
				res = 19;
			}
			
		}
	}


	cout << "Зона номер " << res << endl;
}


	