#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double m=1;  
	double z1; 
	double z2;

    z1 = sqrt ((3*m+2)*(3*m+2)-24*m)/(3*sqrt(m)-2/sqrt(m));
    z2 = sqrt (m);

    std::cout << "z1 = " << z1 << std::endl;
    std::cout << "z2 = " << z2 << std::endl;

    cin.get();
    return 0;
}


