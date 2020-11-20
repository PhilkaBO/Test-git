#include <iostream>
double my_pow(double, int);

int main()
{
}

double my_pow(double value, int pow) {
    double result = 1;
    while (pow != 0) {
        result = result * value;
        if(pow > 0){ pow--; }
        else if(pow < 0) { 
            result = result * -1;
            pow++; }
    }
    return result;
}