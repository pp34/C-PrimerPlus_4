#include "main.h"

//#define tellmetype(o)   std::cout<<#o<<"\t: "<<typeid(decltype(o)).name()<<std::endl;
//  #o output its name;
//   o output its value;


int main(){

    sales_data *list = nullptr;
    std::fstream fin;

    fin.open( "SalesRecords.txt", std::ios::in );
    list = readRecord( fin, list );
    fin.close();
    
    showNode( list );

    return 0;
}