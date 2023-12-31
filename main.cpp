#include <iostream>
#include "src/services/Student/Student.h"
#include "src/services/CommandLine/Student/Student.h"

int main() {
    setlocale(LC_ALL, "Russian");

    auto students = commandLine::Student::CreateFromUserInput();
    services::Student::PrintStudents(students);

    return 0;
}
