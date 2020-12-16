/*
 * main.cpp
 *
 *  Created on: Nov 28, 2020
 *      Author: Dillon Vargeson
 */
#include <iostream>
using namespace std;

#include "banking.h" // Calling to banking header file that contains our class information

void TopMenu(){ //Function to print the top menu

	int i;

	for (i 	  = 0; i < 30; i++){
		cout     << "*";
	}
	cout         << endl;
	for (i	  = 0; i < 18; i++){
		if (i == 10 ){
			cout << " Data Input ";
		}
		if (i > 10 || i < 22){
			cout << "*";
		}
	}

	cout 		 << endl;
}

int main() {
   depositInfo Info;
   double InvestmentAmount = 0;   //Creating our variables and class node Info
   double DepositAmount    = 0;
   int 	  InterestAmount   = 0;
   int    YearAmount       = 0;
   char   buttonPress      = 0;

   TopMenu();

   cout 		<< "Initial Investment Amount:" << endl;  //Taking in user input
   cin 			>> InvestmentAmount;					  //Storing user input in the proper variables
   Info.SetInvestment(InvestmentAmount);

   cout 		<< "Monthly Deposit:" 			<< endl;
   cin 			>> DepositAmount;
   Info.SetDeposit(DepositAmount);

   cout 		<< "Annual Interest:" 			<< endl;
   cin 			>> InterestAmount;
   Info.SetInterest(InterestAmount);

   cout 		<< "Number of years:" 			<< endl;
   cin 			>> YearAmount;
   Info.SetYears(YearAmount);

   cout 		<< "Press any key to continue . . ." << endl;
   cin 			>> buttonPress;

   if (buttonPress != 0){ //If the user hit a button then the two functions run
	   Info.printWith(); //This function prints the balance with the monthly investment
	   Info.printWithout(); //This function prints the balance without the monthly investment
   }

   return 0;
}



