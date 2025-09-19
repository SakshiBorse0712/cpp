/*WAP using class and object in C++ to perform following unit conversion 
(any unit provided by user to any unit asked by the user): inches, mm, cm, m, km, feet, yards, miles*/
# include <iostream>
using namespace std;

class Units {
    public:
        int convert(double n,string fromUnit ,string toUnit)
        {
            double n1=0;// n1=unit in meter

             if (fromUnit == "inches") {
                n1 = n * 0.0254;
            } else if (fromUnit == "mm") {
                n1 = n * 0.001;
            } else if (fromUnit == "cm") {
                n1 = n * 0.01;
            } else if (fromUnit == "m") {
                n1 = n;
            } else if (fromUnit == "km") {
                n1 = n * 1000;
            }
            else{
                cout << "Invalid" << endl;
            }


            if (toUnit == "inches") {
                return n1 / 0.0254;
            } else if (toUnit == "mm") {
                return n1 / 0.001;
            } else if (toUnit == "cm") {
                return n1 / 0.01;
            } else if (toUnit == "m") {
                return n1;
            } else if (toUnit == "km") {
                return n1 / 1000;
            }
        }
};

int main()
{
    double n , result;
    string fromUnit,toUnit;
    cout << "Enter value :";
    cin >> n ;

    cout << "Enter the unit you want to convert from :";
    cin >> fromUnit ;

    cout << "Enter the unit you want to convert :";
    cin >> toUnit ;

    Units s1;

    result = s1.convert(n , fromUnit , toUnit);
    cout << n << " " << fromUnit << " = " << result << " " << toUnit << endl;

    return 0;
}
