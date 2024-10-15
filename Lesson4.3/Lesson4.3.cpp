/*У перший день равлик проповз 15 см. Кожен наступний день він проповзав на 2 см далі. 
Визначити, яку загальну відстань проповзе равлик через N днів.
Примітка. Наприклад, користувач ввів число 4.
Отже, равлик повз 4 дні, тому сумарний шлях складе 72 см.*/

#include<iostream>
using namespace std;
int main() {
	int day1 = 15, S,sum = 0, N;
	cout << "Vvedite skilku dniv povze ravluk: ";
	cin >> N;
	S = day1;
	for (int x = 2; x <= N; x++) {
		S += 2;
		sum += S;
	}
	cout << "Ravluk za " << N << " dniv propovz " << sum + day1 << " sm\n";
}