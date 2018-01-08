#include "main.h"



int main(){

    const int v2( 0 );           //  top-level const 
    const int i(1);              //  top-level const 
    int v1 = v2;                 //  top-level const assigned to non-const is legal
    int *p1 = &v1, &r1 = v1;    //  non-const
    const int *p2 = &v2, *const p3 = &i, &r2 = v2;
    //  low-level const p2, top&low-level const p3, refence always is top-level const.


    r1 = v2;    //  top-level const assigned to non-const.
    //p1 = p2;      low-level const pointer has to pointer to const, but p1 is not.
    p2 = p1;    //  non-const pointer assigned its addr to low-level const pointer, legal.
    //p1 = p3;      top&low-level const pointer assigned its addr to non-const pointer, illegal.
    p2 = p3;    //  top&low-level const pointer assigned its addr to low-level const pointer, legal.


    std::cout << *p2 << std::endl;
    //f4_12_13();
    return 0;
}