
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

struct KTP {
	string nik;
	string nama;
	string tempat_tanggal_lahir;
	string jenis_kelamin;
	string gol_darah;
	string alamat;
	string rt_rw;
	string kel_desa;
	string kecamatan;
	string agama;
	string status_perkawinan;
	string pekerjaan;
	string kewaarganegaraan;
	string berlaku_hingga;
};

void inputKTP (KTP &ktp) {
	cout<<"Masukkan NIK: ";
	getline(cin, ktp.nik);
	cout<<"Masukkan Nama: ";
	getline(cin, ktp.nama);	
	cout<<"Masukkan Tempat/Tgl lahir: ";
	getline(cin, ktp.tempat_tanggal_lahir);
	cout<<"Masukkan Jenis Kelamin: ";
	getline(cin, ktp.jenis_kelamin);
	cout<<"Masukkan Golongan Darah: ";
	getline(cin, ktp.gol_darah);
	cout<<"Masukkan Alamat: ";
	getline(cin, ktp.alamat);
	cout<<"Masukkan RT/RW: ";
	getline(cin, ktp.rt_rw);
	cout<<"Masukkan Kelurahan/Desa: ";
	getline(cin, ktp.kel_desa);
	cout<<"Masukkan Kecamata: ";
	getline(cin, ktp.kecamatan);
	cout<<"Masukkan Agama: ";
	getline(cin, ktp.agama);
	cout<<"Masukkan Status Perkawinan: ";
	getline(cin, ktp.status_perkawinan);
	cout<<"Masukkan Pekerjaan: ";
	getline(cin, ktp.pekerjaan);
	cout<<"Masukkan Kewarganegaraan: ";
	getline(cin, ktp.kewaarganegaraan);
	cout<<"Masukkan Berlaku Hingga: ";
	getline(cin, ktp.berlaku_hingga);
}

void cetakbingkaiatasbawah(int panjang){
	for (int i = 0; i < panjang; i++){
		cout<<"=";
	}
	cout<<endl;
}

void displayKTP(const KTP &ktp) {
	const int lebar = 64;
	cetakbingkaiatasbawah(lebar);
	cout<<setw(lebar + 4/2)<<"KTP"<<endl;
	cetakbingkaiatasbawah(lebar);	
	cout<<"\n========== SIMULASI KTP ===========\n";
	cout<<left<<setw(20)<<"NIK"<<":"<<ktp.nik<<endl;
	cout<<left<<setw(20)<<"Nama"<<":"<<ktp.nama<<endl;
	cout<<left<<setw(20)<<"Tempat/Tgl Lahir"<<":"<<ktp.tempat_tanggal_lahir<<endl;
	cout<<left<<setw(20)<<"Jenis Kelamin"<<":"<<ktp.jenis_kelamin<<endl;
	cout<<left<<setw(20)<<"Gol Darah"<<":"<<ktp.gol_darah<<endl;
	cout<<left<<setw(20)<<"Alamat"<<":"<<ktp.alamat<<endl;
	cout<<left<<setw(20)<<"RT/RW"<<":"<<ktp.rt_rw<<endl;
	cout<<left<<setw(20)<<"Kel/Desa"<<":"<<ktp.kel_desa<<endl;
	cout<<left<<setw(20)<<"Kecamatan"<<":"<<ktp.kecamatan<<endl;
	cout<<left<<setw(20)<<"Agama"<<":"<<ktp.agama<<endl;
	cout<<left<<setw(20)<<"Status Perkawinan"<<":"<<ktp.status_perkawinan<<endl;
	cout<<left<<setw(20)<<"Pekerjaan"<<":"<<ktp.pekerjaan<<endl;
	cout<<left<<setw(20)<<"Kewarganegaraan"<<":"<<ktp.kewaarganegaraan<<endl;
	cout<<left<<setw(20)<<"Berlaku Hingga"<<":"<<ktp.berlaku_hingga<<endl;
	cout<<"\n====================================\n";
}

int main() {
	KTP ktp;
	
	cout<<"Input Data KTP\n";
	inputKTP(ktp);
	displayKTP(ktp);
	
	return 0;
}
