#include "course.h"

using namespace std;
using namespace cgpa_calculator;

CourseRecord::CourseRecord(const string &_courseName, const string _grade,
                           const uint16_t _credits) {
  this->courseName = _courseName;
  this->grade = _grade;
  this->credits = _credits;
}
