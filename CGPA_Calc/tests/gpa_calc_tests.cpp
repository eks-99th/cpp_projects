#include <gtest/gtest.h>

#include <vector>

#include "course.hpp"
#include "gpa_calc.hpp"

using namespace cgpa_calculator;

TEST(GPA_CALC, DUMMY) {
  std::vector<CourseRecord> courses = {
      CourseRecord("Math", "A", 10), CourseRecord("History", "A", 10),
      CourseRecord("Geography", "A", 10), CourseRecord("Arts", "A", 10)};
  double gpa = calculate_gpa(courses);
  ASSERT_EQ(gpa, 100);
}