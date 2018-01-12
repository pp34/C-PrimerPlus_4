#include "main.h"

//#define tellmetype(o)   std::cout<<#o<<"\t: "<<typeid(decltype(o)).name()<<std::endl;
//  #o output its name;
//   o output its value;

int main(){
    
    //std::fstream fin;
    //fin.open( "SalesRecords.txt", std::ios::in );
    //readRecord( fin );
    //fin.close();
    sales_data *list = nullptr;
    list = creatNode( list );
    showNode( list );
    list = creatNode( list );
    showNode( list );
    list = creatNode( list );
    showNode( list );
    list = creatNode( list );
    showNode( list );
    return 0;
}