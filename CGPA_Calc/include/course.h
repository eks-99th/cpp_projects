#ifndef COURSE_H
#define COURSE_H

using namespace std;
#include <string>

namespace cgpa_calculator {
class CourseRecord {
 private:
  string courseName;
  string grade;
  uint16_t credits;

 public:
  CourseRecord(const string &_courseName, const string _grade,
               const uint16_t _credits);
};
}  // namespace cgpa_calculator
#endif