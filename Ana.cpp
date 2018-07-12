#include <iostream>
#include <conio.h>
using namespace std;

main()
{
	int a,AVG[5]; 
	int uts[5],uas[5];
	string nama[5],nim[5],kelas[5];
	
	cout<<"Jumlah Data = ";
	cin>>a;
	
	for(int i=0; i<a; i++)
	{	
		cout<<endl;
		cout<<" Data Ke [ "<<i+1<<" ] "<<endl;
		cout<<" Nama : ";
		cin>>nama[i];
		cout<<" Kelas : ";
		cin>>kelas[i];
		cout<<" NIM : ";
		cin>>nim[i];
		cout<<" Nilai UTS : ";
		cin>>uts[i];
		cout<<" Nilai UAS : ";
		cin>>uas[i];
		AVG[i]=(uts[i]+uas[i])/2;
	}
	
	

	
	cout<<"\n DAFTAR NILAI MAHASISWA "<<endl;
	cout<<"--------------------------------------------------------------------------------"<<endl;
	cout<<"NO Nama       NIM       KELAS       NILAI UTS    NILAI UAS    RATA-RATA    GRADE      KET"<<endl;
	cout<<"--------------------------------------------------------------------------------"<<endl;
	
	for(int i=0; i<a; i++)
	{
		cout<<i+1<<"  "<<nama[i]<<"     "<<nim[i]<<"      "<<kelas[i]<<"         "<<uts[i]<<"          "<<uas[i]<<"          "<<AVG[i]<<"       ";
		if(AVG[i]<100,AVG[i]>80){
			cout<<" A     LULUS"<<endl;
		}
		else if(AVG[i]<79,AVG[i]>60){
			cout<<" B     LULUS"<<endl;
		}
		else if(AVG[i]<59,AVG[i]>40){
			cout<<" C     LULUS"<<endl;
		}
		else if(AVG[i]<39,AVG[i]>20){
			cout<<" D TIDAK LULUS"<<endl;
		}
		else if(AVG[i]<19,AVG[i]>0){
			cout<<" E TIDAK LULUS"<<endl;
		}
	}
}
