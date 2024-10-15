/*Користувач вводить з клавіатури число, необхідно показати на екран суму його цифр.
Примітка. Наприклад, користувач ввів число 12345.
На екрані має з,явитися повідомлення про те, що сума цифр числа є 15.*/

#include<iostream>
using namespace std;
int main() {
	cout << "Vvedite chislo: ";
	int N, n, sum = 0;
	cin >> N;
	for (int x = 0; N != 0; x++) {
		n = N % 10;
		sum += n;
		N /= 10;
	}
	cout << "Syma thifr chisla = " << sum << endl;
}