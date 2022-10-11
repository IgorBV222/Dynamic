//Шаблон
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
//Заполняем массив
template <typename T>
void fill_arr(T arr[], const int length, int begin, int end) {
	srand(time(NULL));
	for (int i = 0; i < length; i++)
		arr[i] = rand() % (end - begin) + begin;
}
//Выводим массив в консоль
template <typename T>
void show_arr(T arr[], const int length) {
	cout << '[';
	for (int i = 0; i < length; i++)
		cout << arr[i] << ", ";
	cout << "\b\b]\n";
}
//Задача 1. Увеличиваем длинну массива
template <typename T>
void add_el(T *&arr, const int length, int num) {
	if (num <= 0)
		return;

	T* tmp = new T[length + num]{};//создаем массив из 0 нужной длинны
	for (int i = 0; i < length; i++)
		tmp[i] = arr[i];

	delete[] arr;
	arr = tmp;
}

//Задача 2. Уменьшение длинны массива
template <typename T>
void substract_el(T*& arr, const int length, int num) {
	if (num <= 0)
		return;
	if (num > length) {
		delete[] arr;
		arr = new int[0];
		return;
	}

	T* tmp = new T[length - num];//создаем массив нужной длинны
	for (int i = 0; i < length - num; i++)
		tmp[i] = arr[i];

	delete[] arr;
	arr = tmp;
}




int main() {
	setlocale(LC_ALL, "Russian");
	int n, m;
	//Динамические переменные
	/*int* point = new int;//выделили участок динамической памяти размером в 4 байта с помощью оператора new

	*point = 10;

	cout << "point = " << point << '\n';
	cout << "*point = " << *point << '\n';

	delete point; //очистили память перед перенаправлением указателя, обезапасели от утечки памяти
	point = nullptr;
	if (point != nullptr)
		cout << "*point = " << *point << '\n';
	else
		cout << "Указатель нейтрален.\n";


	point = new int;//выделение нового участка памяти...и далее "по кругу"
	*point = 15;
	cout << "point = " << point << '\n';
	cout << "*point = " << *point << '\n';
	//Утечка памяти - явление, в ходе которого значения используемые в программе остаются в оперативной памяти.
	delete point;//очистили область память перед перенаправлением указателя, обезапасели от утечки памяти*/


	//Динамические массивы
	/*cout << "Введите длинну массива: ";
	cin >> n;
	if (n < 0)
		cout << "ОШИБКА! Длинна не может быть отрицательной.\n";
	else {
		int* mass = new int[n]; //выделение динамической памяти для хранения массива
		cout << "Динамический массив:\n";
		srand(time(NULL));
		for (int i = 0; i < n; i++) {
			mass[i] = rand() % 10 + 1;
			cout << mass[i] << ", ";
		}
		cout << "\b\b.\n";
		delete[] mass;//очищаем память от всего массива
	}*/

	//Задача 1. Увеличение массива
	/*cout << "Задача 1. \nВведите длинну массива:\n";
	int size1;
	cin >> size1;
	int* arr1 = new int[size1];
	cout << "Изначальный массив:\n";
	fill_arr(arr1, size1, 1, 11);
	show_arr(arr1, size1);

	cout << "Введите количество новых элементов:\n";
	cin >> n;
	add_el(arr1, size1, n);
	size1 += n;
	cout << "Итоговый массив:\n";
	show_arr(arr1, size1);*/

	//Задача 2. Уменьшение длинны массива

	/*cout << "Задача 2. \nВведите длинну массива:\n";
	int size2;
	cin >> size2;
	int* arr2 = new int[size2];
	cout << "Изначальный массив:\n";
	fill_arr(arr2, size2, 1, 11);
	show_arr(arr2, size2);
	cout << "Введите количество элементов, которое необходимо убрать:\n";
	cin >> n;
	substract_el(arr2, size2, n);
	size2 -= n;
	cout << "Итоговый массив:\n";
	show_arr(arr2, size2);*/


	return 0;
}