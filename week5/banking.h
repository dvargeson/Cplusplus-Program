/*
 * banking.h
 *
 *  Created on: Nov 28, 2020
 *      Author: 1938246_snhu
 */

#ifndef BANKING_H_
#define BANKING_H_

#include <string>
using namespace std;

class depositInfo {  // Our main class
   public:
      void 	 SetInvestment(int InvestmentAmount);  //Here is all of our functions declared
      void 	 SetDeposit(int DepositAmount);
      void 	 SetInterest(int InterestAmount);
      void 	 SetYears(int YearAmount);
      void 	 printWithout();
      void 	 printWith();

   private:
      double StartInvestment = 0;    //Here is all of our private variables.
      double MonthlyDeposit  = 0;
      double Interest        = 0;
      int Years              = 0;
};


#endif /* BANKING_H_ */
