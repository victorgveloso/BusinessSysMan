#ifndef Deferred_H_INCLUDED
#define Deferred_H_INCLUDED
#include "Payment.h
#include "Date.h"
#include <string>
namespace BSM{
	class Deferred: public Payment{
		public:
			//Constructors
			Deferred(float amount, Date when, KindOfPayment payment_method, Date incoming_date);
			//Destructor
			~Deferred();
			//Methods
			const std::string getType();
			Date getIncomingDate();
			void setIncomingDate(incoming_date);
		private:
			//Variables
			Date d_incoming_date;
	};
}
#endif
