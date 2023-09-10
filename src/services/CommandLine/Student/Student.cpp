#include <iostream>
#include "Student.h"
#include "../Fio/Fio.h"

namespace commandLine {
    std::vector<entities::Student> Student::CreateFromUserInput() {
        std::vector<entities::Student> students;
        bool continueInput = true;

        while (continueInput) {
            entities::Student data;
            std::string group, course;
            std::vector<uint32_t> scores;

            entities::Fio fio = Fio::CreateFromUserInput();

            std::cout << "Enter group: " << std::endl;
            std::cin >> group;

            std::cout << "Enter course: " << std::endl;
            std::cin >> course;

            std::cout << "Enter scores: " << std::endl;
            for (int i = 0; i < 5; ++i) {
                std::cout << "Enter score " << i + 1 << ": " << std::endl;
                uint32_t score;
                std::cin >> score;
                scores.push_back(score);
            }

            data.SetFio(fio);
            data.SetGroup(group);
            data.SetCourse(static_cast<uint32_t>(std::stoi(course)));
            data.SetScores(scores);

            students.push_back(data);

            std::cout << "Do you want to continue input? (y/n)" << std::endl;
            char answer;
            std::cin >> answer;
            continueInput = answer == 'y';
        }

        return students;
    }
}