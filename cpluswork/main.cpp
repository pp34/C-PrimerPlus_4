#include "main.h"

//#define tellmetype(o)   std::cout<<#o<<"\t: "<<typeid(decltype(o)).name()<<std::endl;
//  #o output its name;
//   o output its value;


int main(){

    int i{ 0 }, length{ 0 };
    double *p;
    std::string isbn;
    sales_data *list = nullptr;
    sales_data *fptr = nullptr;
    std::fstream fin;

    fin.open( "SalesRecords.txt", std::ios::in );
    list = readRecord( fin, list );
    fin.close();
    
    length = lengthNode( list );

    sortPrice( list );


    showNode( list );
    /*do
    {
        std::cout << "which num U wanna find out? _\b";
        std::cin >> i;
        fptr = findNode( list, i );
    } while ( i );
    showNode( list );
    do
    {
        std::cout << "which ISBN U wanna find out? _\b";
        std::cin >> isbn;
        fptr = findNode( list, isbn );
    } while ( isbn!="ok" );
    do
    {
        std::cout << "which num U wanna move out? _\b";
        std::cin >> i;
        list = removeNode( list, i );
        showNode( list );
    } while ( i );*/
    
   // list = sortNode( list );
   // showNode( list );

    return 0;
}