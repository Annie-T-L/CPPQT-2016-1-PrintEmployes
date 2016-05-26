#include "employee.h"

Employee::Employee()
{
}

std::string Employee::setName(std::string name)
{
    mName = name;
}

std::string Employee::setPhone(std::string phone)
{
    mPhone = phone;
}

std::string Employee::setAddr(std::string addr)
{
    mAddr = addr;
}

double Employee::setSalary(double salary)
{
    mSalary = salary;
}

int Employee::setDate(int date)
{
    mDate = date;
}

void Employee::print() const
{
//    std::cout << mName << "\t" << mPhone << "\t" << mAddr << "\n"
//              << mSalary << "\t" << mDate << std::endl;
}


