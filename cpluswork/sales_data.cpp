#include "sales_data.h"

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

