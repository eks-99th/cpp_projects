# Functional Requirements

## User Input:

Allow the user to input the number of courses taken.

For each course, allow the user to input:

- The course name.
- The grade earned in the course.
- The credit hours of the course.

Grade Point Calculation:

- Calculate the grade points for each course based on the grade earned.
- Use a standard grade point system (e.g., A = 4.0, B = 3.0, etc.).

Individual Course Grades Display:

- Display the individual grades for each course along with the course name and credit hours.

Total Credits and Grade Points Calculation:

- Calculate the total credit hours attempted by the student.
- Calculate the total grade points earned by the student.

GPA Calculation:

- Calculate the Grade Point Average (GPA) for the semester using the formula:
- - GPA=Total Grade Points/Total Credit Hours

CGPA Calculation: Calculate the Cumulative Grade Point Average (CGPA) by considering all semesters' GPA data (assuming
historical GPA data is provided or can be input similarly).

Output Results:

- Display the GPA for the current semester.
- Display the CGPA of the student.
- Display total credits and total grade points achieved.

Non-Functional Requirements:

User Interface:

- Provide a simple and intuitive console-based user interface for input and output.

Error Handling:

- Validate user inputs to ensure they are within acceptable ranges (e.g., valid grades, non-negative credit hours).
- Handle exceptions and provide appropriate error messages for invalid inputs.

Performance:

- Ensure the program can handle a reasonable number of courses without significant delay (e.g., up to 50 courses).

Extensibility:

- Design the program to be easily extendable for additional features in the future, such as different grading systems or
  saving/loading data from files.

Technical Requirements:

Programming Language:

- The program must be implemented in C++.

Development Environment:

- Use a standard C++ development environment and compiler (e.g., GCC, Visual Studio, etc.).

Code Quality:

- Follow best practices for C++ programming, including proper use of functions, comments, and code organization.

Documentation:

- Provide documentation for the code, including comments and a user manual describing how to use the program.

Example Workflow:

Input Phase:

- Prompt the user to enter the number of courses.
- For each course, prompt the user to enter the course name, grade, and credit hours.

Processing Phase:

- Compute grade points for each course.
- Sum the total credit hours and total grade points.
- Calculate the GPA for the current semester.
- Calculate the CGPA considering previous semesters (if applicable).

Output Phase:

- Display individual course grades, total credits, total grade points, GPA, and CGPA.

Example Input/Output:

Input:

```yaml
Enter the number of courses: 3
Course 1 name: Math
Course 1 grade: A
Course 1 credit hours: 3
Course 2 name: English
Course 2 grade: B
Course 2 credit hours: 2
Course 3 name: History
Course 3 grade: A
Course 3 credit hours: 4
```

Output:

```yaml
? Course Grades
Math: A (3 credit hours)
English: B (2 credit hours)
History: A (4 credit hours)

Total Credits: 9
Total Grade Points: 33

GPA for the semester: 3.67
CGPA: 3.67 (assuming this is the first semester)
```

This detailed list of requirements should help guide the development of the CGPA Calculator program.
