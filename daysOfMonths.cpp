#include <iostream>
using namespace std;

class DayOfMonth
{
    int days,startDay;
    public:
        void startDays()
        {
            cout << "Enter day of the week on which the month begins:";
            cin >> startDay;
        }
         void numberOfDays()
         {
            cout << "Enter number of days in the month:" ;
            cin >> days ;
         }

         void printCalender()
         {
            cout << "  Sun    Mon     Tue     Wed     Thur    Fri    Sat " << endl;
            int currentDay =1;
            for(int i=0;i<startDay ;i++)
            {
                cout << "   " ;
            }

            for(int i=startDay;currentDay<=days;i++)
            {
                cout << "  " <<currentDay << "     ";
                if (i % 7 == 6)
                {
                cout << endl;
                }
                currentDay++;
            }
            cout << endl;
         }

};

int main()
{
    DayOfMonth s1;
    s1.startDays();
    s1.numberOfDays();
    s1.printCalender();
    return 0;
}