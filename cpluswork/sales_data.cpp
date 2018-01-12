#include "sales_data.h"

std::string getIsbn( sales_data *item ){ return item->isbn; }
unsigned int getTotoal( sales_data *item ){ return item->totoal; }
unsigned int getSellout( sales_data *item ){ return item->sellout; }
double getPrice( sales_data *item ){ return item->price; }
int getNum( sales_data *item ){ return item->num; }

void setIsbn( sales_data *item, std::string isbn ){  item->isbn = isbn; }
void setTotoal( sales_data *item, unsigned int total ){  item->totoal = total; }
void setSellout( sales_data *item, unsigned int sellout ){  item->sellout = sellout; }
void setPrice( sales_data *item, double price ){  item->price = price; }
void setNum( sales_data *item, int num ){ item->num = num; }

void showIsbn( sales_data *item ){
    std::cout << "ISBN: " << item->isbn << std::endl;
}

void showTotal( sales_data *item ){
    std::cout << "Total: " << item->totoal << std::endl;
}

void showSellout( sales_data *item ){
    std::cout << "Sellout: " << item->sellout << std::endl;
}

void showPrice( sales_data *item ){
    std::cout << "Price: " << item->price << std::endl;
}

void showNum( sales_data *item ){
    std::cout << "No.: " << item->num << std::endl;
}

unsigned int str2uint( std::string str ){
    std::istringstream tmpstr{ str };
    unsigned int result{ 0 };
    tmpstr >> result;
    return result;
}

double str2double( std::string str ){
    std::istringstream tmpstr{ str };
    double result{0.0};
    tmpstr >> result;
    return result;
}