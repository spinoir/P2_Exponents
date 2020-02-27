//Exponents
#include <iostream>
using namespace std;
int main() {
int exp(0);
double base(0);
int count(0);
double result(0);

cout << "Enter the base: ";
cin >> base;
result = base;
cout << "Enter the power: ";
cin >> exp;

if (exp > 0)
{
    count = exp;
    while (count > 1) {
        result = result * base;
        //cout << result << endl;
        count--;
        //cout << count << endl;
    }
}
else if (exp < 0)
{
    while (count > 1)
    {
        count = exp * -1;
        result = result * base;
        count --;
    }
    result = 1 / result;
}
else if (exp == 0)
{
   result = 1;
}

cout << result << endl;

    return 0;
}
