#include "Payment.h"

Payment::Payment()
{
    FullName = "";
    year = 0;
    percentage = 0;
    salary = 0;
    daysWorkedInMonth = 0;
    daysWorkingInMonth = 0;
    incomeTax = 13;

}

Payment::Payment(string full, int yr, int perc, double sal, double inTax,  int workedDays, int workingDays)
{
    FullName = full;
    year = yr;
    salary = sal;
    percentage = perc;
    daysWorkedInMonth = workedDays;
    daysWorkingInMonth = workingDays;
    incomeTax = inTax;
}


double Payment::calculationOfAccrued()
{
    accruedAmount = (salary * daysWorkedInMonth / daysWorkingInMonth) + (salary * percentage / 100);
    return accruedAmount;
}

double Payment::calculationOfWithheld()
{
    double pensionFundContribut = accruedAmount * 0.01;
    withheldAmount = (accruedAmount - pensionFundContribut) * (incomeTax / 100);
    return withheldAmount;
}

double Payment::calculationOfAmountAssuedInHand()
{
    double netAmount = accruedAmount - withheldAmount;
    return netAmount;
}

int Payment::calculationOfLengthOfService()
{
    int currentYear = 2024;
    

    return currentYear - year;
}

string Payment::getFullName() const {
    return FullName;
}

double Payment::getSalary() const {
    return salary;
}

int Payment::getYear() const {
    return year;
}

int Payment::getPercentage() const {
    return percentage;
}

double Payment::getIncomeTax() const {
    return incomeTax;
}

int Payment::getDaysWorkedInMonth() const {
    return daysWorkedInMonth;
}

int Payment::getDaysWorkingInMonth() const {
    return daysWorkingInMonth;
}

double Payment::getAccruedAmount() const {
    return accruedAmount;
}

double Payment::getWithheldAmount() const {
    return withheldAmount;
}

void Payment::setFullName(const string& full) {
    FullName = full;
}

void Payment::setSalary(double sal) {
    salary = sal;
}

void Payment::setYear(int yr) {
    year = yr;
}

void Payment::setPercentage(int perc) {
    percentage = perc;
}

void Payment::setIncomeTax(double tax) {
    incomeTax = tax;
}

void Payment::setDaysWorkedInMonth(int days) {
    daysWorkedInMonth = days;
}

void Payment::setDaysWorkingInMonth(int days) {
    daysWorkingInMonth = days;
}

void Payment::Input()
{
    cout << "Input FIO: ";
    getline(cin, FullName);

    cout << "Input the year you started working: ";
    cin >> year;

    cout << "Input salary: ";
    cin >> salary;

    cout << "Input bonus percentage: ";
    cin >> percentage;

    cout << "Input number of working days in this month: ";
    cin >> daysWorkingInMonth;

    cout << "Input number of worked days in the this month ";
    cin >> daysWorkedInMonth;
}


void Payment::Print()
{
    cout << "Employee`s data:" << endl;
    cout << "FIO: " << FullName << endl;
    cout << "Started work: " << year << endl;
    cout << "Salary: " << salary << " UAH." << endl;
    cout << "Bonus percentage: " << percentage << "%" << endl;
    cout << "Income tax: " << incomeTax << "%" << endl;
    cout << "Days worked in a month: " << daysWorkedInMonth << endl;
    cout << "Number of working days in a month: " << daysWorkingInMonth << endl;
    cout << "Accrued amount: " << calculationOfAccrued() << " UAH." << endl;
    cout << "Amount withheld: " << calculationOfWithheld() << " UAH." << endl;
    cout << "Amount issued in hand: " << calculationOfAmountAssuedInHand() << " UAH." << endl;
    cout << "Work experience: " << calculationOfLengthOfService() << " year" << endl;

}