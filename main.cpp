#include <iostream>
#include <string>
#include <typeinfo>
#include "class.h"
void f(BigInt n){}
int main(){
    std::string strp = "1000", strm = "-1000";
    int ip = 1000, im = -1000;
    BigInt a = 2000;
    BigInt b = -1000;
    
    std::cout << "bigint: " << a * b << ' ' << b * a << '\n';
    std::cout << "string: " << strp * a << ' ' << a * strp << ' ' << a * strm << ' ' << strm * a <<'\n';
    std::cout << "int: " << ip * a << ' ' << a * ip << ' ' << a * im << ' ' << im * a <<'\n';
    std::cout << "using of copy constructor: ";
    f(a);
    return 0;
}
