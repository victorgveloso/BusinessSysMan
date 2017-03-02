#ifndef Employee_H_INCLUDED
#define Employee_H_INCLUDED
#include <string>
#include "Person.h"
#include "Vacation.h"
#include "Purpose.h"
namespace BSM{
	enum State{ACTIVE, INACTIVE};
	class Employee: public Person{
		public:
			//Constructors
			Employee(std::string name, unsigned short salary);
			Employee(std::string name, unsigned short salary, std::string identity, std::string phone);
			Employee(std::string name, unsigned short salary, std::string identity, std::string phone, std::string email, Purpose e_function_performed);
			//Methods
		private:
			unsigned short e_salary;
			State e_status;
			Purpose e_function_performed;
			Vacation e_current_vacation;
			Vacation e_last_vacation;
			unsigned short e_paid;
	};
}

#endif
