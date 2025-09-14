# include <iostream>
# include <string>
using namespace std;

class Seating
{
    private :
        char first[2][6] = {'*','*','X','*','X','X','*','X','X','*','*','X'} ,business[5][6] = {'*','*','X','*','X','X','*','X','X','*','*','X','X','*','X','X','*','X','X','*','*','X','X','*','*','X','X','*','X','*'},economy[6][6] = {'*','*','*','X','*','X','X','*','X','X','*','*','X','X','*','X','X','*','X','X','*','*','X','X','*','*','X','X','*','X','*','X','*','*','X','X'};
        char ch;

        void firstClass()
        {
            int row1,seat1;
            cout << "Enter the required seat:";
            cout << "Row -";
            cin >> row1;
            cout << "Columns -";
            cin>> seat1;
            if(first[row1][seat1] == '*')
            {
                first[row1][seat1] =  'X';
                display();
                cout <<"Seat occupied" << endl;
            }
            else 
            {
                cout << "Seat not available" << endl;
            }
        }

        void businessClass()
        {
            int row2,seat2;
            cout << "Enter the required seat:";
            cout << "Row -";
            cin >> row2;
            cout << "Columns -";
            cin>> seat2;
            if(business[row2-2][seat2] == '*')
            {
                business[row2-2][seat2] = 'X';
                display();
                cout  <<"Seat occupied" << endl;
            }
            else 
            {
                cout << "Seat not available" << endl;
            }
        }

        void economyClass()
        {
            int row3,seat3;
            cout << "Enter the required seat:";
            cout << "Row -";
            cin >> row3;
            cout << "Columns -";
            cin>> seat3;
            if(economy[row3-7][seat3] == '*')
            {
                economy[row3-7][seat3] = 'X';
                display();
                cout  <<"Seat occupied" << endl;
            }
            else 
            {
                cout << "Seat not available" << endl;
            }
        }

        

    public :
        void display()
            {
                cout << "        A  B  C  D  E  F" << endl;
                for(int i=0;i<2;i++)
                {
                    cout << "Row " << i << " " << "- ";
                    for(int j=0;j<6;j++)
                    {
                        cout << first[i][j] << "  ";
                    }
                    cout << endl;
                }

                for(int i=0;i<5;i++)
                {
                    cout << "Row " << i+2 << " " << "- ";
                    for(int j=0;j<6;j++)
                    {
                        cout << business[i][j] << "  ";
                    }
                    cout << endl;
                }

                for(int i=0;i<6;i++)
                {
                    cout << "Row " << i+7 << " " << "- ";
                    for(int j=0;j<6;j++)
                    {
                        cout << economy[i][j] << "  ";
                    }
                    cout << endl;
                }
            }
        void userInput()
        {
            cout << "Enter 'f' for first class ,'b' for business class , 'e' for economy class :";
            cin >> ch;

            switch (ch)
            {
                case 'f' :firstClass();
                        break;
                case 'b' :businessClass();
                        break;
                case 'e':economyClass();
                        break;
                default : 
                        cout << "Invalid input" << endl;
                        break;
            }
        }
};

int main()
{
    Seating s1;
    s1.display();
    s1.userInput();
    return 0;
}