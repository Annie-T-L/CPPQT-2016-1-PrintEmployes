#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include "iostream"
#include "printable.h"


class Employee : public Printable
{
public:
    Employee();

public:
    std::string setName(std::string name);
    std::string setPhone(std::string phone);
    std::string setAddr(std::string addr);
    double setSalary(double salary);
    int setDate(int date);
    void print() const = 0;

private:
    std::string mName;
    std::string mPhone;
    std::string mAddr;
    double mSalary;
    int mDate;

};

#endif // EMPLOYEE_H
