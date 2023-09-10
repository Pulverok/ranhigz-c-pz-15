#include "Student.h"

using namespace entities;

Fio Student::GetFio() const {
    return this->fio;
}

std::string Student::GetGroup() const {
    return this->group;
}

uint32_t Student::GetCourse() const {
    return this->course;
}

std::vector<uint32_t> Student::GetScores() const {
    return this->scores;
}

float Student::GetAverageScore() const {
    return this->averageScore;
}

void Student::SetFio(const entities::Fio& _fio) {
    this->fio = _fio;
}

void Student::SetGroup(std::string _group) {
    this->group = std::move(_group);
}

void Student::SetCourse(uint32_t _course) {
    this->course = _course;
}

void Student::SetScores(const std::vector<uint32_t>& _scores) {
    this->scores = _scores;
}

void Student::SetAverageScore(float _averageScore) {
    this->averageScore = _averageScore;
}
