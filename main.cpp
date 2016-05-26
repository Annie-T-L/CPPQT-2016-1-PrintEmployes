#include <iostream>
#include <vector>
#include "employee.h"
#include "office.h"

#include "printable.h"

/*
 * Функція print друкує інформацію про кожен об'єкт у списку. Ідея полягає у тому, що функція
 * працює з нащадками класу Printable, який є базовим класом для всіх об'єктів, які можуть
 * роздрукувати інформацію про себе у консоль. Завдяки цьому ми можемо використовувати одну
 * і ту ж функцію для виводу інформації про об'єкти різних класів (головне щоб вони успадковували
 * від класу Printable). Тобто нам не потрібно змінювати функцію, чи писати її заново,
 * чи писати заново схожий код для виводу інших об'єктів - ми можемо використати функцію повторно.
 *
 * Для того, щоб функція print могла вивести інформацію про ваш клас необхідно успадкувати його
 * від класу Printable та перевизначити метод print().
 *
 * Параметер listToPrint - Список об'єктів про які необхідно вивести інформацію у консоль.
 */
void printList(const std::vector<Printable *> listToPrint)
{
    for (auto item: listToPrint)
    {
        item->print();
        std::cout << std::endl;
    }
}

int main()
{
    std::vector<Printable *> employeesToPrint;

    // Створіть об'єкти Employee та наповніть список тут....
    Employee *emp1;
    emp1->setName("George");
    emp1->setPhone("+380688956473");
    emp1->setAddr("Lviv, Stryiska str.");
    emp1->setSalary(1000); // in $
    emp1->setDate(2003);
    employeesToPrint.push_back(emp1);
    emp1->print();

    printList(employeesToPrint);


    std::cout << std::endl; // ------------

    std::vector<Printable *> officesToPrint;

    // Створіть об'єкти Office та наповніть список тут....
    Office *off1;
    off1->setOffName("SoftServe");
    off1->setOffAddr("Lviv, Kn. Romana");
    off1->setoffPlace(200);
    off1->setWorkers(70);
    officesToPrint.push_back(off1);
    off1->print();


    printList(officesToPrint);

    return 0;
}
