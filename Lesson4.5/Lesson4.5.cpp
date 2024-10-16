/*Для прийняття рішення студент Д. підкидав монету 9 разів. 
Якщо в результаті кількість монеток, що випали стороною «орел», була парним числом, 
приймав рішення в позитивну сторону, інакше, у негативну.
Напишіть програму, яка 9 разів запитує число 1 або 0 (орел/решка) 
і видає відповідний результат розв,язання проблеми студента Д.*/

#include<iostream>
using namespace std;
int main() {
	int Mon, Sum = 0;
	for (int x = 0; x < 9; x++) {
		cout << "\nPidkinte monety\n"
			<< "Vvedite 1, yaksch vupav \"Orel\"\n"
			<< "Vvedite 0, yaksch vupala \"Reshka\": ";
		cin >> Mon;
		if (Mon == 0 || Mon == 1) {
			Sum += Mon;
		}
		else {
			cout << "\nNevirno vvedeni danni!\n";
			return 0;
		}
	}
	if (Sum % 2 == 0 && Sum != 0) {
		cout << "\n\nVsogo vupalo \"Orlov\" " << Sum << "\n\nVASHE RISHENNYA POZUTUVNE!\n";
	}
	else {
		cout << "\n\nVsogo vupalo \"Orlov\" " << Sum << "\n\nVASHE RISHENNYA NEGATUVNE!\n";
	}
}