#include "office.h"

Office::Office()
{
}

std::string Office::setOffName(std::string offName)
{
    mOffName = offName;
}

std::string Office::setOffAddr(std::string offAddr)
{
    mOffAddr = offAddr;
}

double Office::setoffPlace(double place)
{
    mPlace = place;
}

int Office::setWorkers(int workers)
{
    mWorkers = workers;
}
void Office::print() const
{
//        std::cout << mOffName << "\t" << mOffAddr << "\t" << mPlace << "\n"
//                  << mWorkers << std::endl;
