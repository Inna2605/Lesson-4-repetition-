/*� ������ ���� ������ ������� 15 ��. ����� ��������� ���� �� ��������� �� 2 �� ���. 
���������, ��� �������� ������� �������� ������ ����� N ���.
�������. ���������, ���������� ��� ����� 4.
����, ������ ���� 4 ��, ���� �������� ���� ������ 72 ��.*/

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