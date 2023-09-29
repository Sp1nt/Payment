#pragma once
#include <string>
#include <iostream>
using namespace std;

class Payment {
	string FullName;
	double salary;
	int year;
	int percentage;
	double incomeTax;
	int daysWorkedInMonth;
	int daysWorkingInMonth;
	double accruedAmount;
	double withheldAmount;
public:
	Payment();
	Payment(string, int , int , double, double, int , int);

	// Геттеры
	string getFullName() const;
	double getSalary() const;
	int getYear() const;
	int getPercentage() const;
	double getIncomeTax() const;
	int getDaysWorkedInMonth() const;
	int getDaysWorkingInMonth() const;
	double getAccruedAmount() const;
	double getWithheldAmount() const;

	// Сеттеры
	void setFullName(const string&);
	void setSalary(double);
	void setYear(int);
	void setPercentage(int);
	void setIncomeTax(double);
	void setDaysWorkedInMonth(int);
	void setDaysWorkingInMonth(int);

	void Input();
	void Print();

	double calculationOfAccrued();
	double calculationOfWithheld();
	double calculationOfAmountAssuedInHand();
	int calculationOfLengthOfService();
};