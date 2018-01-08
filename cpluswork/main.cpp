#include "main.h"


typedef char *pstring;

int main(){

    int i = 0, &r = i;
    auto a = r;                     //  a int value
    const int ci = i, &cr = ci;    //  ci top-level constant int value, cr constant int reference.
    auto b = ci;                    //  b int value(ignore ci's top-level constant).
    auto c = cr;                    //  c int value(ignore ci's top-level constant).
    auto d = &i;                    //  d int pointer(pointer to int value).
    auto e = &ci;                   //  e pointer to constant int value.

    const auto f = ci;

    auto &g = ci;
    //auto &h = 42;     reference 
    const auto &j = 42;

    auto k = ci, &l = i;
    auto &m = ci, *p = &ci;

    a = 42;
    b = 42;
    c = 42;
    //d = 42;
    //e = 42;
    //g = 42;


    return 0;
}