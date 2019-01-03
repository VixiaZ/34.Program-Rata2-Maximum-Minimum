#include<iostream>
using namespace std;

int main (){
	int i, bil[23], jumlah, tertinggi,terendah;
	float rata;
	
	for(i=0; i<13; i++){
		cout<<"masukan data ke : "<<i+1<<" = ";cin>>bil[i];
	}
	
	
	
	
	cout<<"seluruh elemen array : \n";
	jumlah=0;
	terendah=bil[0];
	tertinggi=bil[0];
	for(i=0;i<13;i++){
		cout<<bil[i]<<endl;
		jumlah=jumlah+bil[i];
		if(bil[i]<terendah){
			terendah=bil[i];
		}else if(bil[i]>tertinggi){
		}
	}
	rata=jumlah/13;
	cout<<"jumlah seluruh elemen array : "<<jumlah<<endl;
	cout<<"nilai maksimum seluruh elemen array : "<<tertinggi<<endl;
	cout<<"nilai maksimum seluruh elemen array : "<<terendah<<endl;
	cout<<"nilai rata rata seluruh elemen array : "<<rata<<endl;
	
	return 0;
}
