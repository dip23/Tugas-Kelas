/*
Nama		: Difa Bagasputra M
NPM			: 140810180057
Tanggal 	: 7 Maret 2019
Nama Program: Program Membalik Array
*/
#include<iostream>

using namespace std;

int main(){
	int n;
	int a[10];
	int b[10];
	int j=0;
	
	cout<<"Masukkan Banyak : ";cin>>n;
	cout<<"Input : ";
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	for(int i=n-1;i>=0;i--){
		b[j]=a[i];
		j++;
	}
	cout<<"Output : ";
	for(int i=0;i<n;i++){
		cout<<b[i]<<" ";
	}
}
