#ifndef LABORATORY_WORK_15_STUDENT_SERVICES_COMMAND_LINE_H
#define LABORATORY_WORK_15_STUDENT_SERVICES_COMMAND_LINE_H

#include "../../../entities/Student/Student.h"

namespace commandLine {
    class Student {
    public:
        static std::vector<entities::Student> CreateFromUserInput();
    };
}

#endif //LABORATORY_WORK_15_STUDENT_SERVICES_COMMAND_LINE_H
