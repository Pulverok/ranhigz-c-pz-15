#include "Fio.h"

#include <utility>
#include <iostream>

using namespace commandLine;

entities::Fio Fio::CreateFromUserInput() {
    entities::Fio data;
    std::string name, surname, patronymic;

    std::cout << "Enter name: " << std::endl;
    std::cin >> name;
    std::cout << "Enter surname: " << std::endl;
    std::cin >> surname;
    std::cout << "Enter patronymic: " << std::endl;
    std::cin >> patronymic;

    data.SetName(std::move(name));
    data.SetSurname(std::move(surname));
    data.SetPatronymic(std::move(patronymic));

    return data;
}