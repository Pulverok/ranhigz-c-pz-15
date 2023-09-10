#ifndef INC_18_STUDENT_SERVICE_H
#define INC_18_STUDENT_SERVICE_H

#include <map>
#include "../../entities/Student/Student.h"

namespace services {
    class Student {
    private:
        static float CalculateAverageScore(const std::vector<uint32_t>&);
        static entities::Student PrepareStudent(const entities::Student&);
    public:
        static void PrintStudents(std::vector<entities::Student>);
    };
}

#endif //INC_18_STUDENT_SERVICE_H
