#include "main.h"


typedef char *pstring;

int main(){

    int i = 0, &r = i;
    auto a = r;                     //  a int value
    std::cout << "a: " << a << std::endl;
    const int ci = i, &cr = ci;    //  ci top-level constant int value, cr constant int reference.
    std::cout << "ci: " << ci << std::endl;
    std::cout << "cr " << cr << std::endl;
    auto b = ci;                    //  b int value(ignore ci's top-level constant).
    std::cout << "b: " << b << std::endl;
    auto c = cr;                    //  c int value(ignore ci's top-level constant).
    std::cout << "c: " << c << std::endl;
    auto d = &i;                    //  d int pointer(pointer to int value).
    std::cout << "*d: " << *d << std::endl;
    auto e = &ci;                   //  e pointer to constant int value.
    std::cout << "*e: " << *e << std::endl;
    const auto f = ci;
    std::cout << "f: " << f << std::endl;
    auto &g = ci;
    std::cout << "g: " << g << std::endl;
    //auto &h = 42;     reference 
    const auto &j = 42;
    std::cout << "j: " << j << std::endl;
    auto k = ci, &l = i;
    std::cout << "k: " << k << std::endl;
    std::cout << "l: " << l << std::endl;
    auto &m = ci, *p = &ci;
    std::cout << "m: " << m << std::endl;
    std::cout << "*p: " << *p << std::endl;
    a = 42;
    b = 42;
    c = 42;
    //d = 42;
    //e = 42;
    //g = 42;
    std::cout << "a: " << a << std::endl;
    std::cout << "b: " << b << std::endl;
    std::cout << "c: " << c << std::endl;
    return 0;
}