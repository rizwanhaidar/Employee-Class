//******************Including Libraries*************************
#include<iostream>

#include<stdio.h>

#include<string>

using namespace std;
//*********************User Defined Class as Date**********************
//******************that will be keeping track of***********************
//******************date of joining of the employee**********************
//*************Variables Having month day and year**********************
//****************With Different Geters ans Setters*********************
//**************And a specialized function to print the date************ 
class Date {
	int day = 0;
	int month = 0;
	int year = 0;

public:
	//default constructor
	Date();
	//overloaded constructor
	Date(int a, int b, int c);
	//setter of day
	void setDay(int d);
	//setter of month
	void setMonth(int m);
	//setter of year
	void setYear(int y);
	//getter of day
	int getDay() const;
	//getter of month
	int getMonth() const;
	//getter of year
	int getYear() const;
	//specialized function to print date
	string getDate() const;
	//destructor
	virtual~Date();
};
Date::Date() {
	day = 0;
	month = 0;
	year = 0;
}
Date::Date(int d, int m, int y) {
	day = d;
	month = m;
	year = y;
}
void Date::setDay(int d) {
	if (d > 0 && d < 32) {
		day = d;
	}
}
void Date::setMonth(int m) {
	if (m > 0 && m < 13) {
		month = m;
	}
}
void Date::setYear(int y) {

	year = y;
}
int Date::getDay() const {
	return day;
}
int Date::getMonth() const {
	return month;
}
int Date::getYear() const {
	return year;
}
string Date::getDate() const {
	string to_ret;

	to_ret = to_string(getDay());
	to_ret = to_ret + "/";
	to_ret = to_ret + to_string(getMonth());
	to_ret = to_ret + "/";
	to_ret = to_ret + to_string(getYear());
	return to_ret;

}
Date::~Date() {

}
//**************Another Used Defined Class named as EMployee**************
//****************Having variables ID, NIC, Date, Salary, Bonus************
//******************that will be keeping track of***********************
//******************Important Details of the employee**********************
//****************With Different Geters ans Setters*********************
//**************And a specialized function to print the date************ 
class Employee {
private:
	//Variables
	string id;
	string NIC;
	Date date;
	int salary;
	int bonus;
public:
	//A default constructor
	Employee() {
		id = "";
		NIC = "";
		date.setDay(0);
		date.setMonth(0);
		date.setYear(0);

		salary = 0;
		bonus = 0;
	}
	//Overloaded constructor
	Employee(string id_, string nic_, int m_, int d_, int y_, int salary_ = 0, int bonus_ = 0) :
		id(id_),
		NIC(nic_),
		date(d_, m_, y_),
		salary(salary_),
		bonus(bonus_) {

		//nothing to be written here
		//As alll the variables have been initialized with
		//in initializor list
	}
	/*
	//a copy constructor
		Employee(Employee& copy_) :
			id(copy_.id),
			NIC(copy_.NIC),
			date(copy_.date),
			salary(copy_.salary),
			bonus(copy_.bonus) {}

			*/
			//setter
	void setid(string ID_) {
		id = ID_;
	}
	//setter
	void setNIC(string nic_) {
		NIC = nic_;
	}
	//setter
	void setdate(Date date_) {

		date.setDay(date_.getDay());
		date.setMonth(date_.getMonth());
		date.setYear(date_.getYear());
	}
	//setter
	void setsalary(int salary_) {
		salary = salary_;
	}
	//setter
	void setbonus(int bonus_) {
		bonus = bonus_;
	}
	//getter
	string getid() {
		return this->id;
	}
	//getter
	string getNic() {
		return this->NIC;
	}
	//getter
	string getdate() {
		return this->date.getDate();
	}
	//getter
	int getsalary() {
		return this->salary;
	}
	//getter
	int getbonus() {
		return this->bonus;
	}
	//A specialized function to print the Employee Details
	void display() {
		cout << "ID Of EMployee: " << id << endl <<
			"NIC of EMployee: " << id << " is \t" << NIC << endl <<
			"Date of joining for employe: " << id << "\t is " << date.getDate() << endl <<
			"Salary of Employee: " << id << "\t is " << salary << endl <<
			"Bonus of EMployee: " << id << "\t is " << bonus << endl << endl;
	}
};