# include <iostream>
# include <string>
using namespace std;

class Notation
{
    public:
        int hour,min;
        string period;

        void enterHours()
        {
            cout << "Enter Hours :";
            cin >> hour ;
        }

        void enterMin()
        {
            cout << "Enter Minutes :";
            cin >>min;
        }

        void enterPeriod()
        {
            cout << "Enter Period (AM or PM) :";
            cin >> period;
        }

        void convert12to24()
        {
            if(period == "AM")
            {
                if(hour== 12)
                {
                    hour = 0;
                }
            }

            else  if(period == "PM")
            {
                if(hour != 12)
                {
                    hour += 12;
                }
            }

            if(hour < 10) cout << "0";
            cout << hour << " : ";

            if(min < 10) cout << "0";
            cout << min << endl;
        }
};

int main()
{
    Notation s;
    s.enterHours();
    s.enterMin();
    s.enterPeriod();
    s.convert12to24();
    return 0;
}