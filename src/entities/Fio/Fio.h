#ifndef INC_18_FIO_PERSON_H
#define INC_18_FIO_PERSON_H
#include <string>
namespace entities {
    struct Fio {
    private:
        std::string name, surname, patronymic;
    public:
        ~Fio() = default;

        std::string GetName();
        std::string GetSurname();
        std::string GetPatronymic();
        std::string GetFullName();

        void SetName(std::string);
        void SetSurname(std::string);
        void SetPatronymic(std::string);
    };
}
#endif //INC_18_FIO_PERSON_H
