#include <iostream>
#include <string>
#include <iomanip>
#include "airline.h"


using namespace std;

int main()
{
  AlaskaAir alaskaair;
  string Origin; 
  string Dest;
  double Dist, Fare;

  int input;

  cout << "First select the Origin and the destination. \n Then select an airline: \n";
  cout << "1. Alaska Airlines\n";
  cout << "2. United\n";
  cout << "3. Virgin\n";
  cout << "4. JetBlue\n";
  cout << "5. American\n";

  cout << "Enter the place of Departure: ";
  getline(cin, Origin);
  cout << "Departure: " << Origin << ".\n";
  cout << "Enter the place of Arrival: ";
  getline(cin, Dest);
  cout << "Arrival: " << Dest <<".\n";

  cout << "Please enter the number for the corresponding airline: ";
  cin >> input;

  switch(input){
   case 1:
     Dist = alaskaair.getDist(Origin, Dest);
     Fare = alaskaair.getFair(Dist);
     cout << "The distance is " << Dist << ". \n The Fare is " << Fare << ".\n";
     break;

  default:
    cout << "Error: The airline is not in the option. \n";
    break;
  }
  //cin.get();
  return 0;
}
