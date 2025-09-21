/*Write a simple C++ class that implements ROT13 (Rotate by 13 places), a simple letter substitution cipher.
 ROT13 replaces a letter with the letter 13 letters after it in the alphabet*/

#include <iostream>
using namespace std ;
 
class RotateBy13
{
    private :
        char a[100] , ch ;
    public :

        void takeInput()
        {
            cout << "Enter a string :" ;
            cin >> a ;
        }

        void changeAlphabet()
        {
            cout << "Enter a alphabet to change:";
            cin >> ch ;
        }

        void rotateBy13()
        {
            for(int i=0;a[i]!='\0';i++)
            {
                if(a[i] == ch)
                {
                    a[i] += 13;
                }
                else if(a[i] == 'z')
                {
                    a[i] == 'm';
                }
                else if(a[i] == 'Z')
                {
                    a[i] == 'M';
                }
            }
            
            for(int i=0;a[i]!='\0';i++)
            {
                cout << a[i] ;
            }
        }
};

int main()
{
    RotateBy13 s1;
    s1.takeInput();
    s1.changeAlphabet();
    s1.rotateBy13();
    
    return 0;
}