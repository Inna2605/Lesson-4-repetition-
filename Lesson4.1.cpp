/*���������� ������� � ��������� ����� ����� �� ����,
��������� ������� �� ���� �����, ��������� � ����.
�������. ���������, ���������� ��� ����� 12345.
�� ������ �� �,������� �����, �������� ������� � 54321.*/

#include<iostream>
using namespace std;
int main() {
	cout << "Vvedite chislo bilshe za nul: ";
	int N, n;
	cin >> N;
	for (int x = 0; x < N; x++) {
		n = N % 10;
		cout << n;
		N /= 10;
	}
}