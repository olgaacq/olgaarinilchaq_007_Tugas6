#include <iostream>
#include <conio.h>
using namespace std;

int main() {
	int n, i, nilai, max, *Tmax;
	
	cout << "\n\t\t\t Program Mencari Nilai Maksimal\n";
	cout << "\t\t --------------------------------------------\n\n" << endl;
	cout << " ~ Banyak data nilai yang akan diinput: "; cin >> n;
	for(i=1; i<=n; i++) {
		cout << " Nilai ke-" <<i<< " : "; cin >> nilai;
		if(i==1) {
			max=nilai;
		}
		else if (max<nilai) {
			max=nilai;
		}
		Tmax=&max;
		*Tmax=max;
	}
	cout << "\n *+*+*+*+*+*+*+*+*+*" << endl;
	cout <<" Nilai Maksimal = " <<*Tmax <<endl;
	
	getch();
}
