#ifndef Debt_H_INCLUDED
#define Debt_H_INCLUDED
#include "Trading.h"
#include "Date.h"
#include <string>
namespace BSM{
	class Debt: public Trading{
		public: 
			//Constructors
			Debt(Date when, TradingStatus status, Payment payment_method, TypeOfExpense category, Date deadline);
			Debt(Date when, TradingStatus status, Payment payment_method, TypeOfExpense category, Date deadline, Date payday);
			Debt(Date when, TradingStatus status, std::string description, Payment payment_method, TypeOfExpense category, Date deadline, Date payday);
			//Destructor
			~Debt();
			//Methods
			TypeOfExpense getCategory();
			Date getDeadline();
			Date getPayday();
			void setCategory(TypeOfExpense category);
			void setDeadline(Date deadline);
			void setPayday(Date payday);

		private:
			//Variables
			TypeOfExpense d_category;
			Date d_deadline;
			Date d_payday;

	};
}
#endif
