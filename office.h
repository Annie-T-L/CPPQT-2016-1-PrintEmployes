#ifndef OFFICE_H
#define OFFICE_H
#include "printable.h"
#include "iostream"

class Office : public Printable
{
public:
    Office();

private:
    std::string mOffName;
    std::string mOffAddr;
    double mPlace;
    int mWorkers;
    void print() const = 0;

public:
    std::string setOffName(std::string offName);
    std::string setOffAddr(std::string offAddr);
    double setoffPlace(double place);
    int setWorkers(int workers);


};

#endif // OFFICE_H
