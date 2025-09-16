# include <iostream>
using namespace std ;

class Rectangle 
{
    private : 
        int length , width ,area = 1 ,perimeter = 0;
    
    public :
        void getInput()
        {
            cout << "Enter length :";
            cin >> length ;
            cout << "Enter width :";
            cin >> width ;
        }

        void areaOfRectangle()
        {
            area = length * width ;
            cout << "Area of rectangle :" << area << endl ;
        }

        void perimeterOfRectangle()
        {
            perimeter = 2 * (length + width) ;
            cout << "Perimeter of rectangle :" << perimeter << endl ;
        }
};

int main()
{
    Rectangle s1;
    s1.getInput();
    s1.areaOfRectangle();
    s1.perimeterOfRectangle();
    return 0;
}