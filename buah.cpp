git init#include <iostream>
#include <string>

using namespace std;

struct buah{
	int harga;
	string rasa;
	string warna;
	float berat;
};
int main(){
	buah apel;
	buah jeruk;
	
	apel.warna="Merah";
	apel.harga=23000;
	apel.rasa="Manis";
	apel.berat=120;
	
	jeruk.warna="Orange";
	jeruk.harga=25000;
	jeruk.rasa="Asam Manis";
	jeruk.berat=130;
	
	cout<<"Warna	:"<<apel.warna<<endl;
	cout<<"Harga	:"<<apel.harga<<endl;
	cout<<"Rasa	:"<<apel.rasa<<endl;
	cout<<"Berat	:"<<apel.berat<<endl;
	cout<<endl<<endl;
	
	cout<<"Warna	:"<<jeruk.warna<<endl;
	cout<<"Harga	:"<<jeruk.harga<<endl;
	cout<<"Rasa	:"<<jeruk.rasa<<endl;
	cout<<"Berat	:"<<jeruk.berat<<endl;
}
