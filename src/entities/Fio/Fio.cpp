#include "Fio.h"

using namespace entities;

std::string Fio::GetName() {
    return this->name;
}

std::string Fio::GetSurname() {
    return this->surname;
}

std::string Fio::GetPatronymic() {
    return this->patronymic;
}

std::string Fio::GetFullName() {
    return this->GetSurname() + " " + this->GetName() + " " + this->GetPatronymic();
}

void Fio::SetName(std::string _name) {
    this->name = std::move(_name);
}

void Fio::SetSurname(std::string _surname) {
    this->surname = std::move(_surname);
}

void Fio::SetPatronymic(std::string _patronymic) {
    this->patronymic = std::move(_patronymic);
}
