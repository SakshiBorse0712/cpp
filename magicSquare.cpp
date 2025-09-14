# include <iostream>
# include <string>
using namespace std;

class MagicSquare
{
    private:
        int sum=0,k=0,a[3][3] ={0},row,column,r1=0,r2=0,r3=0,c1=0,c2=0,c3=0,d1=0,d2=0;

     
        void magicNumber()
        {
            for(int i=0;i<3;i++)
            {
                for(int j=0;j<3;j++)
                {
                    sum += a[i][j];
                }
            }

            k = sum/3;

            for(int i=0;i<3;i++)
            {
                r1 += a[0][i];
                r2 += a[1][i];
                r3 += a[2][i];
                c1 += a[i][0];
                c2 += a[i][1];
                c3 += a[i][2];
                d1 += a[i][i];
            }

            d2 = d2 + a[1][1] + a[2][0] + a[0][2];

            if(k == r1 && k==r2 && k==r3 && k==c1 && k==c2 && k==c3 && k==d1 && k==d2)
            {
                cout << "It's a magic square" << endl;
            }
            else
            {
                cout << "It's not a magic square" <<endl;
            }

        }

    public:
        

        void input()
        {
            for(int i=0;i<3;i++)
            {
                for(int j=0;j<3;j++)
                {
                    // cout << "Enter index -" << endl ;
                    // cout << "Row -";
                    // cin >> row;
                    // cout << "Column -";
                    // cin >> column;
                    // cout << "Enter number :";
                    // cin >> a[row][column] ;      
                    
                   
                            cout << "(" << i << "," << j << ")" << ":" ;
                            cin >> a[i][j];
                }
            }      
        }
        void output()
        {  
            for(int i=0;i<3;i++)
            {
                for(int j=0;j<3;j++)
                {
                    cout << a[i][j] << " ";
                }
                cout << endl;
            }
            magicNumber();
        }
};

int main()
{
    MagicSquare s1;
    s1.input();
    s1.output();
    return 0;
}