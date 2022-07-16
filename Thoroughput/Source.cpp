#include <iostream>
using namespace std; 
#define tab "\t"
#define delimiter "--------------------------------------------------------\t"
void main()
{
	setlocale(LC_ALL, "Russian");
	const int Freal_quant = 4; 
	float Freal[Freal_quant] = { 100, 133.333333, 166.666666, 200 };
	cout << "Real Friquency, MHz" << tab; 
	for (int i = 0; i < Freal_quant; i++) cout << Freal[i]<< tab;
	cout << endl;
	
	const int Feffect_quant = 4;
	int Feffect[Feffect_quant] = {};

	int Thoroughput[Freal_quant] = {};

	int Name_ddr; 
	cout << "Введите поколение DDR кирилицей: "; cin >> Name_ddr; 
	cout << "Effective Friquency, MHz ";
	if (Name_ddr == 1)
	{
		for (int i = 0; i < Freal_quant; i++)
		{
			Feffect[i] = Freal[i]*2;
			Thoroughput[i] = Feffect[i] * 8;
		}
	}
	else if (Name_ddr == 2)
	{
		for (int i = 0; i < Freal_quant; i++)
		{
			Feffect[i] = Freal[i] * 4;
			Thoroughput[i] = Feffect[i] * 8;
		}
	}
	else if (Name_ddr == 3)
	{
		for (int i = 0; i < Freal_quant; i++)
		{
			Feffect[i] = Freal[i] * 8;
			Thoroughput[i] = Feffect[i] * 8;
		}
	}
	else if (Name_ddr == 4)
	{
		for (int i = 0; i < Freal_quant; i++)
		{
			Feffect[i] = Freal[i] * 16;
			Thoroughput[i] = Feffect[i] * 8;
		}
	}
	else if (Name_ddr == 5)
	{
		for (int i = 0; i < Freal_quant; i++)
		{
			Feffect[i] = Freal[i] * 32;
			Thoroughput[i] = Feffect[i] * 8;
		}
	}
	for (int i = 0; i < Freal_quant; i++) cout << Feffect[i] << tab;
	cout << endl;
	cout << delimiter << endl; 
	cout << tab << "Разрядность шины N=64бит или 8байт." << endl; 
	cout << delimiter << endl;
	cout << "Thoroughput, MByte/s " << tab; 
	for (int i = 0; i < Freal_quant; i++) cout << Thoroughput[i] << tab;
	cout << endl; 
}
