#ifndef Cash_H_INCLUDED
#define Cash_H_INCLUDED
#include <string>
#include "Date.h"
#include "Payment.h"
namespace BSM{
	class Cash : public Payment{
		public:
			//Constructor
			Cash(float amount, Date when, KindOfPayment payment_method):Payment(amount, when, payment_method);
			//Destructor
			~Cash();
			//Methods
			const std::string getType(); //overloading getType from Payment
	};
}
#endif
