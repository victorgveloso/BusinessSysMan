#ifndef Cashier_H_INCLUDED
#define Cashier_H_INCLUDED
#include <vector>
#include "Trading.h"
#include "User.h"
namespace BSM{
	class Cashier : public User{
		public:
			//Constructors
			Cashier(std::vector<Trading> tradings);
			Cashier(std::vector<Trading> tradings, double estimated_balance);
			Cashier(std::vector<Trading> tradings, double estimated_balance, double current_balance);
			Cashier(std::vector<Trading> tradings, double estimated_balance, double current_balance, double last_balance);
			//Destructor
			~Cashier();
			//Methods
			bool addTrading(Trading trading);
			bool removeTrading(unsigned int trading_id);
			double getEstimatedBalance();
			double getCurrentBalance();
			double getLastBalance();
			void setCurrentBalance(double current_balance);
			void setEstimatedBalance(double estimated_balance);
			void setLastBalance(double last_balance);
		private:
			//Variables
			std::vector<Trading> c_tradings;
			double c_estimated_balance;
			double c_current_balance;
			double c_last_balance;


	};
}
#endif
