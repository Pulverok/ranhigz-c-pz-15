#include <iomanip>
#include <iostream>
#include <numeric>
#include "Student.h"

namespace services {
    void services::Student::PrintStudents(std::vector<entities::Student> students) {
        for (auto& student : students) {
            student = PrepareStudent(student);

            std::cout << "Name: " << student.GetFio().GetFullName() << std::endl;
            std::cout << "Group: " << student.GetGroup() << std::endl;
            std::cout << "Course: " << static_cast<unsigned>(student.GetCourse()) << std::endl;

            std::cout << std::fixed << std::setprecision(2);
            std::cout << "Scores: ";
            for (auto& score : student.GetScores()) {
                std::cout << score << " ";
            }

            std::cout << "Average score: " << student.GetAverageScore() << std::endl;
            std::cout << std::endl;
        }
    }

    entities::Student Student::PrepareStudent(const entities::Student& student) {
        auto preparedStudent = student;

        preparedStudent.SetAverageScore(
            CalculateAverageScore(student.GetScores())
        );

        return preparedStudent;
    }

    float Student::CalculateAverageScore(const std::vector<uint32_t> &scores) {
       return std::accumulate(scores.begin(), scores.end(), 0.0f) / static_cast<float>(scores.size());
    }
}
