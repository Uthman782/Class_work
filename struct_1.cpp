#include <iostream>
// #include<ios>
using namespace std;
struct student
{
    int r_no;      // Student Roll No
    string name;   // Student Name
    float t_marks; // Student Total Marks
    float avg;     // Student Average
};

int main()
{
    student s1, s2, s3;
    cout << "Enter student Name: ";
    getline(cin, s1.name);
    cout << "Enter student R.No: ";
    cin >> s1.r_no;
    cout << "Enter student Total Marks: ";
    cin >> s1.t_marks;
    s1.avg = s1.t_marks / 11;
    //    system("cls");
    // for next student
    cout << "Next...." << endl;
    cout << "Enter student Name: ";
    cin >> s2.name;
    cout << "Enter student R.No: ";
    cin >> s2.r_no;
    cout << "Enter student Total Marks: ";
    cin >> s2.t_marks;
    s2.avg = s2.t_marks / 11;
    //    system("cls");
    // for next student
    cout << "Next...." << endl;
    cout << "Enter student Name: ";
    cin >> s3.name;
    cout << "Enter student R.No: ";
    cin >> s3.r_no;
    cout << "Enter student Total Marks: ";
    cin >> s3.t_marks;
    s3.avg = s3.t_marks / 11;

    cout << endl<< "-OUTPUT-" << endl;
    cout << "Student-> R.No:     Name:   Marks:    Average: " << endl;
    cout << "     " << s1.r_no << "        " << s1.name 
    << "     " << s1.t_marks << "      " << s1.avg << endl;
    cout << "     " << s2.r_no << "        " << s2.name 
    << "     " << s2.t_marks << "      " << s2.avg << endl;
    cout << "     " << s3.r_no << "        " << s3.name 
    << "     " << s3.t_marks << "      " << s3.avg << endl;

    return 0;
}