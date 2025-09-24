#include <iostream>
#include <string>

using namespace std;

struct StudentType
{
    string studentFName, studentLName;
    int testScore;
    char grade;
};

int n=5;

class Student
{
    StudentType s[20];
        
        void grade()
        {
            for(int i=0;i<n;i++)
            {
                if(s[i].testScore >= 90)
                {
                    s[i].grade = 'A';
                }
                else if(s[i].testScore < 90 && s[i].testScore >= 75)
                {
                    s[i].grade = 'B';
                }
                else if(s[i].testScore < 75 && s[i].testScore >= 55)
                {
                    s[i].grade = 'C';
                }
                else if(s[i].testScore < 55 && s[i].testScore >= 40)
                {
                    s[i].grade = 'D';
                }
                else if(s[i].testScore < 40 && s[i].testScore >= 20)
                {
                    s[i].grade = 'E';
                }
                else
                {
                    s[i].grade = 'F';
                }
            }
        }

        int highestScore()
        {
            int Highest = s[0].testScore;
            for(int i=0;i<n;i++)
            {
                if(s[i].testScore > Highest)
                {
                    Highest = s[i].testScore;
                }
            }
            return Highest;
        }

        void printHighest()
        {
            int max = highestScore();
            for(int i=0;i<n;i++)
            {
                if(s[i].testScore == max)
                {
                    cout << "Name of the Student with Highest TestScore :" << s[i].studentFName << " " << s[i].studentLName << endl;
                }
            }
        }
    public:
            void readData()
            {
                for(int i=0;i<n;i++)
                {
                    cout << "Enter Students Name :";
                    cin >> s[i].studentFName >> s[i].studentLName ;
                    cout << "Enter Test Score :";
                    cin >> s[i].testScore ;
                    cout << endl;
                }
            }

            void output()
            {
                grade();
                cout << endl << "RESULT !!" << endl;
                for(int i=0;i<n;i++)
                {
                    cout << "Student Name :" << s[i].studentLName << " " << s[i].studentFName << endl;
                    cout << "Test Score :" << s[i].testScore << endl;
                    cout << "Grade :" << s[i].grade << endl;
                    cout << endl;
                }

                printHighest();
            }
};

int main()
{
    Student a;
    a.readData();
    a.output();
    return 0;
}