#ifndef _SALES_DATA_CHAIN_H
#define _SALES_DATA_CHAIN_H

#include<iostream>
#include<string>
#include<typeinfo>
#include "sales_data.h"
#include "sales_record.h"



sales_data* creatNode( sales_data *node_head, std::string str, unsigned int total,
    unsigned int sellout, double price );
sales_data* removeNode( sales_data *node_head, int num );
sales_data* findNode( sales_data* node_head, std::string para );
sales_data* findNode( sales_data* node_head, int para );
sales_data* findNode( sales_data* node_head, double para );
int lengthNode( sales_data* node_head );
sales_data* sortNode( sales_data* node_head );

void showNode( sales_data *node_head );

#endif



