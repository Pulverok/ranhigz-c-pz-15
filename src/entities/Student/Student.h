#ifndef INC_18_STUDENT_ENTITY_H
#define INC_18_STUDENT_ENTITY_H

#include <cstdint>
#include <vector>
#include "../Fio/Fio.h"

namespace entities {
    struct Student {
    private:
        entities::Fio fio;

        std::vector<uint32_t> scores;
        std::string group;
        uint32_t course;
        float averageScore;
    public:
        ~Student() = default;

        [[nodiscard]] entities::Fio GetFio() const;
        [[nodiscard]] std::vector<uint32_t> GetScores() const;
        [[nodiscard]] std::string GetGroup() const;
        [[nodiscard]] uint32_t GetCourse() const;
        [[nodiscard]] float GetAverageScore() const;

        void SetFio(const entities::Fio&);
        void SetScores(const std::vector<uint32_t>&);
        void SetGroup(std::string);
        void SetCourse(uint32_t);
        void SetAverageScore(float);

    };
}

#endif //INC_18_STUDENT_ENTITY_H
