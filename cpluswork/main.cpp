#include "main.h"


#define tellmetype(o)   std::cout<<#o<<"\t: "<<typeid(o).name()<<std::endl;
//  #o output its name;
//   o output its value;

int main(){

    const int i = 42;
    auto j = i;
    const auto &k = i; auto *p = &i;
    const auto j2 = i, &k2 = i;

    tellmetype( i );
    tellmetype( j );
    tellmetype( k );
    tellmetype( p );
    tellmetype( j2 );
    tellmetype( k2 );

    return 0;
}