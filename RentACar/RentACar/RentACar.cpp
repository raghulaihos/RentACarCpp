// RentACar.cpp : qDefines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"
#include <iostream>
#include "DataContainer.h"
#include "Availability.h"
using namespace std;
int N_Economy = 30, N_Eecutive = 20, N_Suv = 10;
void CheckAvailability(int CarType, int CarModel);
void PushIntoVector(string Type, string Model);
void RentACar();
void ChooseCar(int);
int main()
{
	while (1)
	{
		cout << "enter choice 1 - Rent a car  , 0 - exit\n\n";
		char ch;
		cin >> ch;

		switch (ch)
		{
		case '1': RentACar();
			break;
		case '0': break;
		default: break;
		}


	}

	getchar();
	return 0;
}

// when rent a car is called 
void RentACar() 
{
	int CarType;
	cout << "choose car type  \n";
	cout << "1-Economy 2-Executive 3-Suv\n";
	int ch1;
	cin >> ch1;
	if (ch1 == 1 || ch1 == 2 || ch1 == 3) {
		CarType = ch1;
		ChooseCar(CarType);
	}
	else {
		cout << "invaild choice ! \n";
		RentACar();
	}
	
	
}
void ChooseCar(int CarType) 
{        
	int  CarModel;
	
	cout << "Choose car company! \n";
	cout << "1-Ford 2-Maruthi 3-Tata\n";
	int ch1;
	cin >> ch1;
	switch (ch1) {
	case 1: if (CarType == 1)
	           {
	               	cout << " 1- figo 2-classic\n";
		            int ch2;
	             	cin >> ch2;
		           if (ch2 == 1 || ch2 == 2) {
		         	CarModel = ch2;
					CheckAvailability(CarType, CarModel);
				   }
				   else { cout << "invalid entry! "; ChooseCar(CarType); }
	            }
			  else if (CarType == 2) {
				  cout << " 1- Aspire 2-Ecosport\n";
				  int ch2;
				  cin >> ch2;
				  if (ch2 == 1 || ch2 == 2) {
					  CarModel = ch2;
					  CheckAvailability(CarType, CarModel);
				  }
				  else { cout << "invalid entry! "; ChooseCar(CarType); }
			  }
			  else {
				  cout << " 1- Endevour \n";
				  int ch2;
				  cin >> ch2;
				  if (ch2 == 1 || ch2 == 2) {
					  CarModel = ch2;
					  CheckAvailability(CarType, CarModel);
				  }
				  else { cout << "invalid entry! "; ChooseCar(CarType); }
			  }
			  break;
		     
	case 2: if (CarType == 1)
	{
		cout << " 1- Swift 2-Ritz\n";
		int ch2;
		cin >> ch2;
		if (ch2 == 1 || ch2 == 2) {
			CarModel = ch2;
			CheckAvailability(CarType, CarModel);
		}
		else { cout << "invalid entry! "; ChooseCar(CarType); }
	}
			 else if (CarType == 2) {
				  cout << " 1- Dzire 2-Ciaz\n";
				  int ch2;
				  cin >> ch2;
				  if (ch2 == 1 || ch2 == 2) {
					  CarModel = ch2;
					  CheckAvailability(CarType, CarModel);
				  }
				  else { cout << "invalid entry! "; ChooseCar(CarType); }
			  }
			  else {
				  cout << " 1- Grand Vitara \n";
				  int ch2;
				  cin >> ch2;
				  if (ch2 == 1 || ch2 == 2) {
					  CarModel = ch2;
					  CheckAvailability(CarType, CarModel);
				  }
				  else { cout << "invalid entry! "; ChooseCar(CarType); }
			  } break;
		
	case 3: if (CarType == 1)
	{
		cout << " 1- Indica 2-Tiago\n";
		int ch2;
		cin >> ch2;
		if (ch2 == 1 || ch2 == 2) {
			CarModel = ch2;
			CheckAvailability(CarType, CarModel);
		}
		else { cout << "invalid entry! "; ChooseCar(CarType); }
	}
			  else if (CarType == 2) {
				  cout << " 1- Zset 2-Indigo\n";
				  int ch2;
				  cin >> ch2;
				  if (ch2 == 1 || ch2 == 2) {
					  CarModel = ch2;
					  CheckAvailability(CarType, CarModel);
				  }
				  else { cout << "invalid entry! "; ChooseCar(CarType); }
			  }
			  else {
				  cout << " 1- Safari Storme \n";
				  int ch2;
				  cin >> ch2;
				  if (ch2 == 1 || ch2 == 2) {
					  CarModel = ch2;
					  CheckAvailability(CarType, CarModel);
				  }
				  else { cout << "invalid entry! "; ChooseCar(CarType); }
			  } break;

	default: cout << "wrong option! "; ChooseCar(CarType);
	}
}

void CheckAvailability(int CarType, int CarModel) {
	
	if (CarType == 1) {
		if (N_Economy > 0) {
			PushIntoVector("Economy", "ford" ) ;
		}

	}

}

//string StringModelCoverter(int a) {
//
//}
void PushIntoVector(string Type,string Model)
{
	Class1 *C;
	C = Class1::Instance();
	Booking B;
	B.CarType = Type;
	B.CarModel = Model;

	C->SetBArray(B);
	

}