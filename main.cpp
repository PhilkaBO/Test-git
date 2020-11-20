#include <iostream>
double my_pow(double, unsigned int);

int main()
{

}

double my_pow(double value, unsigned int pow) {
    double result = 1;
    while (pow != 0) {
        result = result * value;
        pow--;
    }
    return result;
}