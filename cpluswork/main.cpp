#include "main.h"

//#define tellmetype(o)   std::cout<<#o<<"\t: "<<typeid(decltype(o)).name()<<std::endl;
//  #o output its name;
//   o output its value;


int main(){

    int i{ 0 };
    sales_data *list = nullptr;
    std::fstream fin;

    fin.open( "SalesRecords.txt", std::ios::in );
    list = readRecord( fin, list );
    fin.close();
    
    showNode( list );
    for ( i = 2; i < 20; i += 2 )
    {
        list = removeNode( list, i );
    }
    showNode( list );
    return 0;
}