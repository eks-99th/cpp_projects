#include <course.h>
#include <gtest/gtest.h>

using namespace cgpa_calculator;

TEST(DATA_ENTRY, COURSE_ELEMENT_EXISTS) {
  std::string name = "CS101";
  std::string grade = "A";
  double credit = 3.0;
  CourseRecord *course = new CourseRecord(name, grade, credit);
  ASSERT_NE(course, nullptr);
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}