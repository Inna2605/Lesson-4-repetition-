/*��� ��������� ������ ������� �. ������� ������ 9 ����. 
���� � ��������� ������� �������, �� ������ �������� �����, ���� ������ ������, 
������� ������ � ��������� �������, ������, � ���������.
�������� ��������, ��� 9 ���� ������ ����� 1 ��� 0 (����/�����) 
� ���� ��������� ��������� ����,������ �������� �������� �.*/

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