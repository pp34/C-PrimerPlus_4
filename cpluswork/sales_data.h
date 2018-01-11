#ifndef _SALES_DATA_H
#define _SALES_DATA_H

#include<iostream>
#include<string>

typedef struct{

    std::string isbn;
    unsigned int totoal{ 0 };
    unsigned int sellout{ 0 };
    double price{ 0.0 };
}sales_data;

std::string getIsbn( sales_data item );
unsigned int getTotoal( sales_data item );
unsigned int getSellout( sales_data item );
double getPrice( sales_data item );
void setIsbn( sales_data item, std::string isbn );
void setTotoal( sales_data item, unsigned int total );
void setSellout( sales_data item, unsigned int sellout );
void setPrice( sales_data item, double price );

void showIsbn( sales_data item );
void showTotal( sales_data item );
void showSellout( sales_data item );
void showPrice( sales_data item );

#endif


