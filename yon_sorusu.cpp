#include<iostream>
#include<string>
#include<stdlib.h>

using namespace std;

int main()
{
	int saat, toplam_yol_uzunlugu, yon_degistirme;
	
	string yonler[4] = {"Bati","Kuzey", "Dogu", "Guney"};
	
	int yon_uzunluk[4] = {0,0,0,0};
	
	string baktigi_yon;
	
	
	cout << "Kisinin kac saat yurudugunu giriniz = ";
	cin >> saat;
	
	toplam_yol_uzunlugu = saat*3;
	
	yon_degistirme = toplam_yol_uzunlugu / 5;
	
	cout << "Toplam yol uzunlugu = " << toplam_yol_uzunlugu << endl;
	cout << "Toplam yon degistirme sayisi = " << yon_degistirme << endl;
	
	
		for (int i=0; i<=yon_degistirme; i++)
		{

				baktigi_yon = yonler[i%4];
				if (i != yon_degistirme){
					yon_uzunluk[i%4] += 5;

				}
		}
	

			for (int i=0; i<4; i++)
			{
				if (baktigi_yon == yonler[i])
				{
					yon_uzunluk[i] += toplam_yol_uzunlugu % 5;
				}
			}
		
	
	
	
	for (int i=0; i<4; i++)
	{
		cout << yonler[i] << " " << yon_uzunluk[i] << endl;
	}
	
	
	cout << "Kisinin simdiki yonu = " << baktigi_yon << endl;



	
	return 0;
}
