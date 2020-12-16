/*
 * banking.cpp
 *
 *  Created on: Nov 28, 2020
 *      Author: 1938246_snhu
 */
#include <iostream>
#include <iomanip>
using namespace std;

#include "banking.h"

void depositInfo::SetInvestment(int InvestmentAmount) { //Sets the StartInvestment to what the user inputed
   StartInvestment 		= InvestmentAmount;
}


void depositInfo::SetDeposit(int DepositAmount) { //Sets the monthly deposit to what ever the user inputed
   MonthlyDeposit 		= DepositAmount;
}

void depositInfo::SetInterest(int InterestAmount) { //Sets the Interest to what ever the user inputed
   Interest 			= InterestAmount;
}


void depositInfo::SetYears(int YearAmount){ //This function takes in years from the user and stores it to our private variable
   Years 				= YearAmount;
}

void depositInfo::printWithout(){ //This function prints the balance without the monthly deposit
	int i 				= 1;
	int j 				= 1;
	double FullDeposit  = StartInvestment;
	double FullInterest = 0;
	double YearInterest = 0;

	cout 	 	 << "	Balance and Interest without Additional Monthly Deposits	" << endl;

	for (i 				= 0; i < 100; i++){
		cout 	 << "=";
	}
	cout 	 	 << endl;
	cout 	 	 << "	Year			Year End Balance		Year End Earned Interest	" << endl;

	for (i 				= 0; i < 100; i++){
			cout << "-";
	}
	cout 		 << endl;

	i = 0;
	while (i           <= Years){
		FullInterest    = (Interest/100);
		YearInterest    = FullDeposit*FullInterest;
		FullDeposit     = (FullDeposit*FullInterest)+FullDeposit;
		cout 	 << "	 " << i << "				$" << setprecision(2) << fixed << FullDeposit << "						$" << setprecision(2) << YearInterest << endl;
		i++;
	}
}

void depositInfo::printWith(){   //Prints the yearly balance with the monthly deposits and interest
	int i 				 = 1;
	int j 				 = 1;
	double FullDeposit   = StartInvestment;
	double FullInterest  = 0;
	double YearInterest  = 0;


	cout 		  << "		Balance and Interest with Additional Monthly Deposits	" << endl;

	for (i 				 = 0; i < 100; i++){
		cout 	  << "=";
	}
	cout 		  << endl;
	cout 		  << "		Year			Year End Balance		Year End Earned Interest	" << endl;

	for (i 				 = 0; i < 100; i++){
			cout << "-";
	}
	cout 		 << endl;

	i 					 = 0;
	while (i 		    <= Years){
		while (j 	    <= 12){
			FullDeposit  = FullDeposit + MonthlyDeposit;
			FullInterest = (Interest/100);
			FullInterest = FullInterest/12;
			YearInterest = (FullDeposit*FullInterest)+YearInterest;
			FullDeposit  = (FullDeposit*FullInterest)+FullDeposit;
			j++;
		}
		j 				 = 1;
		cout 	  << "		" << i << "				$" << setprecision(2) << fixed << FullDeposit << "						$" << setprecision(2) << fixed << YearInterest << endl;
		i++;
	}
}

