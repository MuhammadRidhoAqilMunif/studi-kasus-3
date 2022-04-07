#include <iostream>
using namespace std;

int main(){
	int menu, porsi[100], subtotal[100], total, jarak, ongkir, potongan, totalHarga, diskon, jumlah;
	int i = 0;
	char pilih, jasa;
	
	cout << "        RUMAH MAKAN BAGOR        " << endl;
	cout << "     Jl. Korona No. 123 Jogja    " << endl;
	cout << "=================================" << endl;
	cout << endl;
	cout << "___________" << endl;
	cout << "|              MENU             |" << endl;
	cout << "|```````|" << endl;
	cout << "| 1. Ayam Geprek      Rp. 21000 |" << endl;
	cout << "| 2. Ayam Goreng      Rp. 17000 |" << endl;
	cout << "| 3. Udang Goreng     Rp. 19000 |" << endl;
	cout << "| 4. Cumi Goreng      Rp. 20000 |" << endl;
	cout << "| 5. Ayam Bakar       Rp. 25000 |" << endl;
	cout << "|___________|" << endl;
	
	do{
		cout << "Masukkan pilihan menu : ";
		cin >> menu;
		cout << endl;
		switch (menu){
			case 1:
				cout << "Ayam Geprek" << endl;
				cout << "jumlah porsi : ";
				cin >> porsi[i];
				subtotal[i] = porsi[i] * 21000;
				cout << "Harga : Rp. " << subtotal[i];
				cout << endl;
				break;
			case 2:
				cout << "Ayam Goreng" << endl;
				cout << "jumlah porsi : ";
				cin >> porsi[i];
				subtotal[i] = porsi[i] * 17000;
				cout << "Harga : Rp. " << subtotal[i];
				cout << endl;
				break;
			case 3:
				cout << "Udang Goreng" << endl;
				cout << "jumlah porsi : ";
				cin >> porsi[i];
				subtotal[i] = porsi[i] * 19000;
				cout << "Harga : Rp. " << subtotal[i];
				cout << endl;
				break;
			case 4:
				cout << "Cumi Goreng" << endl;
				cout << "jumlah porsi : ";
				cin >> porsi[i];
				subtotal[i] = porsi[i] * 20000;
				cout << "Harga : Rp. " << subtotal[i];
				cout << endl;
				break;
			case 5:
				cout << "Ayam Bakar" << endl;
				cout << "jumlah porsi : ";
				cin >> porsi[i];
				subtotal[i] = porsi[i] * 25000;
				cout << "Harga : Rp. " << subtotal[i];
				cout << endl;
				break;
			default :
				cout << "Menu pilihan tidak ada." << endl;
		}
		total += subtotal[i];
		i = i + 1;
		cout << "Tambah pesanan (y/t)? = ";
		cin >> pilih;
		cout << endl;
	} while(pilih == 'y');
	
	cout << "Apakah ingin menggunakan jasa delivery order (y/t)? = ";
	cin >> jasa;
	if (jasa == 'y'){
		cout << "Jarak rumah - resto(km) = ";
		cin >> jarak;
		if (jarak <= 3){
			cout << "Ongkir = Rp. 15000" << endl;
			ongkir = 15000;
		}
		else{
			cout << "Ongkir = Rp. 25000" << endl;
			ongkir = 25000;
		}
		
		cout << endl;
		cout << "Total makanan = Rp. " << total << endl;
		if (total >= 25000 && total < 50000){	
			cout << "mendapat potongan ongkir sebesar Rp. 3000" << endl;
			cout << "------------------------------------------------------------------" << endl;
			potongan = ongkir - 3000;
			totalHarga = total + potongan;
			cout << "  TOTAL HARGA = Rp. " << totalHarga << endl;
			cout << "==================================================================" << endl;
		}
		else if (total >= 50000 && total < 150000){
			cout << "mendapat potongan ongkir sebesar Rp. 5000 dan mendapat diskon 15% " << endl;
			cout << "------------------------------------------------------------------" << endl;
			potongan = ongkir - 5000;
			diskon = total * (15/100);
			jumlah = total - diskon;
			totalHarga = jumlah + potongan;
			cout << "  TOTAL HARGA = Rp. " << totalHarga << endl;
			cout << "==================================================================" << endl;
		}
		else if (total >= 150000){
			cout << "mendapat potongan ongkir sebesar Rp. 8000 dan mendapat diskon 35% " << endl;
			cout << "------------------------------------------------------------------" << endl;
			potongan = ongkir - 8000;
			diskon = total * (0.35);
			jumlah = total - diskon;
			totalHarga = jumlah + potongan;
			cout << "  TOTAL HARGA = Rp. " << totalHarga << endl;
			cout << "==================================================================" << endl;
		}
		else{
			cout << "tidak mendapatkan potongan dan diskon karena total pembelian kurang dari Rp. 25000" << endl;
			totalHarga = ongkir + total;
			cout << "  TOTAL HARGA = Rp. " << totalHarga << endl;
			cout << "===================================================================================" << endl;
		}
	}
	else {
		cout << "TOTAL HARGA = Rp. " << total << endl;
		cout << "\n\n";
	}
	
//	ofstream file;
//	file.open("slip.txt",ios::app);
	
	return 0;
}
