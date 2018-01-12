#ifndef _SALESRECORD_H
#define _SALESRECORD_H

#include<iostream>
#include<string>
#include<fstream>
#include<sstream>
#include "sales_data.h"
#include "sales_data_chain.h"

sales_data* readRecord( std::fstream &fin, sales_data *list );

bool ifisbn( char tmp[] );

void skipTitle( std::fstream &fin );
std::string getId( std::fstream &fin );
std::string getTotal( std::fstream &fin );
std::string getPrice( std::fstream &fin );
std::string getSellout( std::fstream &fin );


#endif



