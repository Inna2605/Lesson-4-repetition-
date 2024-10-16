/*¬ивести на дисплей календар на обраний м≥с€ць з урахуванн€м зазначеного номера дн€ тижн€ дл€ початку м≥с€ц€.
ѕ≥дказка. ѕрограму умовно розбити на дв≥ частини. ѕерший цикл виводитиме потр≥бну к≥льк≥сть порожн≥х кл≥тин. 
ƒругий же цикл почне виводити календар з першого дн€ до останнього дн€ в заданому м≥с€ц≥. 
ѕерех≥д на новий р€док вважати кратним семи ≥з зазначеним зсувом номера дн€ тижн€.
Ѕонусне завданн€: визначити к≥льк≥сть вих≥дних у заданому м≥с€ц≥.*/

#include<iostream>
using namespace std;

enum month { January = 31, February = 28, March = 31, April = 30, May = 31, June = 30, July = 31, August = 31, September = 30, October = 31, November = 30, December =31};

int main() {
	cout << "Vvedite nomer misyatsya: ";
	int M, D, V = 0, n = 1;
	month Mon;
	cin >> M;
	cout << "Vvedite nomer dnya z yakogo pochinaetsa misyats: ";
	cin >> D;
	if ((M <= 12 && M > 0) && (D <= 7 && D > 0)) {
		switch (M) {
		case 1:	
			Mon = January;
			cout << "\n                January\n"; 
			break;
		case 2:	
			Mon = February;
			cout << "\n                February\n"; 
			break;
		case 3:	
			Mon = March;
			cout << "\n                March\n"; 
			break;
		case 4: 
			Mon = April;
			cout << "\n                April\n"; 
			break;
		case 5: 
			Mon = May;
			cout << "\n                May\n"; 
			break;
		case 6:	
			Mon = June;
			cout << "\n                June\n"; 
			break;
		case 7:	
			Mon = July;
			cout << "\n                July\n"; 
			break;
		case 8:	
			Mon = August;
			cout << "\n                August\n"; 
			break;
		case 9: 
			Mon = September;
			cout << "\n                September\n"; 
			break;
		case 10:
			Mon = October;
			cout << "\n                October\n"; 
			break;
		case 11:
			Mon = November;
			cout << "\n                November\n"; 
			break;
		case 12:
			Mon = December;
			cout << "\n                December\n";
		}
		cout << "    Mo    Tu    We    Th    Fr    Sa    Su\n";
		int b1 = 0, b2 = 0;
		while (n < D) {
			cout << "    _ ";
			n++;
		}
		int a;
		for (int x = D, y = 1; y <= Mon; x++, y++, n++) {
			if ((x == 6 && D < 7) || (x == 13 && D == 7)) {
				b1 = 7;
				V++;
			}
			if(x == 7) {
				b2 = 7;
				V++;
			}
			if ((x > 6 && D < 7)||(x > 13 && D == 7)) {
				b1++;
			}
			if (x > 7) {
				b2++;
			}
		    if ((b1 > 7 && b1 % 7 == 0) ||  (b2 > 7 && b2 % 7 == 0)) {
				V++;
			}
			a = y / 10;
			if(a == 0)
			cout << "    " << y << " ";
			else if(a >= 1)
				cout << "    " << y;
			if (x % 7 == 0)cout << endl;
		}
		cout << "\nVsogo v misyathi " << V << " vuhidnux!\n";
	}
	else {
		cout << "\nNe verno vvedenu danni!\n";
	}
}