#ifndef Customer_H_INCLUDED
#define Customer_H_INCLUDED
#include <stack>
#include <string>
#include "Person.h"
namespace BSM{
	class Customer: public Person{
		public:
			//Constructor
			Customer(std::string name, std::string phone);
			Customer(std::string name, std::string phone, std::string enterprise, std::string address);
			Customer(std::string name, std::string phone, std::string enterprise, std::string address, std::string identity, std::string email);
			//Destructor
			~Customer();
			//Methods
			std::string getLastTrading();
			std::string getEnterprise();
			std::string getAddress();
			void setLastTrading(std::string);
			void setEnterprise(std::string);
			void setAddress(std::string);

			unsigned int numberOfTradings();

		private:
			std::stack<unsigned int> tradings; //tradings id at tradings vector on Cashier
			std::string enterprise;
			std::string address;
	};
}
#endif
