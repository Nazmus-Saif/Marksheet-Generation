# MarkSheet Generation

This is a C++ program for generating a detailed marksheet for students. It calculates grades, grade points, and GPA based on the marks entered for various subjects and displays a formatted result along with other student details.

## Features

- Accepts input for student details such as name, parent's names, student ID, group, type, college name, and year.
- Accepts marks for seven subjects: Bangla, English, ICT, Physics, Chemistry, Biology, and Higher Math.
- Calculates:
  - Individual subject grades and grade points.
  - Total marks and average marks.
  - GPA and final result based on the grading system.
- Validates marks input to ensure they are between 0 and 100.
- Displays a detailed formatted marksheet with subject-wise details.
- Allows generating marksheets for multiple students without restarting the program.

## Grading System

| Marks Range | Grade | Grade Point |
|-------------|-------|-------------|
| 80-100      | A+    | 5.00        |
| 70-79       | A     | 4.00        |
| 60-69       | A-    | 3.50        |
| 50-59       | B     | 3.00        |
| 40-49       | C     | 2.00        |
| 33-39       | D     | 1.00        |
| 0-32        | F     | 0.00        |

## How to Run

1. Clone the repository or download the source code file.
2. Open in VS Code or any editor click build and run.
