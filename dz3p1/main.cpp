#include "Heap.h"
#include<stdlib.h>
#include<fstream>
#include "PerformaceCalc.h"


int main() {
	int f;
	int q = 1;
	int s = 0;
	Heap hip;
	bool min;
	cout << "Da li zelite da hip bude max ili min Heap (0 za maks 1 za min)";
	cin >> f;
	if (f) min = true;
	else min = false;

	while (q) {
		cout << "Izaberite opiju menija:" << endl << endl;
		cout << "1.Stvaranje reda:" << '\n';
		cout << "2.Da li je red prazan?" << '\n';
		cout << "3.Dohvatanje prvog elementa reda" << '\n';
		cout << "4.Brisanje prvog elementa reda" << '\n';
		cout << "5.Umetanje elementa u red " << '\n';
		cout << "6.Merenje performasi " << '\n';

		cin >> q;
		switch (q) {
		case 1: hip.init(); break;
		case 2: 
			if ((hip.first == nullptr) || (hip.first->info == -1))
				cout << "Red je prazan !" << endl;
				else
			cout << "Red nije prazan !"<< endl ;
			break;
		case 3: 
			int br;
			br = hip.get();
			cout << "Prvi element reda je :" << br << endl;
			break;
		case 4:
			hip.del(s);
			break;
		case 5:
			cout << "Unesite vrednost elementa koji zelite da ubacite u red:" << endl;
			int i;
			cin >> i;
			if (min)
			hip.add(i, s);
			else hip.addM(i, s);
			break;
		case 6:
			PerformanceCalculator pc;
			double pv;
			cout << "Velicina skupa podataka :" << "10" << "\n";
			cout << "Vreme umetanja:";
			int niz[10];
			int n, s = 0;
			i = 0;
			ifstream file; 
			file.open("test_10.txt");
			while (file >> niz[i++]){}
			Heap hpp;
			hpp.init();

			//while(file >> niz[i++]) {}
			pc.start();
			for (int i = 0; i < 10; i++) {
				if (min) hpp.add(niz[i], s);
				else hpp.addM(niz[i], s);
			}
			pc.stop();
			pv = pc.elapsedMillis();
			cout << pv << "\n";
			cout << "Broj koraka prilikom umetanja:" << s << "\n";
			s = 0;
			pv = 0;
			cout << "Vreme izbacivaja :";
			pc.start();
			for (int i = 0; i < 10; i++) {
				if (min) hpp.del(s);
				else hpp.delM(s);
			}
			pc.stop();
			pv = pc.elapsedMillis();
			cout << pv << "\n";
			cout << "Broj koraka prilikom izbacivanja:" << s << "\n";
			s = 0;
			pv = 0;
			file.close();
			cout <<"________________________________________________________"<< endl << endl;


			cout << "Velicina skupa podataka :" << "100" << "\n";
			cout << "Vreme umetanja:";
			int niz1[100];
			i = 0;
			file.open("test_100.txt");
			while (file >> niz1[i++]) {}
			Heap hhp;
			hpp.init();

			//while(file >> niz[i++]) {}
			pc.start();
			for (int i = 0; i < 100; i++) {
				if (min) hpp.add(niz1[i], s);
				else hpp.addM(niz1[i], s);
			}
			pc.stop();
			pv = pc.elapsedMillis();
			cout << pv << "\n";
			cout << "Broj koraka prilikom umetanja:" << s << "\n";
			s = 0;
			pv = 0;
			cout << "Vreme izbacivaja :";
			pc.start();
			for (int i = 0; i < 100; i++) {
				if (min) hpp.del(s);
				else hpp.delM(s);
			}
			pc.stop();
			pv = pc.elapsedMillis();
			cout << pv << "\n";
			cout << "Broj koraka prilikom izbacivanja:" << s << "\n";
			s = 0;
			pv = 0;
			file.close();
			cout << "________________________________________________________" << endl << endl;


			cout << "Velicina skupa podataka :" << "1000" << "\n";
			cout << "Vreme umetanja:";
			int niz2[1000];
			i = 0;
			file.open("test_1000.txt");
			while (file >> niz2[i++]) {}
			Heap hhh;
			hpp.init();

			//while(file >> niz[i++]) {}
			pc.start();
			for (int i = 0; i < 1000; i++) {
				if (min) hpp.add(niz2[i], s);
				else hpp.addM(niz2[i], s);
			}
			pc.stop();
			pv = pc.elapsedMillis();
			cout << pv << "\n";
			cout << "Broj koraka prilikom umetanja:" << s << "\n";
			s = 0;
			pv = 0;
			cout << "Vreme izbacivaja :";
			pc.start();
			for (int i = 0; i < 1000; i++) {
				if (min) hpp.del(s);
				else hpp.delM(s);
			}
			pc.stop();
			pv = pc.elapsedMillis();
			cout << pv << "\n";
			cout << "Broj koraka prilikom izbacivanja:" << s << "\n";
			s = 0;
			pv = 0;
			file.close();
			cout << "________________________________________________________" << endl << endl;

			cout << "Velicina skupa podataka :" << "10000" << "\n";
			cout << "Vreme umetanja:";
			int niz3[10000];
			i = 0;
			file.open("test_10000.txt");
			while (file >> niz3[i++]) {}
			Heap hhpp;
			hpp.init();

			//while(file >> niz3[i++]) {}
			pc.start();
			for (int i = 0; i < 10000; i++) {
				if (min) hpp.add(niz3[i], s);
				else hpp.addM(niz3[i], s);
			}
			pc.stop();
			pv = pc.elapsedMillis();
			cout << pv << "\n";
			cout << "Broj koraka prilikom umetanja:" << s << "\n";
			s = 0;
			pv = 0;
			cout << "Vreme izbacivaja :";
			pc.start();
			for (int i = 0; i < 10000; i++) {
				if (min) hpp.del(s);
				else hpp.delM(s);
			}
			pc.stop();
			pv = pc.elapsedMillis();
			cout << pv << "\n";
			cout << "Broj koraka prilikom izbacivanja:" << s << "\n";
			s = 0;
			pv = 0;
			file.close();
			cout << "________________________________________________________" << endl << endl;



			cout << "Velicina skupa podataka :" << "100000" << "\n";
			cout << "Vreme umetanja:";
			int niz4[100000];
			i = 0;
			file.open("test_10000.txt");
			while (file >> niz4[i++]) {}
			Heap hhppp;
			hpp.init();

			//while(file >> niz4[i++]) {}
			pc.start();
			for (int i = 0; i < 100000; i++) {
				if (min) hpp.add(niz4[i], s);
				else hpp.addM(niz4[i], s);
			}
			pc.stop();
			pv = pc.elapsedMillis();
			cout << pv << "\n";
			cout << "Broj koraka prilikom umetanja:" << s << "\n";
			s = 0;
			pv = 0;
			cout << "Vreme izbacivaja :";
			pc.start();
			for (int i = 0; i < 100000; i++) {
				if (min) hpp.del(s);
				else hpp.delM(s);
			}
			pc.stop();
			pv = pc.elapsedMillis();
			cout << pv << "\n";
			cout << "Broj koraka prilikom izbacivanja:" << s << "\n";
			s = 0;
			pv = 0;
			file.close();
			cout << "________________________________________________________" << endl << endl;


		}
	}
}