#include <iostream>
#include<lib/matrixlib/matrix.h>
int main()
{
    math::Matrix m(3,3);
    m(0, 0) = 1.;
    

    std::cout << "Hello!" << std::endl;
    return 0;
}