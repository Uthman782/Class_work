#include<iostream>
using namespace std;
struct stud{
    int r_no;
    float marks;
    float avg;
    char G;
};
int main(){
    stud s[5];
    s[0].r_no = 13;
    s[1].r_no = 14;
    s[2].r_no = 15;
    s[3].r_no = 16;
    s[4].r_no = 17;
    s[0].marks = 13;
    s[1].marks = 14;
    s[2].marks = 15;
    s[3].marks = 16;
    s[4].marks = 17;
    s[0].avg = 70;
    s[1].avg = 70;
    s[2].avg = 70;
    s[3].avg = 70;
    s[4].avg = 70;
    s[0].G = 'A';
    s[1].G = 'A';
    s[2].G = 'A';
    s[3].G = 'A';
    s[4].G = 'A';
//    for(int i=0; i<5;i++){
//        cout<<"Enter Student R no:" ;
//        cin>>s[i].r_no;
//        cout<<"Enter Student Marks:" ;
//        cin>>s[i].marks;
//        cout<<"Enter Student Avg:" ;
//        cin>>s[i].avg;
//        cout<<"Enter Student Grade:" ;
//        cin>>s[i].G;
//    }

    
    for(int i=0; i<5;i++){
        cout<<"Student R no:"<<s[i].r_no <<endl;
        cout<<"Student Marks:"<< s[i].marks<<endl;
        cout<<"Student Avg:"<< s[i].avg<<endl;
        cout<<"Student Grade:"<< s[i].G<<endl;
    }

return 0;
}