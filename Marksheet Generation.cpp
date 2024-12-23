#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

double GradePoint(int Marks)
{
    if (Marks >= 80 && Marks <= 100) return 5.00;
    else if (Marks >= 70 && Marks <= 79) return 4.00;
    else if (Marks >= 60 && Marks <= 69) return 3.50;
    else if (Marks >= 50 && Marks <= 59) return 3.00;
    else if (Marks >= 40 && Marks <= 49) return 2.00;
    else if (Marks >= 33 && Marks <= 39) return 1.00;
    else if (Marks >= 0 && Marks <= 32) return 0.00;
    return 0.00; // default return for invalid marks
}

string Grade(int Marks)
{
    if (Marks >= 80 && Marks <= 100) return "A+";
    else if (Marks >= 70 && Marks <= 79) return "A";
    else if (Marks >= 60 && Marks <= 69) return "A-";
    else if (Marks >= 50 && Marks <= 59) return "B";
    else if (Marks >= 40 && Marks <= 49) return "C";
    else if (Marks >= 33 && Marks <= 39) return "D";
    else if (Marks >= 0 && Marks <= 32) return "F";
    return "Invalid";
}

void MarkSheet()
{
    cout << "\t\t\t\t\t\t------------------------\n";
    cout << "\t\t\t\t\t\t| MarkSheet Generation |\n";
    cout << "\t\t\t\t\t\t------------------------\n\n\n";

    string FathersName, MothersName, StudentName, StudentGroup, StudentType, College;
    int Year, StudentID;
    int Bangla, English, ICT, Physics, Chemistry, Biology, HigherMath;

    cout << "\n Enter Fathers Name: ";
    getline(cin, FathersName);

    cout << "\n Enter Mothers Name: ";
    getline(cin, MothersName);

    cout << "\n Enter Student Name: ";
    getline(cin, StudentName);

    cout << "\n Enter Student Group: ";
    getline(cin, StudentGroup);

    cout << "\n Enter Student Type: ";
    getline(cin, StudentType);

    cout << "\n Enter College Name: ";
    getline(cin, College);

    cout << "\n Enter Year: ";
    cin >> Year;

    cout << "\n Enter Student ID: ";
    cin >> StudentID;

    cout << "\n Enter the Marks of Bangla: ";
    cin >> Bangla;

    cout << "\n Enter the Marks of English: ";
    cin >> English;

    cout << "\n Enter the Marks of ICT: ";
    cin >> ICT;

    cout << "\n Enter the Marks of Physics: ";
    cin >> Physics;

    cout << "\n Enter the Marks of Chemistry: ";
    cin >> Chemistry;

    cout << "\n Enter the Marks of Biology: ";
    cin >> Biology;

    cout << "\n Enter the Marks of HigherMath: ";
    cin >> HigherMath;

    if (Bangla > 100 || Bangla < 0 || English > 100 || English < 0 || ICT > 100 || ICT < 0 ||
        Physics > 100 || Physics < 0 || Chemistry > 100 || Chemistry < 0 || Biology > 100 || Biology < 0 || HigherMath > 100 || HigherMath < 0)
    {
        cout << "\n\n\t\t\t\t\t\t  # Invalid Mark #\n\n";
    }
    else
    {
        int TotalMarks = (Bangla + English + ICT + Physics + Chemistry + Biology + HigherMath);
        int Average = (TotalMarks / 7);
        double GPA = ((GradePoint(Bangla) + GradePoint(English) + GradePoint(ICT) + GradePoint(Physics) +
                       GradePoint(Chemistry) + GradePoint(Biology) + GradePoint(HigherMath)) / 7);

        cout << "\n\n\n\t\t\t\t\t    Higher Secondary Certificate Exam\n";
        cout << "\n\n\t  Fathers Name     : " << FathersName
             << "\n\t  Mothers Name     : " << MothersName
             << "\n\t  Student ID       : " << StudentID
             << "\n\t  Student Name     : " << StudentName << endl;

        if (Bangla < 33 || English < 33 || ICT < 33 || Physics < 33 || Chemistry < 33 || Biology < 33)
            cout << " Result: F ";
        else if (GPA == 5.00)
            cout << " Result: A+ ";
        else if (GPA >= 4.00 && GPA <= 4.99)
            cout << " Result: A ";
        else if (GPA >= 3.50 && GPA <= 3.99)
            cout << " Result: A- ";
        else if (GPA >= 3.00 && GPA <= 3.49)
            cout << " Result: B ";
        else if (GPA >= 2.00 && GPA <= 2.99)
            cout << " Result: C ";
        else if (GPA >= 1.00 && GPA <= 1.99)
            cout << " Result: D ";

        if (GradePoint(Bangla) == 0.00 || GradePoint(English) == 0.00 || GradePoint(ICT) == 0.00 ||
            GradePoint(Physics) == 0.00 || GradePoint(Chemistry) == 0.00 || GradePoint(Biology) == 0.00)
            cout << "\n\t  GPA: 0.00";
        else
            cout << "\n\t  GPA: " << fixed << setprecision(2) << GPA;

        cout << "\n\t  Year: " << Year
             << "\n\t  Student Type: " << StudentType
             << "\n\t  Student Group: " << StudentGroup
             << "\n\t  College Name: " << College
             << "\n\t --------------------------------------------------------------------------------------------------\n";
        cout << "\t | Subjects\t\tMaximumMarks\t\tObtainedMarks\t\tGrade\t\tGradePoint|\n";
        cout << "\t --------------------------------------------------------------------------------------------------\n";
        cout << "\t | Bangla\t\t    100\t\t\t     " << Bangla << "\t\t\t  " << Grade(Bangla) << "\t\t   " << fixed << setprecision(2) << GradePoint(Bangla) << "   |\n";
        cout << "\t | English\t\t    100\t\t\t     " << English << "\t\t\t  " << Grade(English) << "\t\t   " << fixed << setprecision(2) << GradePoint(English) << "   |\n";
        cout << "\t | ICT\t\t\t    100\t\t\t     " << ICT << "\t\t\t  " << Grade(ICT) << "\t\t   " << fixed << setprecision(2) << GradePoint(ICT) << "   |\n";
        cout << "\t | Physics\t\t    100\t\t\t     " << Physics << "\t\t\t  " << Grade(Physics) << "\t\t   " << fixed << setprecision(2) << GradePoint(Physics) << "   |\n";
        cout << "\t | Chemistry\t\t    100\t\t\t     " << Chemistry << "\t\t\t  " << Grade(Chemistry) << "\t\t   " << fixed << setprecision(2) << GradePoint(Chemistry) << "   |\n";
        cout << "\t | Biology\t\t    100\t\t\t     " << Biology << "\t\t\t  " << Grade(Biology) << "\t\t   " << fixed << setprecision(2) << GradePoint(Biology) << "   |\n";
        cout << "\t | HigherMath\t\t    100\t\t\t     " << HigherMath << "\t\t\t  " << Grade(HigherMath) << "\t\t   " << fixed << setprecision(2) << GradePoint(HigherMath) << "   |\n";
        cout << "\t --------------------------------------------------------------------------------------------------\n";
        cout << "\t\t\t\t\t\t  TotalMarks: " << TotalMarks << "\n\t\t\t\t\t\t  AverageMarks: " << Average << endl;
    }
}

int main()
{
    MarkSheet();
    while (true)
    {
        int Process;
        cout << "\n\n Enter 1 for Show Another or 2 for Exit: ";
        cin >> Process;
        cout << "\n\n";
        switch (Process)
        {
        case 1:
            cin.ignore();  // To clear the buffer before calling MarkSheet again
            MarkSheet();
            break;
        case 2:
            return 0;
        default:
            cout << "\n\n Please Enter a Valid Process\n\n";
        }
    }
}
