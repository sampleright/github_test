#include <iostream>

using namespace std;
class Calculate
{
public:
    void getInput(double &num1, double &num2)
    {
        cout << "Enter first number: ";
        cin >> num1;
        cout << "Enter second number: ";
        cin >> num2;
    }
};

class Cal:public Calculate
{
public:
    double add(double num1, double num2)
    {
        return num1 + num2;
    }
    double multiply(double num1, double num2)
    {
        return num1 * num2;
    }
    double subtract(double num1, double num2)
    {
        return num1 - num2;
    }
    double divide(double num1, double num2)
    {
        if (num2 == 0)
        {
            throw "Division by zero!";
        }
        return num1 / num2;
    }
};

int main()
{
    Calculate calculate;
    Cal cal;
    double num1, num2;

    calculate.getInput(num1, num2);

    double sum =cal.add( num1,  num2);
    double difference = cal.subtract( num1,  num2);
    double multiply = cal.multiply( num1,  num2);
    double division = cal.divide( num1,  num2);

    cout << "Sum: " << sum << endl;
    cout << "Difference: " << difference << endl;
    cout << "Multiply: " << multiply << endl;
    cout << "Division: " << division<< endl;

    return 0;
}
