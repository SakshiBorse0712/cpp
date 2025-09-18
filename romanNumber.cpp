#include <iostream>
#include <string>

using namespace std;

class RomanType
{
    string roman;
    public:
        void input()
        {
            cout << "Enter a roman number:";
            cin >> roman;
        }

        int romanNumber()
        {
            int total=0,n=0;
            int previousNumber=0;
        
            for(int i=0;roman[i]!='\0';i++)
            {
                n++;
            }

            for(int i=n-1;i>=0;--i)
            {
                int currentNumber = value(roman[i]);
                if(currentNumber < previousNumber)
                {
                    total -= currentNumber;
                }
                else
                {
                    total += currentNumber;
                }
                previousNumber = currentNumber;
            }
            return total;
        }

    private:
        int value(char roman)
        {
            switch(roman)
            {
                case 'I':return 1;
                case 'V':return 5;
                case 'X':return 10;
                case 'L':return 50;
                case 'C':return 100;
                case 'D':return 500;
                case 'M':return 1000;
            }
        }

    public:
        void output()
        {
            cout << roman <<" = " << romanNumber() << endl;
        }
};

int main()
{
    RomanType s1;
    s1.input();
    s1.output();
    return 0;
}