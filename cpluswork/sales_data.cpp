#include "sales_data.h"

sales_data item[ 20 ];

std::string getIsbn( sales_data item ){ return item.isbn; }
unsigned int getTotoal( sales_data item ){ return item.totoal; }
unsigned int getSellout( sales_data item ){ return item.sellout; }
double getPrice( sales_data item ){ return item.price; }

void setIsbn( sales_data item, std::string isbn ){  item.isbn = isbn; }
void setTotoal( sales_data item, unsigned int total ){  item.totoal = total; }
void setSellout( sales_data item, unsigned int sellout ){  item.sellout = sellout; }
void setPrice( sales_data item, double price ){  item.price = price; }

void showIsbn( sales_data item ){
    std::cout << "ISBN: " << item.isbn << std::endl;
}

void showTotal( sales_data item ){
    std::cout << "Total: " << item.totoal << std::endl;
}

void showSellout( sales_data item ){
    std::cout << "Sellout: " << item.sellout << std::endl;
}

void showPrice( sales_data item ){
    std::cout << "Price: " << item.price << std::endl;
}

unsigned int str2uint( std::string str ){

    unsigned int  i{ 0 },tmp{ 0 }, result{ 0 };
    int ten{ 0 };
    ten = str.size()-1;
    for ( i = 0; i < ten+1; i++ )
    {
        if ( isdigit( str[ i ] ) )
        {
            tmp = ( str[ i ] - '0' );

        }
        if ( i == (ten) ) { 
            result += tmp;
        }
        else {
            result += tmp*10*( ten - i );
        }
    }
    return result;
}
