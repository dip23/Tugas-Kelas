/*
Nama		: Difa Bagasputra M
NPM			: 140810180057
Tanggal 	: 7 Maret 2019
Nama Program: Program Mencetak Array of Record
*/
#include<iostream>

using namespace std;

struct Mahasiswa{
    int usia;
    string Fname;
    string Lname;
    float ipk;
};
typedef Mahasiswa LarikMhs[10];

void inputMahasiswa(LarikMhs& mhs, int n){
	for(int i=0;i<n;i++){
		cout<<"Mahasiswa ke - "<<i+1<<endl;
		cout<<"Usia : ";cin>>mhs[i].usia;
		cout<<"First Name : ";cin>>mhs[i].Fname;
		cout<<"Last Name : ";cin>>mhs[i].Lname;
		cout<<"IPK : ";cin>>mhs[i].ipk;
		cout<<endl;
	}
}

void outputMahasiswa(LarikMhs mhs, int n){
	for(int i=0;i<n;i++){
		cout<<i+1<<". "<<mhs[i].usia<<" "<<mhs[i].Fname<<" "<<mhs[i].Lname<<" "<<mhs[i].ipk<<endl;
	}
}

int main(){
	LarikMhs mhs;
	int n;
	
	cout<<"Banyak Mahasiswa : ";cin>>n;
	inputMahasiswa(mhs,n);
	outputMahasiswa(mhs,n);
}
