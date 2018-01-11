#include "main.h"

//#define tellmetype(o)   std::cout<<#o<<"\t: "<<typeid(decltype(o)).name()<<std::endl;
//  #o output its name;
//   o output its value;

int main(){
    int i{ 0 };
    int cnt{ 0 };
    char line[100];
    char ch;
    std::fstream fin;
    fin.open( "SalesRecords.txt", std::ios::in );
    while ( !fin.eof() )
    {
        ch=fin.get();
        
        if ( ch != '\n' )
        {
            //std::cout << ch ;
            line[ i ] = ch;
        }
        else{
            line[ i ] = '\n';
            //std::cout << std::endl;
        }
        i++;
        //std::cout << i << std::endl;
    }
    for ( cnt = 0; cnt < i; cnt++ )
    {
        std::cout << line[cnt];
        //std::cout << "line[" << cnt << "]" << line[ cnt ] << std::endl;
    }
    fin.close();
    return 0;
}