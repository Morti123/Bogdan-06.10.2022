#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	//Case1.Дано целое число в диапазоне 1–7.Вывести строку — название дня
		//недели, соответствующее данному числу(1 — «понедельник», 2 — «вторник.
	/*int day;
	cin >> day;
	if (day == 1) {
		cout << " Понедельник " << endl;
	}
	else if (day == 2) {
		cout << " Вторник " << endl;
	}
	else if (day == 3) {
		cout << " Среда " << endl;
	}
	else if (day == 4) {
		cout << " Четверг " << endl;
	}
	else if (day == 5) {
		cout << " Пятница " << endl;
	}
	else if (day == 6) {
		cout << " Суббота " << endl;
	}
	else if (day == 7) {
		cout << " Воскресенье " << endl;
	}
	else {
		cout << " ошибка " << endl;
	}*/
	/*int day;
	cin >> day;
	switch (day) {
	case 1: cout << " Понедельник " << endl; break;
	case 2: cout << " Вторник " << endl; break;
	case 3: cout << " Среда " << endl; break;
	case 4: cout << " Четверг " << endl; break;
	case 5: cout << " Пятница " << endl; break;
	case 6: cout << " Суббота " << endl; break;
	case 7: cout << " Воскресенье " << endl; break;
	default: cout << " error " << endl; break;
	}*/
	//Case2.Дано целое число K.Вывести строку - описание оценки, соответствующей числу K(1 — «плохо», 2 — «неудовлетворительно», 3 — «удовлетворительно», 4 — «хорошо», 5 — «отлично»).Если K не лежит в диапазоне 1–5,
		//то вывести строку «ошибка».
	/*int k;
	cin >> k;
	switch (k) {
	case 1: cout << " плохо " << endl; break;
	case 2: cout << " неудовлетворительно " << endl; break;
	case 3: cout << " удовлетворительно " << endl; break;
	case 4: cout << " хорошо " << endl; break;
	case 5: cout << " отлично " << endl; break;
	default: cout << " ошибка " << endl; break;
	}*/
	//Case3.Дан номер месяца — целое число в диапазоне 1–12(1 — январь, 2 — февраль и т.д.).Вывести название соответствующего времени года(«зима»,
		//«весна», «лето», «осень»).
	/*int month;
	cin >> month;
	switch (month) {
	case 1:
	case 2:
	case 12: cout << " зима " << endl; break;
	case 3:
	case 4:
	case 5: cout << " Весна " << endl; break;
	case 6:
	case 7:
	case 8: cout << " Лето " << endl; break;
	case 9:
	case 10:
	case 11: cout << " Осень  " << endl; break;
	}*/
/*	Case4◦
		.Дан номер месяца — целое число в диапазоне 1–12(1 — январь, 2 —
			февраль и т.д.).Определить количество дней в этом месяце для невисокосного года.*/
	/*int month;
	cin >> month;
	switch (month) {
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12: cout << " 31 " << endl; break;
	case 2: cout << " 28 " << endl; break;
	case 4:
	case 6:
	case 9:
	case 11: cout << " 30 " << endl; break;
	}*/
	/*Case5.Арифметические действия над числами пронумерованы следующим
		образом : 1 — сложение, 2 — вычитание, 3 — умножение, 4 — деление.Дан
		номер действия N(целое число в диапазоне 1–4) и вещественные числа A
		и B(В не равно 0).Выполнить над числами указанное действие и вывести
		результат.*/
	/*int n, a, b, c;
	cin >> n >> a >> b;
	switch (n) {
	case 1: c = a + b; break;
	case 2: c = a - b; break;
	case 3: c = a * b; break;
	case 4: c = a / b; break;
	default: cout << " ошибка " << endl; break;
	}
	cout << c << endl;*/
//1.1. Треугольник со сторонами а, b, с является равносторонним.
/*int a, b, c;
cin >> a >> b >> c;
bool r = a == b && b == c;
	cout << boolalpha << r << endl;
	*/
//1.2. Целое число N является четным двузначным числом.
/*int n;
cin >> n;
bool r = n % 2 == 0 && n >= 10;
cout << boolalpha << r << endl;*/
//1.3. Треугольник со сторонами а, b, с является равнобедренным.
/*int a, b, c;
cin >> a >> b >> c;
bool r = a == b && c != b || b == c && a != b || a == c && b != c;
cout << boolalpha << r << endl;*/
//2.1 Даны два угла треугольника(в градусах).Определить, существует ли такой треугольник.Если да, то прямоугольный ли он.
/*int a, b;
cin >> a >> b;
if (a+b <180 && a>0 &&b>0 ) {
	cout << " Существует "<< endl;
}
 if (b == 90 || a == 90) {
	cout << " Прямой " << endl;
}
*/
//2.2. На плоскости XOY задана своими координатами точка А.Указать, в какой координатной четверти находится точка
/*int x, y;
cin >> x >> y;
if (x > 0 && y > 0)
cout << " 1 " << endl;
if (x > 0 && y < 0)
cout << " 4 " << endl;
if (x < 0 && y > 0)
cout << " 2 " << endl;
if (x < 0 && y < 0)
cout << " 3 " << endl;*/
	return 0;
}
