/*���������� ������� � ��������� �����, ��������� �������� �� ����� ���� ���� ����.
�������. ���������, ���������� ��� ����� 12345.
�� ����� �� �,������� ����������� ��� ��, �� ���� ���� ����� � 15.*/

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