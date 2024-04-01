#include <iostream>
using namespace std;

struct Student{
    int studentID;
    string name;
    int age;
    double GPA;
};
int main(){

    Student s1 = {345, "Usman Khan", 19, 60 / 21.25};
    Student s2 = {346, "Zeshan khan", 19, 80 / 21.25};

    cout << "Student ID: " << s1.studentID << "\n";
    cout << "Name: " << s1.name << "\n";
    cout << "Age: " << s1.age << "\n";
    cout << "GPA: " << s1.GPA << "\n";
    cout << "Next....." << endl;
    cout << "Student ID: " << s2.studentID << "\n";
    cout << "Name: " << s2.name << "\n";
    cout << "Age: " << s2.age << "\n";
    cout << "GPA: " << s2.GPA << "\n";

    return 0;
}