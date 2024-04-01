#include <iostream>
using namespace std;
struct Marks{
    int r_no;
    int subjects[6];
    float totalMarks;
    float AVG, GPA;
} s[5];

int main(){
    for (int i = 0; i < 5; i++){
        cout << "Enter student Roll No: ";
        cin >> s[i].r_no;
        cout << "Now Enter Students subjects marks........\n";
        for (int j = 0; j < 6; j++){
            if (j == 0)
                cout << "Programming Fundamental: ";
            else if (j == 1)
                cout << "Islamiyat: ";
            else if (j == 2)
                cout << "Calculus: ";
            else if (j == 3)
                cout << "English: ";
            else if (j == 4)
                cout << "Physics: ";
            else if (j == 5)
                cout << "ICT: ";
            cin >> s[i].subjects[j];
            if (s[i].subjects[j] < 0 or s[i].subjects[j] > 100){
                cout << "\aInvalid Marks, try once again.\n";
                cin >> s[i].subjects[j];
                if (s[i].subjects[j] < 0 or s[i].subjects[j] > 100)
                    exit(0);
            }
        }
        if(i!=5)
            	cout << "Enter Next Sdutent Marks!...........\n";
//        Calculating.................|
        for (int k = 0; k < 6; k++)
            s[i].totalMarks += s[i].subjects[k];

        s[i].AVG = s[i].totalMarks / 6;
        s[i].GPA = s[i].AVG / 21.25;
    }
    cout << ".....................STUDENTS MARKS................\n";
    cout << "RN "
         << " PF   IS   CA   EN   PH   IC   TM    AV    GPA ";
    cout<<endl;
    for (int i = 0; i < 5; i++){
        cout << s[i].r_no;
        for (int j = 0; j < 6; j++)//Showing Marks
            cout << "  " << s[i].subjects[j] << " ";
            //showing calculations
        cout << "  " << s[i].totalMarks;
        cout << "   " << (int)s[i].AVG;
        cout << "  " << s[i].GPA;
        cout << endl;
    }
    return 0;
}