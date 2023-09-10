#include <iostream>
#include "src/services/Student/Student.h"
#include "src/services/CommandLine/Student/Student.h"

int main() {
    auto students = commandLine::Student::CreateFromUserInput();

    services::Student::PrintStudents(students);

    return 0;
}
